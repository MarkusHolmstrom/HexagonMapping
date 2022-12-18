// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"

class AHexagonTile;

class HEXAGONMAPPING_API Path
{
public:
	UPROPERTY()
	TArray<AHexagonTile*> HexagonPath;
	UPROPERTY()
	float Score;
	UPROPERTY()
		bool Stuck = false;

private:
	AHexagonTile* StartTile;
	AHexagonTile* GoalTile;

public:
	Path(AHexagonTile* StartTile, AHexagonTile* GoalTile);

	UFUNCTION()
	bool CanAddToPath(AHexagonTile* Tile);
	UFUNCTION()
	void AddScore(float AddScore);

};
