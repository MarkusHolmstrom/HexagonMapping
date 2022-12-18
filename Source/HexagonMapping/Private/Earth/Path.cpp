// MarkusHolmstrom no rights reserved


#include "Earth/Path.h"

Path::Path(AHexagonTile* StartTile, AHexagonTile* GoalTile)
{
	this->StartTile = StartTile;
	this->GoalTile = GoalTile;
	Score = 0;
}

bool Path::CanAddToPath(AHexagonTile* Tile)
{
	// To avoid going backwards trough the former tile
	if (HexagonPath.Contains(Tile))
	{
		return false;
	}
	else
	{
		HexagonPath.Add(Tile);
		return true;
	}
}

void Path::AddScore(float AddScore)
{
	this->Score += AddScore;
}

