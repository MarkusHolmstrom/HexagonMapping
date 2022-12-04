// MarkusHolmstrom no rights reserved


#include "Earth/AStarPathfinding.h"
#include "Earth/HexagonTile.h"
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
	//MapGenerator = Cast<UGenerateMapComponent>(Planet->GetComponentByClass(UActorComponent::StaticClass()));

}

// Called every frame
void AAStarPathfinding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAStarPathfinding::SetTargetCoordinates(FVector Position)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, TEXT("ahhhhboi"));
	//TargetCoordinates.Add(NewTarget);

	if (TargetCoordinates.Num() >= TargetCount)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ahhhh"));
		// Fuck manahhattan..
		ManhattanDistance = GetManhattanDistance(TargetCoordinates[0]->GetActorLocation(),
			TargetCoordinates[1]->GetActorLocation());
		RemoveTilesLight(TargetCoordinates);
		TargetCoordinates.Empty();
	}

}

TArray<AHexagonTile*> AAStarPathfinding::GetAdjacentTiles(AHexagonTile* Hexagon)
{
	TArray<AHexagonTile*> AdjacentTiles;
	FIntPoint Coord = Hexagon->TileIndex;
	AHexagonTile* CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1);
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
	return TArray<AHexagonTile*>();
}

float AAStarPathfinding::GetManhattanDistance(FVector Start, FVector Goal)
{
	return FVector::Distance(Start, Goal);
}

void AAStarPathfinding::RemoveTilesLight(TArray<AActor*> Tiles)
{
	for (size_t i = 0; i < Tiles.Num(); i++)
	{
		AHexagonTile* Tile = Cast<AHexagonTile>(Tiles[i]->GetComponentByClass(AHexagonTile::StaticClass()));
		if (!Tile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("tile  miss!!"));

		}
		
		//Tile->RemoveLight();
	}
}

