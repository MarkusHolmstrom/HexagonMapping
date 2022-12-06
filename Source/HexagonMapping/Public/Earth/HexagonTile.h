// MarkusHolmstrom no rights reserved

#pragma once
// Tutorial for hexagon tile map
// https://www.youtube.com/watch?v=viw8QLV-lJ8
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enums.h"
#include "HexagonTile.generated.h"

class UStaticMeshComponent;
class UGenerateMapComponent;

UCLASS()
class HEXAGONMAPPING_API AHexagonTile : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		UGenerateMapComponent* MapComponent;

	// nsort: desert, tundra, plains, grassland, mountain, jungle, snow, ice, ocean, shore
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TileInformation)
		EHexType Type = EHexType::Ocean;
	// trees/hill (def resource) string
	UPROPERTY(EditAnywhere, Category = TileInformation)
		EHinder Hinder = EHinder::None;
	// movement cost, float 1-3?
	UPROPERTY(EditAnywhere, Category = TileInformation)
		float MoveCost = 1.0f;
	// resource - bonus or luxury - Enum
	UPROPERTY(EditAnywhere, Category = TileInformation)
		EResource Resource = EResource::None;
	// (specific resource) enum? string
	UPROPERTY(EditAnywhere, Category = TileInformation)
		EResourceType ResourceType = EResourceType::None;
	// defensive modifier float or int
	UPROPERTY(EditAnywhere, Category = TileInformation)
		float DefModifier = 0;
	// Appeal int -1 - 6
	UPROPERTY(EditAnywhere, Category = TileInformation)
		int Appeal = 1;
	// Continent string
	UPROPERTY(EditAnywhere, Category = TileInformation)
		FString Continent = "Europe";
	// basic resource(s) custom class

	UPROPERTY(EditAnywhere, Category = TileInformation)
		bool bHasHill = false;
	UPROPERTY(EditAnywhere)
		FIntPoint TileIndex;
	UPROPERTY(EditAnywhere)
		FVector TileLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UStaticMeshComponent* MeshTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* HighlightMesh;
private:

	// Sets default values for this actor's properties
	AHexagonTile();

public: 
	UFUNCTION()
		void ChangeHighlight(bool HideMesh);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
