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

void Path::AddChildNode(Node* ChildNode)
{
	Nodes.Add(ChildNode);
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
	if (Index > 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red,
			FString::Printf(TEXT("Error index to high: %d"), Index));
	}
	AddNode(Parent, AddTile, NodeIndex, Depth);
}

void Path::SetTreeDepth(int Depth)
{
	TreeDepth = Depth;
}

void Path::CalculatePathsLoop()
{
	bool Searching = true;
	int Tries = 0;
	test = 0;
	int Maxtest = 10000;
	while (Searching && !bFoundPath)
	{
		Tries++;
		test++;
		SetupTreeNodes();
		TArray<Node*> NodePath = GetBestPath(); // returns empty list
		if (NodePath.Num() == TreeDepth)
		{
			bFoundPath = true;
			GEngine->AddOnScreenDebugMessage(-1, 19.f, FColor::Green, 
				TEXT("astar path found!!"));
			PathNodes = NodePath; 
		}
		else if (Tries >= TreeDepth)
		{
			//Searching = false;
			/*GEngine->AddOnScreenDebugMessage(-1, 19.f, FColor::Orange, 
				TEXT("max tries reached"));*/
			// remove nodes for failed attempt
			TArray<Node*> RemNodes;
			RemNodes.Add(NodePath[NodePath.Num() - 1]);
			RemoveNodes(RemNodes);
			Tries = 0;
		}
		else if (NodePath.Num() == 0)
		{
			PathNodes = NodePath;
			GEngine->AddOnScreenDebugMessage(-1, 19.f, FColor::Blue,
				TEXT("no more node path")); 
			GEngine->AddOnScreenDebugMessage(-1, 19, FColor::Blue,
				FString::Printf(TEXT("%d"), Tries)); return;
		}
		else if (test >= Maxtest)
		{
			PathNodes = NodePath;
			GEngine->AddOnScreenDebugMessage(-1, 19.f, FColor::Red,
				TEXT("max test tries reached ")); return;
		}
	}
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

TArray<AHexagonTile*> Path::GetPath(TArray<Node*> NodePaths)
{
	TArray<AHexagonTile*> HexPath;
	for (size_t i = 0; i < NodePaths.Num(); i++)
	{

	}
	return HexPath;
}

TArray<Node*> Path::GetChildrenNodes(Node* Parent, int ChildDepth)
{
	TArray<Node*> ChildNodes;
	for (size_t i = 0; i < Nodes.Num(); i++)
	{
		if (Nodes[i]->IsParent(Parent->X, Parent->Y) && Nodes[i]->Depth == ChildDepth)
		{
			ChildNodes.Add(Nodes[i]);
		}
	}
	return ChildNodes;
}

TArray<Node*> Path::GetNodesViaDepth(int Depth)
{
	TArray<Node*> DepthNodes;
	for (size_t i = 0; i < Nodes.Num(); i++)
	{
		if (Nodes[i]->Depth == Depth)
		{
			DepthNodes.Add(Nodes[i]);
		}
	}
	return DepthNodes;
}

void Path::SetupTreeNodes()
{
	TArray<Node*> TempNodes = GetNodesViaDepth(1);
	ParentNode = GetBestNode(TempNodes);
}

// get the best path of nodes from the top of tree
TArray<Node*> Path::GetBestPath()
{
	TArray<Node*> BestPath;
	// loop through the tree, i = 0 is for the start node that is not needed here
	for (size_t i = 1; i < TreeDepth; i++)
	{ 
		TArray<Node*> TempNodes = GetChildrenNodes(ParentNode, i);
		if (TempNodes.Num() == 0)
		{
			BestPath.Empty();
			break;
		}

		ParentNode = GetBestNode(TempNodes);
		BestPath.Add(ParentNode);
	}
	return BestPath;
}

Node* Path::GetBestNode(TArray<Node*> CompNodes)
{
	Node* BestNode = nullptr; 
	float BestScore = 1000000000.0f;
	for (size_t i = 0; i < CompNodes.Num(); i++)
	{
		if (CompNodes[i]->Score < BestScore)
		{
			BestScore = CompNodes[i]->Score;
			BestNode = CompNodes[i];
		}
	}
	return BestNode;
}

void Path::RemoveNodes(TArray<Node*> RemNodes)
{
	for (size_t i = 0; i < RemNodes.Num(); i++)
	{
		if (Nodes.Contains(RemNodes[i]))
		{
			Nodes.Remove(RemNodes[i]);
		}
	}
}

