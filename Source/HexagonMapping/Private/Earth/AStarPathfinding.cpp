// MarkusHolmstrom no rights reserved


#include "Earth/AStarPathfinding.h"
#include "Earth/HexagonActor.h"
#include "Earth/GenerateMapComponent.h"

// Sets default values
AAStarPathfinding::AAStarPathfinding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAStarPathfinding::BeginPlay()
{
	Super::BeginPlay();
	//TODO how to get this fella>?
	MapGenerator = Cast<UGenerateMapComponent>(Planet->GetComponentByClass(UActorComponent::StaticClass()));

}

// Called every frame
void AAStarPathfinding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (!MapGenerator)
	{
		MapGenerator = Cast<UGenerateMapComponent>(Planet->GetComponentByClass(UActorComponent::StaticClass()));

	}*/
}

void AAStarPathfinding::SetTargetCoordinates(FIntPoint NewTarget)
{
	TargetCoordinates = NewTarget;
}

TArray<AHexagonActor*> AAStarPathfinding::GetAdjacentTiles(AHexagonActor* Hexagon)
{
	TArray<AHexagonActor*> AdjacentTiles;
	FIntPoint Coord = Hexagon->TileIndex;
	AHexagonActor* CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	CheckTile = MapGenerator->GetTile(Coord.X, Coord.Y - 1);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	CheckTile = MapGenerator->GetTile(Coord.X + 1, Coord.Y);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	CheckTile = MapGenerator->GetTile(Coord.X, Coord.Y + 1);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y);
	if (CheckTile)
	{
		AdjacentTiles.Add(CheckTile);
	}
	return TArray<AHexagonActor*>();
}

float AAStarPathfinding::GetManhattanDistance(FVector Start, FVector Goal)
{
	return FVector::Distance(Start, Goal);
}

