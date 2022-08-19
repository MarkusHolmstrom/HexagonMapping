// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DetailActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class HEXAGONMAPPING_API ADetailActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshHill;
public:	
	// Sets default values for this actor's properties
	ADetailActor();

};
