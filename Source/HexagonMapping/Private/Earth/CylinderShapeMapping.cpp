// MarkusHolmstrom no rights reserved


#include "Earth/CylinderShapeMapping.h"

// Sets default values for this component's properties
AShapeMapping::AShapeMapping()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void AShapeMapping::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void AShapeMapping::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
}

void AShapeMapping::SetShape(bool Cylinder)
{
	bCylinder = Cylinder;
}

FVector AShapeMapping::GetHexLocation(int32 Height, int32 Width, int32 MaxHeight, int32 MaxWidth, int32 Radius)
{
	/*float angle = GetAngle(MaxWidth * Width);
	float x = Radius * FMath::Cos(angle);
	float y = Radius * FMath::Sin(angle);
	return FVector(x, y, Height);*/
	return FVector(0,0,0);
}

float AShapeMapping::GetAngle(int32 MaxWidth)
{
	if (MaxWidth == 0)
	{
		return 0;
	}
	return 360 / MaxWidth;
}

void AShapeMapping::ShootLaser()
{
	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, DefaultComponentQueryParams,
		DefaultResponseParams)) {

	}
}

