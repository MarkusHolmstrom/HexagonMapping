// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums.h"
#include "AStarPathfinding.generated.h"

class AHexagonTile;
class UGenerateMapComponent;
class AWorldPawn;
class Path;

UCLASS()
class HEXAGONMAPPING_API AAStarPathfinding : public AActor
{
	GENERATED_BODY()
public:
	// The actor that contains GenerateMapComponent class
	UPROPERTY(EditAnywhere)
		AActor* Planet;
	UPROPERTY(EditAnywhere)
		UGenerateMapComponent* MapGenerator;

	UPROPERTY(EditAnywhere)
	AWorldPawn* World;

	UPROPERTY(VisibleAnywhere)
		int test;
	UPROPERTY(EditAnywhere)
		bool bCanTravelWater = false;
	UPROPERTY(EditAnywhere)
		bool bWaterVessel = false;
	UPROPERTY(VisibleAnywhere)
		bool bSearchingForPath = true;
	// Default for Birdpath is 3, 5 for Astar
	UPROPERTY(VisibleAnywhere)
		int SearchWidth = 5;
	UPROPERTY(VisibleAnywhere)
		int Tries = 0;


	// This adds some kind of limit in case the pathfinding 
	// gets stuck in a never ending while loop
	UPROPERTY(EditAnywhere)
	int MaxTries = 10;
	// H:
	UPROPERTY(VisibleAnywhere)
		float ManhattanDistance = 0;
	// G:
	UPROPERTY(VisibleAnywhere)
		int TotalMovementCost = 0;
	// F:
	UPROPERTY(VisibleAnywhere)
		float TotalScore = 0;

private:
	Path* NewPath;
	Path* BestPath;

	UPROPERTY()
	int Depth;
	UPROPERTY()
	TArray<AHexagonTile*> ChildTiles;

	UPROPERTY()
	TArray<AHexagonTile*> OpenList;
	UPROPERTY()
	TArray<AHexagonTile*> ClosedList;
	UPROPERTY()
	TArray<AHexagonTile*> CheckedList;
	UPROPERTY(VisibleAnywhere)
		bool bNeedPathFinding = false;

	UPROPERTY(VisibleAnywhere)
		AHexagonTile* StartTile;
	UPROPERTY(VisibleAnywhere)
		AHexagonTile* GoalTile;

	UPROPERTY(VisibleAnywhere)
		AHexagonTile* CurrentTile;
	UPROPERTY(VisibleAnywhere)
		AHexagonTile* ParentTile;
	UPROPERTY(VisibleAnywhere)
		TArray<AActor*> TargetCoordinates;
	UPROPERTY(EditAnywhere)
		int32 TargetCount = 2;
	UPROPERTY(VisibleAnywhere)
		EDirection GoalDirection = EDirection::North;

public:	
	// Sets default values for this actor's properties
	AAStarPathfinding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SetTargetCoordinates(AActor* Tile);
	UFUNCTION()
		bool IsValidTile(AHexagonTile* Tile);
	UFUNCTION()
	void StartCalculatePath();
private:
	UFUNCTION()
	void LookForMoreOptions();
	UFUNCTION()
		TArray<AHexagonTile*> GetChildren(TArray<AHexagonTile*> Tiles);
	UFUNCTION()
	void PathfindingLoop();
	UFUNCTION()
		AHexagonTile* GetBestTile(TArray<AHexagonTile*> Tiles, float TopScore);
	UFUNCTION()
		TArray<AHexagonTile*> GetViableTiles(TArray<AHexagonTile*> Tiles);
	/*UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile, int AdjLimit);*/
	UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile, EDirection Direction);

	UFUNCTION()
	EDirection GetDirection(FIntPoint Start, FIntPoint Goal);

	UFUNCTION()
	TArray<EDirection> GetDirections(EDirection MainDirection);
	UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTilesBasedOnDirections(AHexagonTile* Tile, TArray<EDirection> Directions);

	UFUNCTION()
	float GetManhattanDistance(FVector Start, FVector Goal);
	UFUNCTION()
	int GetGScore(AHexagonTile* Start, AHexagonTile* Goal);

	UFUNCTION()
		void CleanUp();
	UFUNCTION()
		void DelayedCleanUp(float Delay);
	UFUNCTION()
	void ClearClosedList();
	UFUNCTION()
	void RemoveTilesLight();
};
