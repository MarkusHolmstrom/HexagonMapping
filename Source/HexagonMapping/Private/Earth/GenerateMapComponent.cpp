// MarkusHolmstrom no rights reserved


#include "Earth/GenerateMapComponent.h"
#include "DrawDebugHelpers.h"
#include "Earth/HexagonActor.h"

// Sets default values for this component's properties
UGenerateMapComponent::UGenerateMapComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

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
	//Adding climates manually
	ClimateInfo.Add(FClimateInfo(0, 5, EClimateType::Cold, ColdPercentages));
	ClimateInfo.Add(FClimateInfo(6, 14, EClimateType::Timid, TimidPercentages));
	ClimateInfo.Add(FClimateInfo(15, 30, EClimateType::Normal, NormalPercentages));
	ClimateInfo.Add(FClimateInfo(31, 42, EClimateType::Warm, WarmPercentages));
	ClimateInfo.Add(FClimateInfo(43, 49, EClimateType::Hot, HotPercentages));

	HexGrid.SetNumZeroed(MapWidth);
	for (int32 i = 0; i < HexGrid.Num(); i++)
	{
		HexGrid[i].SetNumZeroed(MapHeight);
	}

	for (int32 y = 0; y < MapHeight; y++)
	{
		for (int32 x = 0; x < MapWidth; x++)
		{
			const bool oddRow = y % 2 == 1;
			const float xPos = oddRow ? (x * HorOffset) + OddRowHorOffset : x * HorOffset;
			const float yPos = y * VerOffset;

			TSubclassOf<AHexagonActor> tileToSpawn = GrassHexTile;
			float waterRandom = FMath::RandRange(0.0f, 1.0f);
			FClimateInfo FCI = GetCorrectInfo(y);
			if (waterRandom <= FCI.OceanPercentage)
			{
				tileToSpawn = WaterHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.ShorePercentage)
			{
				tileToSpawn = ShoreHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.PlainsPercentage)
			{
				tileToSpawn = PlainsHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.DesertPercentage)
			{
				tileToSpawn = DesertHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.MountainPercentage)
			{
				tileToSpawn = MountainHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.JunglePercentage)
			{
				tileToSpawn = JungleHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.TundraPercentage)
			{
				tileToSpawn = TundraHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.IcePercentage)
			{
				tileToSpawn = IceHexTile;
			}
			else if (FMath::RandRange(0.0f, 1.0f) <= FCI.SnowPercentage)
			{
				tileToSpawn = SnowHexTile;
			}

			AHexagonActor* newTile = GetWorld()->SpawnActor< AHexagonActor>(tileToSpawn, FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);
			newTile->TileIndex = FIntPoint(x, y);
			//newTile->SetActorLabel(FString::Printf(TEXT("Tile %d, %d"), x, y));
			HexGrid[x][y] = newTile;
		}
	}

}


// Called every frame
void UGenerateMapComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGenerateMapComponent::GenerateMap(int Height, int Width)
{
	for (size_t i = 0; i < Height; i++)
	{
		for (size_t j = 0; j < Width; j++)
		{

		}
	}
}

FClimateInfo UGenerateMapComponent::GetCorrectInfo(int32 Index)
{
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

FVector UGenerateMapComponent::GetEndLocation(int Height, int Width)
{
	return FVector();
}

void UGenerateMapComponent::ShootLaser()
{
	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, DefaultComponentQueryParams,
		DefaultResponseParams)) {

	}
}

