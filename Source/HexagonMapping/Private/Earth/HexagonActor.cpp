// MarkusHolmstrom no rights reserved


#include "Earth/HexagonActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Enums.h"

// Sets default values
AHexagonActor::AHexagonActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	MeshTile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshTile->SetupAttachment(RootComponent);
	MeshTile->OnClicked.AddDynamic(this, &AHexagonActor::ActivatedByClick);
}

// Called when the game starts or when spawned
void AHexagonActor::BeginPlay()
{
	Super::BeginPlay();
	/*PlayerInputComponent = NewObject<UInputComponent>(this);
	PlayerInputComponent->RegisterComponent();
	if (PlayerInputComponent)
	{
		PlayerInputComponent->BindAction(TEXT("Activate"), IE_Pressed, this,
			&AHexagonActor::ActivatedByClick);
		PlayerInputComponent->BindAction(TEXT("DeActivate"), IE_Released, this,
			&AHexagonActor::DeActivatedByClick);
		EnableInput(GetWorld()->GetFirstPlayerController());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("input activated"));

	}*/
	
}

// Called every frame
void AHexagonActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHexagonActor::ActivatedByClick(UPrimitiveComponent* pComponent, FKey inKey)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("activated"));

}

void AHexagonActor::DeActivatedByClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Deactivated"));

}

