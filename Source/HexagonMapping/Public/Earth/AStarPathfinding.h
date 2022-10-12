// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AStarPathfinding.generated.h"

class AHexagonActor;
class UGenerateMapComponent;

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

	UPROPERTY(VisibleAnywhere)
	TArray<AHexagonActor*> OpenList;
	UPROPERTY(VisibleAnywhere)
	TArray<AHexagonActor*> ClosedList;

	UPROPERTY(VisibleAnywhere)
	AHexagonActor* CurrentTile;
	UPROPERTY(VisibleAnywhere)
	AHexagonActor* ParentTile;
	UPROPERTY(VisibleAnywhere)
	FIntPoint TargetCoordinates;

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
	void SetTargetCoordinates(FIntPoint NewTarget);
	UFUNCTION()
	TArray<AHexagonActor*> GetAdjacentTiles(AHexagonActor* Hexagon);

protected:
	float GetManhattanDistance(FVector Start, FVector Goal);

};
