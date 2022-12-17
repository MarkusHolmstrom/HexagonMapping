// MarkusHolmstrom no rights reserved


#include "Earth/AStarPathfinding.h"
#include "Earth/HexagonTile.h"
#include "Earth/GenerateMapComponent.h"
#include "Enums.h"
#include "Earth/WorldPawn.h"

// Sets default values
AAStarPathfinding::AAStarPathfinding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAStarPathfinding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAStarPathfinding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAStarPathfinding::SetTargetCoordinates(AActor* Tile)
{
	AHexagonTile* CheckValidTile = Cast<AHexagonTile>(Tile);
	if (!IsValidTile(CheckValidTile))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, 
			TEXT("Warning: invalid tile chosen!! reseting values"));

		TargetCoordinates.Empty();
		bSearchingForPath = true;
		CleanUp();
		return;
	}
	TargetCoordinates.Add(Tile);

	if (TargetCoordinates.Num() >= TargetCount)
	{
		StartCalculatePath();
	}
}

bool AAStarPathfinding::IsValidTile(AHexagonTile* Tile)
{
	if (!Tile)
	{
		return false;
	}
	if (Tile->Hinder == EHinder::Mountain)
	{
		return false;
	}
	// if Unit can travel over water
	else if (!bCanTravelWater && !bWaterVessel && Tile->Hinder == EHinder::Water)
	{
		return false;
	}
	// If boat, that needs water, because it is boat:
	else if (bWaterVessel && Tile->Hinder != EHinder::Water)
	{
		return false;
	}
	return true;
}

void AAStarPathfinding::StartCalculatePath()
{
	StartTile = Cast<AHexagonTile>(TargetCoordinates[0]);
	CurrentTile = StartTile;
	GoalTile = Cast<AHexagonTile>(TargetCoordinates[1]); // TODO or max of list num()
	FVector Start = TargetCoordinates[0]->GetActorLocation();
	FVector Goal = TargetCoordinates[1]->GetActorLocation();

	ManhattanDistance = GetManhattanDistance(Start, Goal);
	TotalMovementCost = GetGScore(StartTile, GoalTile);
	/*GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue,
		FString::Printf(TEXT("%d"), TotalMovementCost));*/
	GoalDirection = GetDirection(Start, Goal);
	PathfindingLoop();
}

void AAStarPathfinding::PathfindingLoop()
{
	while (bSearchingForPath)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("on emore time:"));
		Tries++;

		TArray<AHexagonTile*> AdjTiles = GetAdjacentTiles(CurrentTile, GoalDirection);
		CurrentTile = GetBestScore(AdjTiles, 1000000.0f);
		if (!CurrentTile)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("error: np cur tile found!"));
			return;
		}
		if (CurrentTile->TileIndex == GoalTile->TileIndex)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("target found, sire!"));
			bSearchingForPath = false;
		}
		else if (!CurrentTile || Tries > MaxTries)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("error or max tries reached"));
			bSearchingForPath = false;
		}
	}
	// Clears up varaibles and removes stuff to reset for a new path finding!
	// Is this comment not spefic enough for ya? Then go and doo... something then!
	Tries = 0;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("nu ere slut!!"));
	// Remove gameobjects, lights and path tiles after some seconds
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &AAStarPathfinding::CleanUp, 5.0f, false);
	
	TargetCoordinates.Empty();
	bSearchingForPath = true;
}

AHexagonTile* AAStarPathfinding::GetBestScore(TArray<AHexagonTile*> Tiles, float TopScore)
{
	TArray<AHexagonTile*> ViableTiles = GetViableTiles(Tiles);
	if (ViableTiles.Num() == 0)
	{
		return nullptr;
	}
	AHexagonTile* BestTile = ViableTiles[0]; // test to avoid nullptr
	// TODO fix this so it iteraties more options, rather than the best by step by step
	// and add new options if the easy tiles is not viable. add stop as well when the
	// path is not possible for some reason along the way
	for (size_t i = 0; i < ViableTiles.Num(); i++)
	{
		if (!ViableTiles[i])
		{
			break;
		}
		if (ViableTiles[i]->Hinder == EHinder::Mountain)
		{
			ViableTiles.Remove(ViableTiles[i]);
			break;
		}
		float TileScore = ViableTiles[i]->MoveCost;
		if (GoalTile)
		{
			TileScore += GetGScore(ViableTiles[i], GoalTile);
			TileScore += GetManhattanDistance(ViableTiles[i]->GetActorLocation(), GoalTile->GetActorLocation());
		}
		if (TileScore < TopScore)
		{
			TopScore = TileScore;
			BestTile = ViableTiles[i];
		}
	}
	if (BestTile)
	{
		BestTile->ChangeHighlight(true);
	}
	return BestTile;
}

