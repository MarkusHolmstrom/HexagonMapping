// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Enums.h"

class AHexagonTile;

class Node 
{
public:
	UPROPERTY()
	int X;
	UPROPERTY()
	int Y;
	UPROPERTY()
	int XParent;
	UPROPERTY()
	int YParent;
	UPROPERTY()
	float Score = 1000000.0f; // Set a default just in case 
	UPROPERTY()
	ENodeIndex Index;
	int Depth;
	UPROPERTY()
	AHexagonTile* Tile;
	UPROPERTY()
		AHexagonTile* ParentTile;
	UPROPERTY()
		Node* ParentNode; //todo

	UFUNCTION()
	bool IsParent(int XPar, int YPar) 
	{
		if (XPar == XParent && YPar == YParent)
		{
			return true;
		}
		return false;
	}
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
	/*UPROPERTY()
	float Score;*/
	UPROPERTY()
	bool bStuck = false;
	UPROPERTY()
		bool bFoundPath = false;
	UPROPERTY()
		TArray<Node*> PathNodes;
	UPROPERTY()
		TArray<Node*> CurrentDepthNodes;
	UPROPERTY()
		TArray<TArray<Node*>> Nodes;

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
	UPROPERTY()
	TArray<Node*> GoalNodes;

public:
	UFUNCTION()
	Path(AHexagonTile* StartTile, AHexagonTile* GoalTile);

	UFUNCTION()
	bool CanAddToPath(AHexagonTile* Tile);
	UFUNCTION()
	void AddChildNode(Node* ChildNode);
	UFUNCTION()
		Node* AddChild(AHexagonTile* Parent, AHexagonTile* AddTile, int Index, int Depth, float Score);

	UFUNCTION()
		void SetTreeDepth(int Depth);
	UFUNCTION()
		void CalculatePathsLoop();
	UFUNCTION()
		bool CheckForTile(AHexagonTile* Parent, int DepthToRemove);
	UFUNCTION()
		Node* GetNode(AHexagonTile* Tile, int Depth);

	UFUNCTION()
		void SetGoalNode(Node* Node, int Depth);
	UFUNCTION()
		TArray<AHexagonTile*> GetGoalPath(Node* GoalNode);

private:
	UFUNCTION()
		bool CheckTileForDepth(AHexagonTile* Tile, int Depth);
	UFUNCTION()
		Node* AddNode(AHexagonTile* Parent, AHexagonTile* AddNode, ENodeIndex Index, int Depth, float Score);

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
		bool FoundTargetTile(FIntPoint Index);

	UFUNCTION()
		void RemoveNodes(TArray<Node*> RemNodes);

};
