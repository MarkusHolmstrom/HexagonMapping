// MarkusHolmstrom no rights reserved


#include "Earth/GenerateMapComponent.h"
#include "DrawDebugHelpers.h"
#include "Earth/HexagonTile.h"
#include "Earth/WorldPawn.h"
#include "Earth/DetailActor.h"
#include "Earth/CylinderShapeMapping.h"
#include "Earth/AStarPathFinding.h"
#include "Enums.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UGenerateMapComponent::UGenerateMapComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;
	// ...DrawDebugLine(
	/*GetWorld(),
		traceStart,
		hit.Location,
		FColor(255, 0, 0),
		false, -1, 0,
		12.333
		);*/
}


// Called when the game starts
void UGenerateMapComponent::BeginPlay()
{
	Super::BeginPlay();

	if (MapType == EMapType::Cylinder)
	{
		ShapeMap->SetShape(true);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue,
			FString::Printf(TEXT("cylinder")));
	}
	else if (MapType == EMapType::Sphere)
	{
		ShapeMap->SetShape(false);
	}

	if (WorldPawn)
	{
		// https://www.youtube.com/watch?v=MwqgmhOL8gs
		WorldPawn->OnTileClicked.AddDynamic(this, &UGenerateMapComponent::OnTileClicked);
	}

	//Adding climates manually
	ClimateInfo.Add(FClimateInfo(0, 5, EClimateType::Cold, DefaultLandMultiplier, ColdPercentages));
	ClimateInfo.Add(FClimateInfo(6, 14, EClimateType::Timid, DefaultLandMultiplier, TimidPercentages));
	ClimateInfo.Add(FClimateInfo(15, 30, EClimateType::Normal, DefaultLandMultiplier, NormalPercentages));
	ClimateInfo.Add(FClimateInfo(31, 42, EClimateType::Warm, DefaultLandMultiplier, WarmPercentages));
	ClimateInfo.Add(FClimateInfo(43, 49, EClimateType::Hot, DefaultLandMultiplier, HotPercentages));

	ClimateInfo.Add(FClimateInfo(0, 5, EClimateType::Cold, IncreasedLandMultiplier, ColdPercentages));
	ClimateInfo.Add(FClimateInfo(6, 14, EClimateType::Timid, IncreasedLandMultiplier, TimidPercentages));
	ClimateInfo.Add(FClimateInfo(15, 30, EClimateType::Normal, IncreasedLandMultiplier, NormalPercentages));
	ClimateInfo.Add(FClimateInfo(31, 42, EClimateType::Warm, IncreasedLandMultiplier, WarmPercentages));
	ClimateInfo.Add(FClimateInfo(43, 49, EClimateType::Hot, IncreasedLandMultiplier, HotPercentages));

	// Set up the in script grid
	HexGrid.SetNumZeroed(MapWidth);
	for (int32 i = 0; i < HexGrid.Num(); i++)
	{
		HexGrid[i].SetNumZeroed(MapHeight);
	}
	if (Pathfinding)
	{
		Pathfinding->MapGenerator = this;
	}
	// create a map
	GenerateMap(MapHeight, MapWidth);
	//FVector Pos = ShapeMap->GetHexLocation(2, 2, MapHeight, MapWidth, Radius);
}

