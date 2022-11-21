// MarkusHolmstrom no rights reserved


#include "Earth/GenerateMapComponent.h"
#include "DrawDebugHelpers.h"
#include "Earth/HexagonActor.h"
#include "Earth/DetailActor.h"
#include "Earth/CylinderShapeMapping.h"
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
			const bool oddRow = y % 2 == 1;
			float xPos = 0;
			float yPos = 0;
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
				xPos = oddRow ? (x * HorOffset) + OddRowHorOffset : x * HorOffset;
				yPos = y * VerOffset;
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
			TSubclassOf<AHexagonActor> tileToSpawn = SetTile(FCI);

			if (bCurIsLand)
			{
				SetShoreTilesAround(CurX, CurY);
			}

			AHexagonActor* newTile = nullptr;

			if (MapType == EMapType::Cylinder)
			{
				newTile = GetWorld()->SpawnActor<AHexagonActor>(
					tileToSpawn, Pos, FRotator::ZeroRotator);

			}
			else if (MapType == EMapType::Sphere)
			{

			}
			else // Create flat surface map
			{
				newTile = GetWorld()->SpawnActor<AHexagonActor>(
					tileToSpawn, FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);
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
					float ForestChance = RandomLCGfloat(0, 100);
					if (ForestChance < ForestPercentage)
					{
						CurHinder = EHinder::Trees;
						GetWorld()->SpawnActor<ADetailActor>(GetTrees(ForestChance), FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);
					}
				}
				SetHexagonInfo(newTile, true, CurHinder);
				HexGrid[x][y] = newTile;
			}
		}
	}
}

TSubclassOf<AHexagonActor> UGenerateMapComponent::SetTile(FClimateInfo Info)
{
	bCurIsLand = true;
	float TileDecider = RandomLCGfloat(0, 100);
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Green,
		FString::Printf(TEXT("%f"), TileDecider));
	TArray<float> TilePercentages = GetTilePercentages(Info);
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
	}
	/*if (RandomLCGfloat(0, 100) <= Info.GrasslandPercentage)
	{
		CurType = EHexType::Grassland;
		return GrassHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.PlainsPercentage)
	{
		CurType = EHexType::Plains;
		return PlainsHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.DesertPercentage)
	{
		CurType = EHexType::Desert;
		return DesertHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.MountainPercentage)
	{
		CurType = EHexType::Mountain;
		return MountainHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.JunglePercentage)
	{
		CurType = EHexType::Jungle;
		return JungleHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.TundraPercentage)
	{
		CurType = EHexType::Tundra;
		return TundraHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.IcePercentage)
	{
		CurType = EHexType::Ice;
		return IceHexTile;
	}
	if (RandomLCGfloat(0, 100) <= Info.SnowPercentage)
	{
		CurType = EHexType::Snow;
		return SnowHexTile;
	}*/
	bCurIsLand = false;
	return SetWaterTile(CurX, CurY);
}

