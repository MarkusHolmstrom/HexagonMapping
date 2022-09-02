// MarkusHolmstrom no rights reserved
// radera!!!


#include "Earth/TestActorComponent.h"
#include "Earth/HexagonActor.h"
#include "Earth/DetailActor.h"
#include "Enums.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UTestActorComponent::UTestActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTestActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// Set up the in script grid
	HexGrid.SetNumZeroed(MapWidth);
	for (int32 i = 0; i < HexGrid.Num(); i++)
	{
		HexGrid[i].SetNumZeroed(MapHeight);
	}
	// iterate through the grid
	GenerateMap(MapHeight, MapWidth);
}


// Called every frame
void UTestActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTestActorComponent::GenerateMap(int Height, int Width)
{
	int32 Index = 0;
	for (size_t x = 0; x < Height; x++)
	{
		for (size_t y = 0; y < Width; y++)
		{
			const bool oddRow = y % 2 == 1;
			const float xPos = oddRow ? (x * HorOffset) + OddRowHorOffset : x * HorOffset;
			const float yPos = y * VerOffset;

			TSubclassOf<AHexagonActor> tileToSpawn = HexTile0;
			if (oddRow)
			{
				tileToSpawn = HexTile1;
			}

			AHexagonActor* newTile = GetWorld()->SpawnActor<AHexagonActor>(tileToSpawn, FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);

			HexGrid[x][y] = newTile;
		}
	}
}