TArray<AHexagonTile*> AAStarPathfinding::GetViableTiles(TArray<AHexagonTile*> Tiles)
{
	TArray<AHexagonTile*> NewTiles;
	for (size_t i = 0; i < Tiles.Num(); i++)
	{
		if (Tiles[i] && IsValidTile(Tiles[i]))
		{
			NewTiles.Add(Tiles[i]);
		}
	}
	// TODO fix this in case tile is surrounded by mountains
	return NewTiles;
}

float AAStarPathfinding::GetScore(AHexagonTile* Start, AHexagonTile* Goal)
{
	return 0.0f;
}

//TArray<AHexagonTile*> AAStarPathfinding::GetAdjacentTiles(AHexagonTile* Tile)
//{
//	TArray<AHexagonTile*> AdjacentTiles;
//	FIntPoint Coord = Tile->TileIndex;
//	AHexagonTile* CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	CheckTile = MapGenerator->GetTile(Coord.X, Coord.Y - 1);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	CheckTile = MapGenerator->GetTile(Coord.X + 1, Coord.Y);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	CheckTile = MapGenerator->GetTile(Coord.X, Coord.Y + 1);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	CheckTile = MapGenerator->GetTile(Coord.X - 1, Coord.Y);
//	if (CheckTile)
//	{
//		AdjacentTiles.Add(CheckTile);
//	}
//	return AdjacentTiles;
//}

TArray<AHexagonTile*> AAStarPathfinding::GetAdjacentTiles(AHexagonTile* Tile, EDirection Direction)
{
	TArray<EDirection> Directions = GetDirections(Direction);
	TArray<AHexagonTile*> AdjacentTiles = 
		GetAdjacentTilesBasedOnDirections(Tile, Directions);

	for (size_t i = 0; i < AdjacentTiles.Num(); i++)
	{
		if (AdjacentTiles[i])
		{
			//AdjacentTiles[i]->ChangeHighlight(true);
			ClosedList.Add(AdjacentTiles[i]);
		}
	}
	return AdjacentTiles;
}
// TODO think about this one, needed or not?
TArray<EDirection> AAStarPathfinding::GetDirections(EDirection MainDirection)
{
	TArray<EDirection> Directions;
	Directions.Add(MainDirection);
	if (MainDirection == EDirection::North)
	{
		Directions.Add(EDirection::NorthEast);
		Directions.Add(EDirection::NorthWest);
	}
	else if (MainDirection == EDirection::NorthEast)
	{
		Directions.Add(EDirection::East);
		Directions.Add(EDirection::North);
	}
	else if (MainDirection == EDirection::East)
	{
		Directions.Add(EDirection::NorthEast);
		Directions.Add(EDirection::SouthEast);
	}
	else if (MainDirection == EDirection::SouthEast)
	{
		Directions.Add(EDirection::East);
		Directions.Add(EDirection::South);
	}
	else if (MainDirection == EDirection::South)
	{
		Directions.Add(EDirection::SouthEast);
		Directions.Add(EDirection::SouthWest);
	}
	else if (MainDirection == EDirection::SouthWest)
	{
		Directions.Add(EDirection::West);
		Directions.Add(EDirection::South);
	}
	else if (MainDirection == EDirection::West)
	{
		Directions.Add(EDirection::SouthWest);
		Directions.Add(EDirection::NorthWest);
	}
	else if (MainDirection == EDirection::NorthWest)
	{
		Directions.Add(EDirection::West);
		Directions.Add(EDirection::North);
	}
	return Directions;
}

