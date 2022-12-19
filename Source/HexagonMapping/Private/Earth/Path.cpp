// MarkusHolmstrom no rights reserved


#include "Earth/Path.h"
#include "Earth/HexagonTile.h"
#include "Enums.h"

Path::Path(AHexagonTile* StartTile, AHexagonTile* GoalTile)
{
	this->StartTile = StartTile;
	this->GoalTile = GoalTile;
	Score = 0;
	StartNode = new Node();
	StartNode->X = StartTile->TileIndex.X;
	StartNode->Y = StartTile->TileIndex.Y;
	StartNode->Index = ENodeIndex::None;
	StartNode->Depth = 0;
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

void Path::AddChild(AHexagonTile* Parent, AHexagonTile* AddTile, int Index, int Depth)
{
	ENodeIndex NodeIndex = ENodeIndex::None;
	if (Index == 0)
	{
		NodeIndex = ENodeIndex::Left;
	}
	else if (Index == 1)
	{
		NodeIndex = ENodeIndex::Middle;
	}
	else if (Index == 2)
	{
		NodeIndex = ENodeIndex::Right;
	}
	AddNode(Parent, AddTile, NodeIndex, Depth);
}

void Path::AddNode(AHexagonTile* Parent, AHexagonTile* AddNode, ENodeIndex Index, int Depth)
{
	Node* NewNode = new Node();
	NewNode->X = AddNode->TileIndex.X;
	NewNode->Y = AddNode->TileIndex.Y;
	NewNode->XParent = Parent->TileIndex.X;
	NewNode->YParent = Parent->TileIndex.Y;
	NewNode->Index = Index;
	NewNode->Depth = Depth;
	Nodes.Add(NewNode);
}

