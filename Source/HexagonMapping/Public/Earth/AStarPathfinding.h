// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AStarPathfinding.generated.h"

class AHexagonTile;
class UGenerateMapComponent;

USTRUCT()
struct FPathFindingAStar
{
	GENERATED_BODY()

	FPathFindingAStar()
	{
		
	}
};

UCLASS()
class HEXAGONMAPPING_API AAStarPathfinding : public AActor
{
	GENERATED_BODY()
public:
	// The actor that contains GenerateMapComponent class
	UPROPERTY(EditAnywhere)
		AActor* Planet;
	UPROPERTY(VisibleAnywhere)
		UGenerateMapComponent* MapGenerator;
	UPROPERTY(EditAnywhere)
		bool bCanTravelWater = false;
	// H:
	UPROPERTY(VisibleAnywhere)
		float ManhattanDistance = 0;
	// G:
	UPROPERTY(VisibleAnywhere)
		float TotalMovementCost = 0;
	// F:
	UPROPERTY(VisibleAnywhere)
		float TotalScore = 0;

private:
	TArray<AHexagonTile*> OpenList;
	TArray<AHexagonTile*> ClosedList;

	UPROPERTY(VisibleAnywhere)
		AHexagonTile* CurrentTile;
	UPROPERTY(VisibleAnywhere)
		AHexagonTile* ParentTile;
	UPROPERTY(VisibleAnywhere)
		TArray<AActor*> TargetCoordinates;
	UPROPERTY(EditAnywhere)
		int32 TargetCount = 2;

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
	void SetTargetCoordinates(FVector Position);
	UFUNCTION()
	TArray<AHexagonTile*> GetAdjacentTiles(AHexagonTile* Hexagon);

protected:
	float GetManhattanDistance(FVector Start, FVector Goal);

	void RemoveTilesLight(TArray<AActor*> Tiles);
};
