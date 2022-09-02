// MarkusHolmstrom no rights reserved
// radera!!!
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestActorComponent.generated.h"

class AHexagonActor;
class UStaticMeshComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEXAGONMAPPING_API UTestActorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	TArray<TArray<AHexagonActor*>> HexGrid;
	UPROPERTY(EditAnywhere)
		float HorOffset = 88.0f;
	UPROPERTY(EditAnywhere)
		float OddRowHorOffset = 44.0f;
	UPROPERTY(EditAnywhere)
		float VerOffset = 76.0f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> HexTile0;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> HexTile1;

	UPROPERTY(EditAnywhere)
		int32 MapHeight = 50;
	UPROPERTY(EditAnywhere)
		int32 MapWidth = 50;


public:	
	// Sets default values for this component's properties
	UTestActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void GenerateMap(int Height, int Width);


};
