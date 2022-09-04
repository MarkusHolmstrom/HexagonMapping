// MarkusHolmstrom no rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CylinderShapeMapping.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEXAGONMAPPING_API AShapeMapping : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		bool bCylinder = true;
private:
	//3D cylinder stuff
	FVector Start = FVector(0, 0, 0);
	FVector ForwardVector;
	FVector End;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;

public:	
	// Sets default values for this component's properties
	AShapeMapping();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UFUNCTION()
	void SetShape(bool Cylinder);
	UFUNCTION()
	FVector GetHexLocation(int32 Height, int32 Width, int32 MaxHeight, int32 MaxWidth, int32 Radius);
private:
	UFUNCTION()
	float GetAngle(int32 MaxWidth);
	UFUNCTION()
	void ShootLaser();
};
