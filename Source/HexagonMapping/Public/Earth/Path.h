// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Enums.h"

class AHexagonTile;

class Node 
{
public:
	int X;
	int Y;
	int XParent;
	int YParent;
	float Score = 1000000.0f; // Set a default just in case 
	ENodeIndex Index;
	int Depth;
	bool IsParent(int XPar, int YPar) {
		if (XPar == XParent && YPar == YParent)
		{
			return true;
		}
		return false;
	}
	AHexagonTile* Tile;
};

class HEXAGONMAPPING_API Path
{
public:
	UPROPERTY()
		int test = 0;
	UPROPERTY()
	TArray<AHexagonTile*> HexagonPath;
	UPROPERTY()
		TArray<AHexagonTile*> ChildHexagons;
	UPROPERTY()
	float Score;
	UPROPERTY()
	bool bStuck = false;
	UPROPERTY()
		bool bFoundPath = false;
	UPROPERTY()
		TArray<Node*> PathNodes;
	UPROPERTY()
	TArray<Node*> Nodes;
private:
	UPROPERTY()
	AHexagonTile* StartTile;
	UPROPERTY()
	AHexagonTile* GoalTile;
	UPROPERTY()
	Node* StartNode;

	UPROPERTY()
	Node* ParentNode;
	UPROPERTY()
		int TreeDepth = 0;

public:
	Path(AHexagonTile* StartTile, AHexagonTile* GoalTile);

	UFUNCTION()
	bool CanAddToPath(AHexagonTile* Tile);
	UFUNCTION()
	void AddChildNode(Node* ChildNode);
	UFUNCTION()
	void AddScore(float AddScore);
	UFUNCTION()
	void AddChild(AHexagonTile* Parent, AHexagonTile* AddTile, int Index, int Depth);

	UFUNCTION()
		void SetTreeDepth(int Depth);
	UFUNCTION()
		void CalculatePathsLoop();

private:
	UFUNCTION()
		void AddNode(AHexagonTile* Parent, AHexagonTile* AddNode, ENodeIndex Index, int Depth);

	UFUNCTION()
		TArray<AHexagonTile*> GetPath(TArray<Node*> NodePaths);
	UFUNCTION()
		TArray<Node*> GetChildrenNodes(Node* Parent, int ChildDepth);
	UFUNCTION()
		TArray<Node*> GetNodesViaDepth(int Depth);
	UFUNCTION()
		void SetupTreeNodes();
	UFUNCTION()
		TArray<Node*> GetBestPath();
	UFUNCTION()
		Node* GetBestNode(TArray<Node*> CompNodes);

	UFUNCTION()
		void RemoveNodes(TArray<Node*> RemNodes);

};
