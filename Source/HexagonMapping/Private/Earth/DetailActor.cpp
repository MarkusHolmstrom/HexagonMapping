// MarkusHolmstrom no rights reserved


#include "Earth/DetailActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADetailActor::ADetailActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	MeshHill = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshHill"));
	MeshHill->SetupAttachment(RootComponent);
}