// Called every frame
void UGenerateMapComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGenerateMapComponent::GenerateMap(int Height, int Width)
{
	for (size_t x = 0; x < Height; x++)
	{
		for (size_t y = 0; y < Width; y++)
		{
			const bool OddRow = y % 2 == 1;
			float XPos = 0;
			float YPos = 0;
			FVector Pos = FVector::ZeroVector;

			if (MapType == EMapType::Cylinder)
			{
				Pos = ShapeMap->GetHexLocation(x, y, MapHeight, MapWidth, Radius);
			}
			else if (MapType == EMapType::Sphere)
			{

			}
			else // Create flat surface map
			{
				XPos = OddRow ? (x * HorOffset) + OddRowHorOffset : x * HorOffset;
				YPos = y * VerOffset;
			}

			FClimateInfo FCI;
			if (IsLandMoreLikely(x, y))
			{
				// This arrays content give larger chance of land tiles
				FCI = GetCorrectClimate(y, true);

			}
			else
			{
				FCI = GetCorrectClimate(y, false);
			}

			CurX = x;
			CurY = y;
			TSubclassOf<AHexagonTile> tileToSpawn = SetTile(FCI);
			if (bIsTileLand)
			{
				// Checks if adjacent tiles are ocean tiles, instead of shores:
				SetShoreTilesAround(CurX, CurY);
			}

			AHexagonTile* newTile = nullptr;

			FActorSpawnParameters SpawnInfo;
			// Spawn failure is not an option!
			SpawnInfo.bNoFail = true;
			SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			
			if (MapType == EMapType::Cylinder)
			{
				newTile = GetWorld()->SpawnActor<AHexagonTile>(
					tileToSpawn, Pos, FRotator::ZeroRotator, SpawnInfo);
			}
			else if (MapType == EMapType::Sphere)
			{

			}
			else // Create flat surface map
			{
				newTile = GetWorld()->SpawnActor<AHexagonTile>(
					tileToSpawn, FVector(FIntPoint(XPos, YPos)), 
					FRotator::ZeroRotator, SpawnInfo);
			}
			
			EHinder CurHinder = EHinder::None;
			if (newTile)
			{
				bLandLikely = SetLikelihoodLand(newTile);
				// Check if hill will be set:
				newTile->bHasHill = GetHill(newTile);
				// Check if add forest or not
				if (newTile->Type == EHexType::Grassland || newTile->Type == EHexType::Plains || newTile->Type == EHexType::Tundra)
				{
					float ForestChance = RandomLCGfloatPercentage(0, MaxRandom);
					Randoms.Add(ForestChance);
					if (ForestChance < ForestPercentage)
					{
						CurHinder = EHinder::Trees;
						GetWorld()->SpawnActor<ADetailActor>(GetTrees(ForestChance), FVector(FIntPoint(XPos, YPos)), FRotator::ZeroRotator);
					}
				}
				SetHexagonInfo(newTile, bIsTileLand, CurHinder);
				newTile->TileLocation = FVector(FIntPoint(XPos, YPos));
				HexGrid[x][y] = newTile;
			}
		}
	}
}

TSubclassOf<AHexagonTile> UGenerateMapComponent::SetTile(FClimateInfo Info)
{
	bIsTileLand = true;
	/*float TileDecider = RandomLCGfloat(0, 100);

	UE_LOG(LogTemp, Display, TEXT("Tiledecider is: %f"), TileDecider);
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green,
		FString::Printf(TEXT("%f"), TileDecider));*/
	/*TArray<float> TilePercentages = GetTilePercentages(Info);
	if (TileDecider <= TilePercentages[0])
	{
		CurType = EHexType::Grassland;
		return GrassHexTile;
	}
	if (TileDecider <= TilePercentages[1])
	{
		CurType = EHexType::Plains;
		return PlainsHexTile;
	}
	if (TileDecider <= TilePercentages[2])
	{
		CurType = EHexType::Desert;
		return DesertHexTile;
	}
	if (TileDecider <= TilePercentages[3])
	{
		CurType = EHexType::Mountain;
		return MountainHexTile;
	}
	if (TileDecider <= TilePercentages[4])
	{
		CurType = EHexType::Jungle;
		return JungleHexTile;
	}
	if (TileDecider <= TilePercentages[5])
	{
		CurType = EHexType::Tundra;
		return TundraHexTile;
	}
	if (TileDecider <= TilePercentages[6])
	{
		CurType = EHexType::Ice;
		return IceHexTile;
	}
	if (TileDecider <= TilePercentages[7])
	{
		CurType = EHexType::Snow;
		return SnowHexTile;
	}*/
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.GrasslandPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Grassland;
		return GrassHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.PlainsPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Plains;
		return PlainsHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.DesertPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Desert;
		return DesertHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.MountainPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Mountain;
		return MountainHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.JunglePercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Jungle;
		return JungleHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.TundraPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Tundra;
		return TundraHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.IcePercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Ice;
		return IceHexTile;
	}
	if (RandomLCGfloatPercentage(0, MaxRandom) <= Info.SnowPercentage)
	{
		Randoms.Add(0);
		CurType = EHexType::Snow;
		return SnowHexTile;
	}
	bIsTileLand = false;
	return SetWaterTile(CurX, CurY);
}

