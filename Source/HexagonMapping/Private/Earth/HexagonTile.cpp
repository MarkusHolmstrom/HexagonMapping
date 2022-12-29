// MarkusHolmstrom no rights reserved


#include "Earth/HexagonTile.h"

// Sets default values
AHexagonTile::AHexagonTile()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	MeshTile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshTile->SetupAttachment(RootComponent);

	HighlightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Highlight"));
	HighlightMesh->SetupAttachment(RootComponent);
}

void AHexagonTile::ChangeHighlight(bool ShowLight)
{
	HighlightMesh->SetVisibility(ShowLight);
}

// Called when the game starts or when spawned
void AHexagonTile::BeginPlay()
{
	Super::BeginPlay();
	ChangeHighlight(false);
}

// Called every frame
void AHexagonTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AHexagonTile::ActivatedByClick()
//{
//	//OnTileClicked.Broadcast(this);
//	ShowLight = GetWorld()->SpawnActor<AActor>(ShowLightBP, GetActorLocation(), FRotator::ZeroRotator);
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, GetFName().ToString());
//}
//
//void AHexagonTile::DeActivatedByClick()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("deactivated"));
//
//}

