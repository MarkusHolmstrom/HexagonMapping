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
}

// Called when the game starts or when spawned
void AHexagonTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHexagonTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHexagonTile::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	/*PlayerInputComponent->BindAction(TEXT("Activate"), IE_Pressed, this,
		&AHexagonTile::ActivatedByClick);
	PlayerInputComponent->BindAction(TEXT("DeActivate"), IE_Released, this,
		&AHexagonTile::DeActivatedByClick);*/

}

void AHexagonTile::ActivatedByClick()
{
	//OnTileClicked.Broadcast(this);
	ShowLight = GetWorld()->SpawnActor<AActor>(ShowLightBP, GetActorLocation(), FRotator::ZeroRotator);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, GetFName().ToString());
}

void AHexagonTile::DeActivatedByClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("deactivated"));

}

void AHexagonTile::RemoveLight()
{
	if (ShowLight)
	{
		ShowLight->Destroy();
	}
}