TArray<AHexagonTile*> AAStarPathfinding::GetAdjacentTilesBasedOnDirections(AHexagonTile* Tile, TArray<EDirection> Directions)
{
	TArray<AHexagonTile*> Tiles;
	FIntPoint Coord = Tile->TileIndex;
	int Row = Coord.Y;
	const bool OddRow = Row % 2 == 1;
	if (OddRow)
	{
		if (Directions[0] == EDirection::North)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
		}
		else if (Directions[0] == EDirection::NorthEast)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
		else if (Directions[0] == EDirection::East)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
		}
		else if (Directions[0] == EDirection::SouthEast)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
		else if (Directions[0] == EDirection::South)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
		}
		else if (Directions[0] == EDirection::SouthWest)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		}
		else if (Directions[0] == EDirection::West)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		}
		else if (Directions[0] == EDirection::NorthWest)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
		}
		return Tiles;
	}
	// If Y is even number
	if (Directions[0] == EDirection::North)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
	}
	else if (Directions[0] == EDirection::NorthEast)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
	}
	else if (Directions[0] == EDirection::East)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
	}
	else if (Directions[0] == EDirection::SouthEast)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
	}
	else if (Directions[0] == EDirection::South)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
	}
	else if (Directions[0] == EDirection::SouthWest)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
	}
	else if (Directions[0] == EDirection::West)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
	}
	else if (Directions[0] == EDirection::NorthWest)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
	}
	if (Tiles.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("error: cant find neigboring tiles"));
		// TODO figure out why currenttile is null sometimes at starting attempts, this never gets called?
	}
	return Tiles;
}

float AAStarPathfinding::GetManhattanDistance(FVector Start, FVector Goal)
{
	return FVector::Distance(Start, Goal);
}

int AAStarPathfinding::GetGScore(AHexagonTile* Start, AHexagonTile* Goal)
{
	int XDiff = FMath::Abs(Start->TileIndex.X - Goal->TileIndex.X);
	int YDiff = FMath::Abs(Start->TileIndex.Y - Goal->TileIndex.Y);
	// The minus one is because we disregard the starting tile
	int TotalDiff = XDiff + YDiff - 1;
	// In case it checks adjacent tiles in some directions, the score can be zero
	if (TotalDiff < 1)
	{
		return 1;
	}
	return TotalDiff;
}

void AAStarPathfinding::CleanUp()
{
	ClearClosedList();
	RemoveTilesLight();
}

void AAStarPathfinding::ClearClosedList()
{
	for (size_t i = 0; i < ClosedList.Num(); i++)
	{
		ClosedList[i]->ChangeHighlight(false);
	}
	ClosedList.Empty();
}

void AAStarPathfinding::RemoveTilesLight()
{
	if (World)
	{
		World->RemoveLights();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error: cant find the world anymore, sad!!"));

	}
}

EDirection AAStarPathfinding::GetDirection(FVector Start, FVector Goal)
{
	if (Start.X == Goal.X && Start.Y - 1 > Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: N"));

		return EDirection::North;
	}
	else if (Start.X <= Goal.X && Start.Y > Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: NE"));

		return EDirection::NorthEast;
	}
	else if (Start.X < Goal.X && Start.Y == Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: E"));

		return EDirection::East;
	}
	// Breaks the pattern a little bit but we need to check for S before SE
	// because SE overlap when it should be S. Start.Y + 1 is because the offset
	else if (Start.X == Goal.X && Start.Y + 1 < Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: S"));

		return EDirection::South;
	}
	else if (Start.X <= Goal.X && Start.Y < Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: SE"));

		return EDirection::SouthEast;
	}
	else if (Start.X > Goal.X && Start.Y < Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: SW"));

		return EDirection::SouthWest;
	}
	else if (Start.X > Goal.X && Start.Y == Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: W"));

		return EDirection::West;
	}
	else if (Start.X > Goal.X && Start.Y > Goal.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Direction: NW"));

		return EDirection::NorthWest;
	}
	return EDirection();
}