TArray<float> UGenerateMapComponent::GetTilePercentages(FClimateInfo Info)
{
	TArray<float> Percentages;
	float Total = GetTotalPercentages(Info);
	float PercentageStack = 0.0f;
	// grass, plains, desert, mountain, jungle, tundra, ice, snow, (water)
	Percentages.Add(Info.GrasslandPercentage);
	PercentageStack = GetPercentage(Info.GrasslandPercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);
	//TODO fundera ut dessa
	Percentages.Add(PercentageStack + Info.PlainsPercentage);
	PercentageStack += GetPercentage(Info.PlainsPercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.DesertPercentage);
	PercentageStack += GetPercentage(Info.DesertPercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.MountainPercentage);
	PercentageStack += GetPercentage(Info.MountainPercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.JunglePercentage);
	PercentageStack += GetPercentage(Info.JunglePercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.TundraPercentage);
	PercentageStack += GetPercentage(Info.TundraPercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.IcePercentage);
	PercentageStack += GetPercentage(Info.IcePercentage, Total);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);

	Percentages.Add(PercentageStack + Info.SnowPercentage);
	UE_LOG(LogTemp, Warning, TEXT("Stack is: %f"), PercentageStack);
	return Percentages;
}

float UGenerateMapComponent::GetTotalPercentages(FClimateInfo Info)
{
	float Total = Info.GrasslandPercentage;
	Total += Info.PlainsPercentage;
	Total += Info.DesertPercentage;
	Total += Info.MountainPercentage;
	Total += Info.JunglePercentage;
	Total += Info.TundraPercentage;
	Total += Info.IcePercentage;
	Total += Info.SnowPercentage;
	return Total;
}

float UGenerateMapComponent::GetPercentage(float Percentage, float Total)
{
	return Percentage / Total;
}

void UGenerateMapComponent::SetHexagonInfo(AHexagonTile* Tile, bool Land, EHinder Hinder)
{
	Tile->MapComponent = this;
	//Tile->OnTileClicked.AddDynamic(this, &UGenerateMapComponent::OnTileClicked);

	if (Land)
	{
		Tile->Type = CurType;
		if (Tile->Type == EHexType::Mountain)
		{
			Tile->Hinder = EHinder::Mountain;
			Tile->Appeal = 5;
			Tile->Continent = "Your continent name here, plz...";
			Tile->TileIndex = FIntPoint(CurX, CurY);
			return;
		}
		if (Tile->bHasHill)
		{
			// Hills overrides trees, because trees can be removed
			Tile->Hinder = EHinder::Hill;
		}
		else
		{
			Tile->Hinder = Hinder;
		}
		if (Tile->bHasHill || Tile->Hinder == EHinder::Trees)
		{
			Tile->MoveCost = 2.0f;
		}
		else
		{
			Tile->MoveCost = 1.0f;
		}
		Tile->DefModifier = 1.5f;
		Tile->Appeal = 2;
	}
	else
	{
		Tile->Hinder = EHinder::Water;
		Tile->MoveCost = 1.0f;
	}

	//Tile->Resource =
	//Tile->ResourceType =
	Tile->Continent = "Your continent name here, plz...";
	Tile->TileIndex = FIntPoint(CurX, CurY);
}

TSubclassOf<AHexagonTile> UGenerateMapComponent::SetWaterTile(int32 X, int32 Y)
{
	if (CheckTileForCoast(X - 1, Y - 1) || 
		CheckTileForCoast(X, Y - 1) || 
		CheckTileForCoast(X - 1, Y))
	{
		CurType = EHexType::Shore;
		return ShoreHexTile;
	}
	CurType = EHexType::Ocean;
	return WaterHexTile;
}

