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
		float Modifier = 1.0f;

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
	void SetPercentages(TArray<float> Percentages, float NewModifier)
	{
		Modifier = NewModifier;
		for (int32 i = 0; i < Percentages.Num() && i < 7; i++)
		{
			if (i == 0)
			{
				DesertPercentage = Percentages[i] * Modifier;
			}
			else if (i == 1)
			{
				TundraPercentage = Percentages[i] * Modifier;
			}
			else if (i == 2)
			{
				PlainsPercentage = Percentages[i] * Modifier;
			}
			else if (i == 3)
			{
				GrasslandPercentage = Percentages[i] * Modifier;
			}
			else if (i == 4)
			{
				MountainPercentage = Percentages[i] * Modifier;
			}
			else if (i == 5)
			{
				JunglePercentage = Percentages[i] * Modifier;
			}
			else if (i == 6)
			{
				SnowPercentage = Percentages[i] * Modifier;
			}
			else if (i == 7)
			{
				IcePercentage = Percentages[i] * Modifier;
			}
		}

	}

	//   
	// Default constructor - without parameters, so it will work inside other structures 
	FClimateInfo() : MinHor(-1), MaxHor(-1), Modifier(1.0f),
		ClimateType(EClimateType::INVALID),
		MapPercentages(TArray<float>(0,0))
	{

	}
	FClimateInfo(int32 Min, int32 Max, EClimateType SetClimateType, float Modifier, TArray<float> Percentages)
	{
		MinHor = Min;
		MaxHor = Max;

		NegMaxHor = 99 - Min;
		NegMinHor = 99 - Max;

		ClimateType = SetClimateType;
		// Add precentages for map part
		SetPercentages(Percentages, Modifier);
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
		TSubclassOf<AHexagonActor> PlainsHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> MountainHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> DesertHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> TundraHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> JungleHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> SnowHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonActor> IceHexTile;

	UPROPERTY(EditAnywhere)
	int32 MapHeight = 100;
	UPROPERTY(EditAnywhere)
	int32 MapWidth = 100;

	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	TArray<float> RandomFloatList;
	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	TArray<int32> List;
	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	int32 RandomFloatListLength = 54;
	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	int32 RandomFloatIndex = 0;

	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	TArray<int32> RandomIntList;
	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	int32 RandomIntListLength = 47;
	UPROPERTY(EditAnywhere, Category = RandomFloatList)
	int32 RandomIntIndex = 0;

public:
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<FClimateInfo> ClimateInfo;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	int32 ClimateInfoLength = 5;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> ColdPercentages = { 0, 0.1f, 0, 0, 0.01f, 0, 0.59f, 0.55f };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> TimidPercentages = { 0, 0.05f, 0, 0, 0.05f, 0, 0.1f, 0.05f };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> NormalPercentages = { 0, 0, 0.05f, 0.07f, 0.03f, 0, 0, 0 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> WarmPercentages = { 0.05f, 0, 0.06f, 0.08f, 0.01f, 0.05f, 0, 0 };
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	TArray<float> HotPercentages = { 0.06f, 0, 0.03f, 0, 0.02f, 0.08f, 0, 0 };
	
	UPROPERTY(VisibleAnywhere, Category = ClimateInfo)
	TArray<FIntPoint> LandLikely; 
	UPROPERTY(VisibleAnywhere, Category = ClimateInfo)
	TArray<FIntPoint> OceanLikely;

	UPROPERTY(EditAnywhere, Category = ClimateInfo)
	bool bLandLikely = false;

	UPROPERTY(EditAnywhere, Category = ClimateInfo)
		float WaterLikelihood = 0.6f;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
		float DefaultLandMultiplier = 0.5f;
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
		float IncreasedLandMultiplier = 12.5f;

	// Create lieklkyhood for land/water, than decide what tile it will be

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
	UFUNCTION()
	void GenerateMap(int Height, int Width);
	UFUNCTION()
	TSubclassOf<AHexagonActor> GetTile(FClimateInfo Info);
	UFUNCTION()
	bool IsLandMoreLikely(int32 X, int32 Y, bool Land);
	UFUNCTION()
	bool SetLikelihoodLand(AHexagonActor* Tile);
	UFUNCTION()
	int32 UpdateRandomIndex(int32 CurIndex);
	UFUNCTION()
	FClimateInfo GetCorrectClimate(int32 Index, bool HigherPossLand);

private:
	UFUNCTION()
	TArray<float> SetRandomList();
	UFUNCTION()
	FVector GetEndLocation(int Height, int Width);
	UFUNCTION()
	void ShootLaser();
};
