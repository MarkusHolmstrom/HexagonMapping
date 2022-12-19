// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Enums.h"

class AHexagonTile;

struct Node 
{
	int X;
	int Y;
	int XParent;
	int YParent;
	float Score;
	ENodeIndex Index;
	int Depth;
};

inline bool operator < (const Node& lhs, const Node& rhs)
{
	//We need to overload "<" to put our struct into a set
	return lhs.Score < rhs.Score;
}

class HEXAGONMAPPING_API Path
{
public:
	UPROPERTY()
	TArray<AHexagonTile*> HexagonPath;
	UPROPERTY()
		TArray<AHexagonTile*> ChildHexagons;
	UPROPERTY()
	float Score;
	UPROPERTY()
	bool Stuck = false;

	UPROPERTY()
	TArray<Node*> Nodes;
private:
	UPROPERTY()
	AHexagonTile* StartTile;
	UPROPERTY()
	AHexagonTile* GoalTile;
	UPROPERTY()
	Node* StartNode;

public:
	Path(AHexagonTile* StartTile, AHexagonTile* GoalTile);

	UFUNCTION()
	bool CanAddToPath(AHexagonTile* Tile);
	UFUNCTION()
	void AddScore(float AddScore);
	UFUNCTION()
	void AddChild(AHexagonTile* Parent, AHexagonTile* AddTile, int Index, int Depth);

private:
	UFUNCTION()
		void AddNode(AHexagonTile* Parent, AHexagonTile* AddNode, ENodeIndex Index, int Depth);
};
