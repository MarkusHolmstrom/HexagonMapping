// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenerateMapComponent.generated.h"

class AHexagonActor;

UENUM(BlueprintType)
enum EClimateType 
{
	INVALID,
	Cold, Timid, Normal, Warm, Hot,
	MAX UMETA(Hidden) // hidden in editor max enum value
};

USTRUCT()
struct FClimateInfo
{
	GENERATED_BODY()

	UPROPERTY()
	int32 MinHor = 0;
	UPROPERTY()
	int32 MaxHor = 2;

	UPROPERTY()
	int32 NegMinHor = 5;
	UPROPERTY()
	int32 NegMaxHor = 3;
	UPROPERTY()
	TEnumAsByte<EClimateType> ClimateType = EClimateType::INVALID;
	UPROPERTY()
		float OceanPercentage = 0; 
	UPROPERTY()
		float ShorePercentage = 0;
	UPROPERTY()
		float DesertPercentage = 0;
	UPROPERTY()
		float TundraPercentage = 0;
	UPROPERTY()
		float PlainsPercentage = 0;

	UPROPERTY()
		float GrasslandPercentage = 0;
	UPROPERTY()
		float MountainPercentage = 0;
	UPROPERTY()
		float JunglePercentage = 0;
	UPROPERTY()
		float SnowPercentage = 0;
	UPROPERTY()
		float IcePercentage = 0;
	UPROPERTY()
		TArray<float> MapPercentages;
	bool CheckHor(int32 PossHit)
	{
		return (PossHit <= MaxHor && PossHit >= MinHor) || 
			(PossHit <= MaxHor && PossHit >= MinHor);
	}
	//   
	// Default constructor - without parameters, so it will work inside other structures 
	FClimateInfo() : MinHor(-1), MaxHor(-1),
		ClimateType(EClimateType::INVALID),
		MapPercentages(TArray<float>(0,0))
	{

	}
	FClimateInfo(int32 Min, int32 Max, EClimateType SetClimateType, TArray<float> Percentages)
	{
		MinHor = Min;
		MaxHor = Max;

		NegMaxHor = 99 - Min;
		NegMinHor = 99 - Max;

		//ClimateType = SetClimateType;
		// Add precentages for map part
		for (int32 i = 0; i < Percentages.Num() && i < 9; i++)
		{
			if (i == 0)
			{
				OceanPercentage = Percentages[i];
			}
			else if (i == 1)
			{
				ShorePercentage = Percentages[i];
			}
			else if (i == 2)
			{
				DesertPercentage = Percentages[i];
			}
			else if (i == 3)
			{
				TundraPercentage = Percentages[i];
			}
			else if (i == 4)
			{
				PlainsPercentage = Percentages[i];
			}
			else if (i == 5)
			{
				GrasslandPercentage = Percentages[i];
			}
			else if (i == 6)
			{
				MountainPercentage = Percentages[i];
			}
			else if (i == 7)
			{
				JunglePercentage = Percentages[i];
			}
			else if (i == 8)
			{
				SnowPercentage = Percentages[i];
			}
			else if (i == 9)
			{
				IcePercentage = Percentages[i];
			}
		}
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEXAGONMAPPING_API UGenerateMapComponent : public UActorComponent
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
		TSubclassOf<AHexagonActor> GrassHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> WaterHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> ShoreHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float WaterChance = 0.6f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> PlainsHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float PlainsChance = 0.25f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> MountainHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float MountainChance = 0.08f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> DesertHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float DesertChance = 0.12f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> TundraHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float TundraChance = 0.07f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> JungleHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float JungleChance = 0.1f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> SnowHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float SnowChance = 0.04f;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> IceHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		float IceChance = 0.04f;

	UPROPERTY(EditAnywhere)
	int32 MapHeight = 70;
	UPROPERTY(EditAnywhere)
	int32 MapWidth = 70;

public:
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<FClimateInfo> ClimateInfo;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	int32 ClimateInfoLength = 5;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> ColdPercentages = { 0.75, 0.1, 0, 0.1, 0, 0, 0.01, 0, 0.99, 0.15 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> TimidPercentages = { 0.85, 0.1, 0, 0.1, 0, 0, 0.05, 0, 0.1, 0.05 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> NormalPercentages = { 0.6, 0.1, 0, 0, 0.15, 0.2, 0.05, 0, 0, 0 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> WarmPercentages = { 0.65, 0.1, 0.05, 0, 0.1, 0.1, 0.01, 0.99, 0, 0 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> HotPercentages = { 0.65, 0.1, 0.2, 0, 0.05, 0, 0.02, 0.98, 0, 0 };
	

private:
	FVector Start = FVector(0,0,0);
	FVector ForwardVector;
	FVector End;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;

public:	
	// Sets default values for this component's properties
	UGenerateMapComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void GenerateMap(int Height, int Width);

	FClimateInfo GetCorrectInfo(int32 Index);
private:
	FVector GetEndLocation(int Height, int Width);
	void ShootLaser();
};
