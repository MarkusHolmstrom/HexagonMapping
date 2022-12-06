// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enums.h"
#include "GenerateMapComponent.generated.h"

class AHexagonTile;
class ADetailActor;
class UStaticMeshComponent;
class AShapeMapping;
class AAStarPathfinding;

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
	EClimateType ClimateType = EClimateType::INVALID;
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

	/*bool CheckHor(int32 PossHit)
	{
		return (PossHit <= MaxHor && PossHit >= MinHor) || 
			(PossHit <= MaxHor && PossHit >= MinHor);
	}*/
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
	FClimateInfo() : MinHor(-1), MaxHor(-1), 
		ClimateType(EClimateType::INVALID), Modifier(1.0f),
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

public:
	UPROPERTY(EditAnywhere)
		class AWorldPawn* WorldPawn;
	
	UPROPERTY(EditAnywhere)
	AAStarPathfinding* Pathfinding;

	TArray<TArray<AHexagonTile*>> HexGrid;
	UPROPERTY(EditAnywhere)
		float HorOffset = 88.0f;
	UPROPERTY(EditAnywhere)
		float OddRowHorOffset = 44.0f;
	UPROPERTY(EditAnywhere)
		float VerOffset = 76.0f;
	UPROPERTY(EditAnywhere)
	EMapType MapType = EMapType::FlatEarthIsRealDontTryToStopUsAndYesMarsIsSphericalBecauseItsBeenProvenWithPhotosThatIsNotEnoughEvidenceForTheEarthForSomeUnknownReason;

	UPROPERTY(EditAnywhere)
	AShapeMapping* ShapeMap;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> GrassHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> WaterHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> ShoreHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> PlainsHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> MountainHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> DesertHexTile;

	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> TundraHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> JungleHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> SnowHexTile;
	UPROPERTY(EditAnywhere, Category = Tiles)
		TSubclassOf<AHexagonTile> IceHexTile;

	UPROPERTY(EditDefaultsOnly, Category = Details)
		TArray<TSubclassOf<ADetailActor>> TreeTiles;
	UPROPERTY(EditAnywhere, Category = Details)
		float ForestPercentage = 0.6f;
	UPROPERTY(EditAnywhere, Category = Details)
		TSubclassOf<ADetailActor> HillTile;
	UPROPERTY(EditAnywhere, Category = Details)
		float HillPercentage = 0.35f;

	UPROPERTY(EditAnywhere)
	int32 MapHeight = 100;
	UPROPERTY(EditAnywhere)
	int32 MapWidth = 100;
	UPROPERTY(EditAnywhere)
	int32 Radius = 5000;

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
		float DefaultLandMultiplier = 0.15f; // if IR -> 0.2 ish
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
		float IncreasedLandMultiplier = 5.0f; // if IR = 2 -> 4 ish
	UPROPERTY(EditAnywhere, Category = ClimateInfo)
		int32 IncreaseRadius = 1; 
	UPROPERTY(EditAnywhere, Category = Random)
		int32 Seed = 5725;
	// Multiplier
	UPROPERTY(EditAnywhere, Category = Random)
		int32 A = 1664525;
	// Increment
	UPROPERTY(EditAnywhere, Category = Random)
		int32 C = 10139042;
	// Modulus
	UPROPERTY(EditAnywhere, Category = Random)
		int32 M = 1415461035;
	UPROPERTY(EditAnywhere, Category = Random)
		int32 MaxRandom = 1;

private:
	int32 CurX;
	int32 CurY;
	EHexType CurType;
	bool bCurIsLand = false;


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
	TSubclassOf<AHexagonTile> SetTile(FClimateInfo Info);
	UFUNCTION()
	TArray<float> GetTilePercentages(FClimateInfo Info);
	UFUNCTION()
	float GetTotalPercentages(FClimateInfo Info);
	UFUNCTION()
	float GetPercentage(float SmallFloat, float MaxFloat);
	UFUNCTION()
	void SetHexagonInfo(AHexagonTile* Tile, bool Land, EHinder Hinder);
	UFUNCTION()
	TSubclassOf<AHexagonTile> SetWaterTile(int32 X, int32 Y);
	UFUNCTION()
	bool CheckTileForCoast(int32 X, int32 Y);
	UFUNCTION()
	AHexagonTile* GetTile(int32 X, int32 Y);
	UFUNCTION()
	void SetShoreTilesAround(int32 X, int32 Y);

	UFUNCTION()
	bool IsLandMoreLikely(int32 X, int32 Y);
	UFUNCTION()
	void AddToList(int32 X, int32 Y, bool Land, int32 AddRadius);
	UFUNCTION()
	bool SetLikelihoodLand(AHexagonTile* Tile);
	UFUNCTION()
	FClimateInfo GetCorrectClimate(int32 Index, bool HigherPossLand);
	UFUNCTION()
	TSubclassOf<ADetailActor> GetTrees(float Random);
	UFUNCTION()
	bool GetHill(AHexagonTile* Hex);

	UFUNCTION()
	void OnTileClicked(AActor* Tile);

private:

	UFUNCTION()
	float RandomLCGfloat(int32 Min, int32 Max);
};
