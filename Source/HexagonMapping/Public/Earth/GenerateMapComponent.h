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
	int MinHor = 0;
	UPROPERTY()
	int MaxHor = 2;

	UPROPERTY()
	int NegMinHor = 5;
	UPROPERTY()
	int NegMaxHor = 3;
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
		for (int i = 0; i < Percentages.Num() && i < 7; i++)
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
	FClimateInfo(int Min, int Max, EClimateType SetClimateType, float Modifier, TArray<float> Percentages)
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
	int MapHeight = 100;
	UPROPERTY(EditAnywhere)
	int MapWidth = 100;
	UPROPERTY(EditAnywhere)
	int Radius = 5000;

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
		int IncreaseRadius = 1; 

	UPROPERTY(EditAnywhere, Category = Random)
		int Seed = 5725;
	// A
	UPROPERTY(EditAnywhere, Category = Random)
		int Multiplier = 1664525;
	// C
	UPROPERTY(EditAnywhere, Category = Random)
		int Increment = 10139042;
	// M
	UPROPERTY(EditAnywhere, Category = Random)
		int Modulus = 1415461035;

	UPROPERTY(EditAnywhere, Category = Random)
		int MaxRandom = 100;
	UPROPERTY(EditAnywhere, Category = Random)
	bool bGenNewSeed = false;

	UPROPERTY(VisibleAnywhere, Category = Random)
		TArray <float> Randoms;


private:
	int CurX;
	int CurY;
	EHexType CurType;
	bool bIsTileLand = false;


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
	TSubclassOf<AHexagonTile> SetWaterTile(int X, int Y);
	UFUNCTION()
	bool CheckTileForCoast(int X, int Y);
	UFUNCTION()
	AHexagonTile* GetTile(int X, int Y);
	UFUNCTION()
	void SetShoreTilesAround(int X, int Y);

	// Methods regarding likelihood of land vs water tiles
	UFUNCTION()
	bool IsLandMoreLikely(int X, int Y);
	UFUNCTION()
	void AddToList(int X, int Y, bool Land, int AddRadius);
	UFUNCTION()
	void AddLikeliHoodList(TArray<FIntPoint>& List, int X, int Y, int AddRadius);
	UFUNCTION()
	void CheckListContains(TArray<FIntPoint>& List, FIntPoint Index);
	UFUNCTION()
	bool SetLikelihoodLand(AHexagonTile* Tile);

	// Climate and detail methods:
	UFUNCTION()
	FClimateInfo GetCorrectClimate(int Index, bool HigherPossLand);
	UFUNCTION()
	TSubclassOf<ADetailActor> GetTrees(float Random);
	UFUNCTION()
	bool GetHill(AHexagonTile* Hex);

	UFUNCTION()
	void OnTileClicked(AActor* Tile);

private:
	UFUNCTION()
	float RandomLCGfloatPercentage(float Min, float Max);
};
