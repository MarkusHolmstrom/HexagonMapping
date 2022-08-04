// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"

class HEXAGONMAPPING_API HexagonInformation
{
public:
	
	// trees/hill (def resource) string
	UPROPERTY(EditAnywhere)
		FString Hinder = "None";
	// movement cost, float 1-3?
	UPROPERTY(EditAnywhere)
		float MoveCost = 1;
	// resource - bonus or luxury - Enum
	UPROPERTY(EditAnywhere)
		FString Resource = "None";
	// (specific resource) enum? string
	UPROPERTY(EditAnywhere)
		FString ResourceType = "None";
	// defensive modifier float or int
	UPROPERTY(EditAnywhere)
		float DefModifier = 0;
	// Appeal int -1 - 6
	UPROPERTY(EditAnywhere)
		int Appeal = 3;
	// Continent string
	UPROPERTY(EditAnywhere)
		FString Continent = "Europe";
	// basic resource(s) custom class

	HexagonInformation(FString HexHinder,
		float HexMoveCost, FString HexResource, int HexAppeal, FString HexContinent);
	~HexagonInformation();
};
