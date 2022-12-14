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
	UPROPERTY(VisibleAnywhere)
		int Tries = 0;
	// This adds some kind of limit in case the patfinding 
	// gets stuck in a never ending loop
	UPROPERTY(EditAnywhere)
	int MaxTries = 5;
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
	int Depth;
	TArray<AHexagonTile*> ChildTiles;
	Path* BestPath;
	TArray<AHexagonTile*> OpenList;
	TArray<AHexagonTile*> ClosedList;
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
		AHexagonTile* GetBestScore(TArray<AHexagonTile*> Tiles, float TopScore);
	UFUNCTION()
		TArray<AHexagonTile*> GetViableTiles(TArray<AHexagonTile*> Tiles);
	UFUNCTION()
		float GetScore(AHexagonTile* Start, AHexagonTile* Goal);
	/*UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile);*/
	UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Tile, EDirection Direction);

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
	UFUNCTION()
	EDirection GetDirection(FVector Start, FVector Goal);
};