TArray<float> UGenerateMapComponent::GetTilePercentages(FClimateInfo Info)
{
	TArray<float> Percentages;
	float Total = GetTotalPercentages(Info);
	// grass, plains, desert, mountain, jungle, tundra, ice, snow, (water)
	Percentages.Add(Info.GrasslandPercentage);
	Total = GetPercentage(Info.GrasslandPercentage, Total);

	Percentages.Add(Total + Info.PlainsPercentage);
	Total += GetPercentage(Info.PlainsPercentage, Total);

	Percentages.Add(Total + Info.DesertPercentage);
	Total += GetPercentage(Info.DesertPercentage, Total);

	Percentages.Add(Total + Info.MountainPercentage);
	Total += GetPercentage(Info.MountainPercentage, Total);

	Percentages.Add(Total + Info.JunglePercentage);
	Total += GetPercentage(Info.JunglePercentage, Total);

	Percentages.Add(Total + Info.TundraPercentage);
	Total += GetPercentage(Info.TundraPercentage, Total);

	Percentages.Add(Total + Info.IcePercentage);
	Total += GetPercentage(Info.IcePercentage, Total);

	Percentages.Add(Total + Info.SnowPercentage);
	GEngine->AddOnScreenDebugMessage(-1, 20, FColor::Blue,
		FString::Printf(TEXT("%f"), Total));
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

void UGenerateMapComponent::SetHexagonInfo(AHexagonActor* Tile, bool Land, EHinder Hinder)
{
	if (Land)
	{
		Tile->Type = CurType;
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
		//Tile->Resource =
		//Tile->ResourceType =
		Tile->DefModifier = 1.5f;
		Tile->Appeal = 2;
		Tile->Continent = "Your continent name here, plz...";
		Tile->TileIndex = FIntPoint(CurX, CurY);
	}
}

TSubclassOf<AHexagonActor> UGenerateMapComponent::SetWaterTile(int32 X, int32 Y)
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

AHexagonActor* UGenerateMapComponent::GetTile(int32 X, int32 Y)
{
	if (HexGrid.IsValidIndex(X) && HexGrid.IsValidIndex(Y))
	{
		return HexGrid[X][Y];
	}
	return nullptr;
}

void UGenerateMapComponent::SetShoreTilesAround(int32 X, int32 Y)
{
	if (X < 0 || Y < 0)
	{
		return;
	}
	if (Y > 0)
	{
		if (GetTile(X, Y - 1)->Type == EHexType::Ocean)
		{
			GetTile(X, Y - 1)->Type = EHexType::Shore;
			HexGrid[X][Y - 1]->Destroy();
			HexGrid[X][Y - 1] = GetWorld()->SpawnActor<AHexagonActor>(ShoreHexTile,
				HexGrid[X][Y - 1]->GetActorLocation(), FRotator::ZeroRotator);
			return;
		}
		else if (X > 0 && GetTile(X - 1, Y - 1)->Type == EHexType::Ocean)
		{
			GetTile(X - 1, Y - 1)->Type = EHexType::Shore;
			HexGrid[X - 1][Y - 1]->Destroy();
			HexGrid[X - 1][Y - 1] = GetWorld()->SpawnActor<AHexagonActor>(ShoreHexTile,
				HexGrid[X - 1][Y - 1]->GetActorLocation(), FRotator::ZeroRotator);
			return;
		}
	}
	if (X > 0 && GetTile(X - 1, Y)->Type == EHexType::Ocean)
	{
		GetTile(X - 1, Y)->Type = EHexType::Shore;
		HexGrid[X - 1][Y]->Destroy();
		HexGrid[X - 1][Y] = GetWorld()->SpawnActor<AHexagonActor>(ShoreHexTile,
			HexGrid[X - 1][Y]->GetActorLocation(), FRotator::ZeroRotator);
		return;
	}

}

bool UGenerateMapComponent::SetLikelihoodLand(AHexagonActor* Tile)
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

bool UGenerateMapComponent::GetHill(AHexagonActor* Hex)
{
	if (Hex->Type != EHexType::Ocean && Hex->Type != EHexType::Shore && Hex->Type != EHexType::Mountain)
	{
		float HillChance = RandomLCGfloat(0, 100);
		if (HillChance < HillPercentage)
		{
			ADetailActor* Hill = GetWorld()->SpawnActor<ADetailActor>(HillTile,
				Hex->GetActorLocation(),FRotator::ZeroRotator);
			Hill->MeshHill->SetMaterial(0, Hex->MeshTile->GetMaterial(0)); 
		}
	}
	return false;
}

float UGenerateMapComponent::RandomLCGfloat(int32 Min, int32 Max)
{
	if (Max < Min)
	{
		int32 FinMax = Min;
		int32 FinMin = Max;
		Max = FinMax;
		Min = FinMin;
	}
	FRandomStream RS;
	RS.GenerateNewSeed();
	Seed = RS.GetCurrentSeed();

	int32 InitialRand = (A * Seed + C) % M;
	// generate more decimals
	int32 Divider = (Max * 100) + 5;
	int32 RandCent = FMath::Abs(InitialRand) % Divider;

	float RandFloat = (float)RandCent / (float)Divider;
	return RandFloat;
}