bool UGenerateMapComponent::IsLandMoreLikely(int32 X, int32 Y)
{
	if (LandLikely.Contains(FIntPoint(X, Y)))
	{
		//LandLikely.Empty();
		return true;
	}
	else if (OceanLikely.Contains(FIntPoint(X, Y)))
	{
		//OceanLikely.Empty();
		return false;
	}

	AddToList(X, Y, bLandLikely, IncreaseRadius);
	return bLandLikely;
	//if (bLandLikely)
	//{
	//	// add positive tiles (that has not been iterated) to make em 
	//	// more likely to be land tiles
	//	//LandLikely.Add(FIntPoint(X, Y)); 
	//	LandLikely.Add(FIntPoint(X, Y + 1)); 
	//	LandLikely.Add(FIntPoint(X + 1, Y));
	//	if (X > 0)
	//	{
	//		LandLikely.Add(FIntPoint(X - 1, Y + 1));
	//		//LandLikely.Add(FIntPoint(X - 1, Y + 2));
	//	}
	//	else
	//	{
	//		// Opposite side of the map
	//		LandLikely.Add(FIntPoint(100 - 1, Y));
	//		LandLikely.Add(FIntPoint(100 - 1, Y + 1));
	//	}
	//	LandLikely.Add(FIntPoint(X + 2, Y));
	//	//LandLikely.Add(FIntPoint(X + 1, Y + 1));
	//	LandLikely.Add(FIntPoint(X + 1, Y + 2));
	//	if (X > 1)
	//	{
	//		LandLikely.Add(FIntPoint(X - 2, Y + 1));
	//	}
	//	return true;
	//}
	//else
	//{
	//	//OceanLikely.Add(FIntPoint(X, Y));
	//	OceanLikely.Add(FIntPoint(X + 1, Y + 1));
	//	//OceanLikely.Add(FIntPoint(X + 1, Y + 2));
	//	OceanLikely.Add(FIntPoint(X, Y + 1));
	//	if (X > 1)
	//	{
	//		OceanLikely.Add(FIntPoint(X - 2, Y + 1));
	//	}
	//	else
	//	{
	//		OceanLikely.Add(FIntPoint(100 - 1, Y + 1));
	//	}
	//	if (X > 0)
	//	{
	//		OceanLikely.Add(FIntPoint(X - 1, Y + 1));
	//		//OceanLikely.Add(FIntPoint(X - 1, Y + 2));
	//	}
	//	OceanLikely.Add(FIntPoint(X + 1, Y));
	//	//OceanLikely.Add(FIntPoint(X + 2, Y));
	//	return false;
	//}
}

void UGenerateMapComponent::AddToList(int32 X, int32 Y, bool Land, int32 AddRadius)
{
	if (Land)
	{
		// add positive tiles (that has not been iterated) to make em 
		// more likely to be land tiles
		if (AddRadius == 1)
		{
			LandLikely.Add(FIntPoint(X, Y + 1));
			LandLikely.Add(FIntPoint(X + 1, Y));
			if (X > 0)
			{
				LandLikely.Add(FIntPoint(X - 1, Y + 1));
				//LandLikely.Add(FIntPoint(X - 1, Y + 2));
			}
			else
			{
				// Opposite side of the map
				LandLikely.Add(FIntPoint(100 - 1, Y));
				LandLikely.Add(FIntPoint(100 - 1, Y + 1));
			}
			LandLikely.Add(FIntPoint(X + 2, Y));
			//LandLikely.Add(FIntPoint(X + 1, Y + 1));
			LandLikely.Add(FIntPoint(X + 1, Y + 2));
			if (X > 1)
			{
				LandLikely.Add(FIntPoint(X - 2, Y + 1));
			}
		}
		else
		{
			LandLikely.Add(FIntPoint(X, Y + 1));
			LandLikely.Add(FIntPoint(X + 1, Y));
			if (X > 0)
			{
				LandLikely.Add(FIntPoint(X - 1, Y + 1));
				LandLikely.Add(FIntPoint(X - 1, Y + 2));
			}
			else
			{
				// Opposite side of the map
				LandLikely.Add(FIntPoint(100 - 1, Y));
				LandLikely.Add(FIntPoint(100 - 1, Y + 1));
			}
			LandLikely.Add(FIntPoint(X + 2, Y));
			LandLikely.Add(FIntPoint(X + 1, Y + 1));
			LandLikely.Add(FIntPoint(X + 1, Y + 2));
			if (X > 1)
			{
				LandLikely.Add(FIntPoint(X - 2, Y + 1));
			}
		}
	}
	else
	{
		//OceanLikely.Add(FIntPoint(X, Y));
		OceanLikely.Add(FIntPoint(X + 1, Y + 1));
		//OceanLikely.Add(FIntPoint(X + 1, Y + 2));
		OceanLikely.Add(FIntPoint(X, Y + 1));
		if (X > 1)
		{
			OceanLikely.Add(FIntPoint(X - 2, Y + 1));
		}
		else
		{
			OceanLikely.Add(FIntPoint(100 - 1, Y + 1));
		}
		if (X > 0)
		{
			OceanLikely.Add(FIntPoint(X - 1, Y + 1));
			//OceanLikely.Add(FIntPoint(X - 1, Y + 2));
		}
		OceanLikely.Add(FIntPoint(X + 1, Y));
		//OceanLikely.Add(FIntPoint(X + 2, Y));
	}
}

