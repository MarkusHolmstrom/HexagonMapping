// MarkusHolmstrom no rights reserved

#include "Earth/AStarPathfinding.h"
#include "Earth/HexagonTile.h"
#include "Earth/GenerateMapComponent.h"
#include "Enums.h"
#include "Earth/WorldPawn.h"
#include "Earth/Path.h"

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
			TEXT("Warning: invalid tile chosen!! reseting values..."));

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
	if (!bCanTravelWater && !bWaterVessel && Tile->Hinder == EHinder::Water)
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
	GoalDirection = GetDirection(StartTile->TileIndex, GoalTile->TileIndex);
	PathfindingLoop();
}

void AAStarPathfinding::LookForMoreOptions()
{
	// Clear prev nodes if NewPath exists:
	/*if (NewPath && NewPath->Nodes.Num() > 0)
	{
		NewPath->Nodes.Empty();
	}*/
	// Create a new path
	NewPath = new Path(StartTile, GoalTile);
	// Depth = 0 is parent node/tile
	Depth = 1;
	bool bAStarPathFinding = true;
	CurrentTile = StartTile;

	ChildTiles.Empty();
	ChildTiles.Add(CurrentTile);
	SearchWidth = 5;
	while (bAStarPathFinding)
	{
		if (ChildTiles.Num() == 0 || Tries >= MaxTries)
		{
			bAStarPathFinding = false;
		}

		//TArray<AHexagonTile*> ViableTiles = GetViableTiles(GetChildren(ChildTiles));
		/*for (size_t i = 0; i < ViableTiles.Num(); i++)
		{
			ViableTiles[i]->ChangeHighlight(true);
		}*/
		
		ChildTiles = GetViableTiles(GetChildren(ChildTiles)); //TODO change after cleanup?
		
		Depth++;
		NewPath->SetTreeDepth(Depth);
		Tries++;
		// update direction - behovs?
		/*FVector Start = CurrentTile->GetActorLocation();
		FVector Goal = TargetCoordinates[1]->GetActorLocation();
		GoalDirection = GetDirection(Start, Goal);*/
	}

	SearchWidth = 3;
	NewPath->CalculatePathsLoop();
	test = NewPath->test;
	TArray<AHexagonTile*> PathTiles;
	for (size_t i = 0; i < NewPath->PathNodes.Num(); i++)
	{
		PathTiles.Add(NewPath->PathNodes[i]->Tile);
		if (PathTiles[i])
		{
			PathTiles[i]->ChangeHighlight(true);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald,
				TEXT("Another light added"));

		}
	}
	DelayedCleanUp(5.0f);

	// y do thesese be so big? r they to big?
	/*GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue,
		FString::Printf(TEXT("%d"), NewPath->Nodes.Num()));
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Purple,
		FString::Printf(TEXT("%d"), ChildTiles.Num()));*/ // = ReturnChildren
	// repeat til enought tries checked, or add more paths to search

}

TArray<AHexagonTile*> AAStarPathfinding::GetChildren(TArray<AHexagonTile*> Tiles)
{
	TArray<AHexagonTile*> ReturnChildren;
	for (size_t i = 0; i < Tiles.Num(); i++)
	{
		TArray<AHexagonTile*> AdjTiles = GetAdjacentTiles(Tiles[i], GoalDirection);
		for (size_t j = 0; j < AdjTiles.Num(); j++)
		{
			if (AdjTiles[j] && IsValidTile(AdjTiles[j]) && Tiles[i] && NewPath)
			{
				ReturnChildren.Add(AdjTiles[j]);
				NewPath->AddChild(Tiles[i], AdjTiles[j], j, Depth, GetGScore(AdjTiles[j], GoalTile)); // cur tile or tiles[i] as parent?
			}
		}
	}
	// TODO this must be reduced! 1.9 million is to much after 10 steps!!!
	GEngine->AddOnScreenDebugMessage(-1, 25, FColor::Cyan,
		FString::Printf(TEXT("Return children: %d"), ReturnChildren.Num()));
	return ReturnChildren;
}

void AAStarPathfinding::PathfindingLoop()
{
	Tries = 0;
	bNeedPathFinding = false;
	bool bFoundGoal = false;
	while (bSearchingForPath)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("on emore time:"));
		Tries++;
		GoalDirection = GetDirection(CurrentTile->TileIndex, GoalTile->TileIndex);
		TArray<AHexagonTile*> AdjTiles = GetAdjacentTiles(CurrentTile, GoalDirection);
		
		CurrentTile = GetBestTile(AdjTiles, 1000000.0f);
		CheckedList.Add(CurrentTile);

		if (bNeedPathFinding || !CurrentTile)// might add this aswell?
		{
			Tries = 0;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, 
				TEXT("need path find: test a new path now!"));
			CleanUp();
			LookForMoreOptions();
			bSearchingForPath = false; 
			return;
		}
		if (!CurrentTile)
		{
			CleanUp();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("error: no cur tile found!"));
			return;
		}
		if (CurrentTile->TileIndex == GoalTile->TileIndex)
		{
			bFoundGoal = true;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Target found via Birdpath, sire!"));
			bSearchingForPath = false;
		}
		else if (Tries >= MaxTries)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("max tries reached"));
			bSearchingForPath = false;
		}
	}

	// if bird path couldnt find a way to the goal tile
	if (!bFoundGoal)
	{
		Tries = 0;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, 
			TEXT("test a new path now!"));
		CleanUp();
		LookForMoreOptions();
		return;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("nu ere slut!!"));
	// Remove gameobjects, lights and path tiles after some seconds
	DelayedCleanUp(5.0f);
}

AHexagonTile* AAStarPathfinding::GetBestTile(TArray<AHexagonTile*> Tiles, float TopScore)
{
	TArray<AHexagonTile*> ViableTiles = GetViableTiles(Tiles);
	if (ViableTiles.Num() == 0)
	{
		bNeedPathFinding = true;
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
			// TODO can generate memory error, to big for long distances?
			NewTiles.Add(Tiles[i]);
		}
	}
	return NewTiles;
}

//TArray<AHexagonTile*> AAStarPathfinding::GetAdjacentTiles(AHexagonTile* Tile, int AdjLimit)
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
		if (AdjacentTiles[i] && IsValidTile(AdjacentTiles[i]) &&
			!CheckedList.Contains(AdjacentTiles[i]))
		{
			//AdjacentTiles[i]->ChangeHighlight(true);
			ClosedList.Add(AdjacentTiles[i]);
		}
	}
	return AdjacentTiles;
}

EDirection AAStarPathfinding::GetDirection(FIntPoint Start, FIntPoint Goal)
{
	if (Start.X == Goal.X && Start.Y - 1 > Goal.Y)
	{
		return EDirection::North;
	}
	else if (Start.X <= Goal.X && Start.Y > Goal.Y)
	{
		return EDirection::NorthEast;
	}
	else if (Start.X < Goal.X && Start.Y == Goal.Y)
	{
		return EDirection::East;
	}
	else if (Start.X == Goal.X && Start.Y + 1 < Goal.Y)
	{
		return EDirection::South;
	}
	else if (Start.X <= Goal.X && Start.Y < Goal.Y)
	{
		return EDirection::SouthEast;
	}
	else if (Start.X > Goal.X && Start.Y < Goal.Y)
	{
		return EDirection::SouthWest;
	}
	else if (Start.X > Goal.X && Start.Y == Goal.Y)
	{
		return EDirection::West;
	}
	else if (Start.X > Goal.X && Start.Y > Goal.Y)
	{
		return EDirection::NorthWest;
	}

	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Error: no viable Direction found, this shouldnt be reachable, what have you done?"));

	return EDirection();
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
	// if Y is odd
	if (Coord.Y % 2 == 1)
	{
		if (Directions[0] == EDirection::North)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			}
		}
		else if (Directions[0] == EDirection::NorthEast)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			}
		}
		else if (Directions[0] == EDirection::East)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			}
		}
		else if (Directions[0] == EDirection::SouthEast)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			}
		}
		else if (Directions[0] == EDirection::South)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			}
		}
		else if (Directions[0] == EDirection::SouthWest)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			}
		}
		else if (Directions[0] == EDirection::West)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			}
		}
		else if (Directions[0] == EDirection::NorthWest)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y - 1));
			if (SearchWidth > 3)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
			}
			if (SearchWidth > 5)
			{
				Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y + 1));
			}
		}
		return Tiles;
	}
	// If Y is even 
	if (Directions[0] == EDirection::North)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
	}
	else if (Directions[0] == EDirection::NorthEast)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		}
	}
	else if (Directions[0] == EDirection::East)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		}
	}
	else if (Directions[0] == EDirection::SouthEast)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		}
	}
	else if (Directions[0] == EDirection::South)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		}
	}
	else if (Directions[0] == EDirection::SouthWest)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		}
	}
	else if (Directions[0] == EDirection::West)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
	}
	else if (Directions[0] == EDirection::NorthWest)
	{
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y));
		Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y - 1));
		Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y - 1));
		if (SearchWidth > 3)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X - 1, Coord.Y + 1));
			Tiles.Add(MapGenerator->GetTile(Coord.X + 1, Coord.Y));
		}
		if (SearchWidth > 5)
		{
			Tiles.Add(MapGenerator->GetTile(Coord.X, Coord.Y + 1));
		}
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

void AAStarPathfinding::DelayedCleanUp(float Delay)
{
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &AAStarPathfinding::CleanUp, Delay, false);

	TargetCoordinates.Empty();
	bSearchingForPath = true;
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
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
			TEXT("Error: cant find the world anymore, sad!!"));

	}
}