bool UGenerateMapComponent::CheckTileForCoast(int32 X, int32 Y)
{
	if (LandLikely.Contains(FIntPoint(X, Y)))
	{
		return true;
	}
	else if (GetTile(X, Y))
	{
		if (GetTile(X, Y)->Type != EHexType::Ocean &&
			GetTile(X, Y)->Type != EHexType::Shore)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else // if (OceanLikely.Contains(FIntPoint(X, Y)))
	{
		return false;
	}
}

AHexagonTile* UGenerateMapComponent::GetTile(int32 X, int32 Y)
{
	if (HexGrid.IsValidIndex(X) && HexGrid.IsValidIndex(Y))
	{
		return HexGrid[X][Y];
	}
	return nullptr;
}
// Replace coast lines with shore tiles
void UGenerateMapComponent::SetShoreTilesAround(int32 X, int32 Y)
{
	// TODO fix even/odd colms + help method for setting new tile values
	if (X < 0 || Y < 0)
	{
		return;
	}
	AHexagonTile* NewShoreTile = nullptr;
	if (Y > 0)
	{
		NewShoreTile = GetTile(X, Y - 1);
		if (!NewShoreTile)
		{
			return;
		}
		if (NewShoreTile->Type == EHexType::Ocean)
		{
			HexGrid[X][Y - 1]->Destroy();
			HexGrid[X][Y - 1] = GetWorld()->SpawnActor<AHexagonTile>(ShoreHexTile,
				HexGrid[X][Y - 1]->GetActorLocation(), FRotator::ZeroRotator);
			NewShoreTile = GetTile(X, Y - 1);
			NewShoreTile->Type = EHexType::Shore;
			NewShoreTile->Hinder = EHinder::Water;
			return;
		}
		NewShoreTile = GetTile(X - 1, Y - 1);
		if (!NewShoreTile)
		{
			return;
		}
		else if (X > 0 && NewShoreTile->Type == EHexType::Ocean)
		{
			HexGrid[X - 1][Y - 1]->Destroy();
			HexGrid[X - 1][Y - 1] = GetWorld()->SpawnActor<AHexagonTile>(ShoreHexTile,
				HexGrid[X - 1][Y - 1]->GetActorLocation(), FRotator::ZeroRotator);
			NewShoreTile = GetTile(X - 1, Y - 1);
			NewShoreTile->Type = EHexType::Shore;
			NewShoreTile->Hinder = EHinder::Water;
			return;
		}
	}
	NewShoreTile = GetTile(X - 1, Y);
	if (!NewShoreTile)
	{
		return;
	}
	if (X > 0 && NewShoreTile->Type == EHexType::Ocean)
	{
		HexGrid[X - 1][Y]->Destroy();
		HexGrid[X - 1][Y] = GetWorld()->SpawnActor<AHexagonTile>(ShoreHexTile,
			HexGrid[X - 1][Y]->GetActorLocation(), FRotator::ZeroRotator);
		NewShoreTile = GetTile(X - 1, Y);
		NewShoreTile->Type = EHexType::Shore;
		NewShoreTile->Hinder = EHinder::Water;
	}
}

bool UGenerateMapComponent::SetLikelihoodLand(AHexagonTile* Tile)
{
	if (Tile->Type == EHexType::Ocean || Tile->Type == EHexType::Shore)
	{
		return false;
	}
	return true;
}

FClimateInfo UGenerateMapComponent::GetCorrectClimate(int32 Index, bool HigherPossLand)
{
	if (HigherPossLand)
	{
		if (Index <= 5 || Index >= 94)
		{
			return ClimateInfo[5];
		}
		else if ((Index >= 6 && Index <= 14) || (Index >= 84 && Index <= 93))
		{
			return ClimateInfo[6];
		}
		else if ((Index >= 15 && Index <= 30) || (Index >= 67 && Index <= 83))
		{
			return ClimateInfo[7];
		}
		else if ((Index >= 31 && Index <= 42) || (Index >= 54 && Index <= 66))
		{
			return ClimateInfo[8];
		}
		else if ((Index >= 43 && Index <= 49) || (Index >= 50 && Index <= 53))
		{
			return ClimateInfo[9];
		}
		return FClimateInfo();
	}
	if (Index <= 5 || Index >= 94)
	{
		return ClimateInfo[0];
	}
	else if ((Index >= 6 && Index <= 14) || (Index >= 84 && Index <= 93))
	{
		return ClimateInfo[1];
	}
	else if ((Index >= 15 && Index <= 30) || (Index >= 67 && Index <= 83))
	{
		return ClimateInfo[2];
	}
	else if ((Index >= 31 && Index <= 42) || (Index >= 54 && Index <= 66))
	{
		return ClimateInfo[3];
	}
	else if ((Index >= 43 && Index <= 49) || (Index >= 50 && Index <= 53))
	{
		return ClimateInfo[4];
	}
	return FClimateInfo();
}

TSubclassOf<ADetailActor> UGenerateMapComponent::GetTrees(float Random)
{
	if (Random < ForestPercentage * 0.25)
	{
		return TreeTiles[0];
	}
	else if (Random < ForestPercentage * 0.5)
	{
		return TreeTiles[1];
	}
	else if (Random < ForestPercentage * 0.75)
	{
		return TreeTiles[2];
	}
	else 
	{
		return TreeTiles[3];
	}
}

bool UGenerateMapComponent::GetHill(AHexagonTile* Hex)
{
	if (Hex->Type != EHexType::Ocean && Hex->Type != EHexType::Shore && Hex->Type != EHexType::Mountain)
	{
		float HillChance = RandomLCGfloatPercentage(0, MaxRandom);
		Randoms.Add(HillChance);
		if (HillChance < HillPercentage)
		{
			ADetailActor* Hill = GetWorld()->SpawnActor<ADetailActor>(HillTile,
				Hex->GetActorLocation(),FRotator::ZeroRotator);
			Hill->MeshHill->SetMaterial(0, Hex->MeshTile->GetMaterial(0)); 
		}
	}
	return false;
}

void UGenerateMapComponent::OnTileClicked(AActor* Tile)
{
	if (Pathfinding)
	{
		Pathfinding->SetTargetCoordinates(Tile);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("map comp got a message"));

	}
}

float UGenerateMapComponent::RandomLCGfloatPercentage(float Min, float Max)
{
    
	// check if Max would be smaller than Min, exchange them if thats the case
	if (Max < Min)
	{
		float FinMax = Min;
		float FinMin = Max;
		Max = FinMax;
		Min = FinMin;
	}
	// Generate new seed
	if (bGenNewSeed)
	{
		FRandomStream RS;
		RS.GenerateNewSeed();
		Seed = RS.GetCurrentSeed();
	}
	// TODO test with Initalrandom as new seed instead!! or have rand seed up and a local float as reuslt down here:
	Seed = (Multiplier * Seed + Increment) % Modulus;
	// generate more decimals with the 100, the additional 5 is if Max = 0
	int Divider = (Max * 100) + 5;
	int RandCent = FMath::Abs(Seed) % Divider;

	float RandFloat = (float)RandCent / (float)Divider;
	if (RandFloat < Min)
	{
		RandFloat = Min;
	}

	return RandFloat;
}
