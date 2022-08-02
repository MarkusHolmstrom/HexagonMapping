// Fill out your copyright notice in the Description page of Project Settings.


#include "Earth/WorldPawn.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWorldPawn::AWorldPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Surface = CreateDefaultSubobject<USphereComponent>("Surface");
	Surface->SetSphereRadius(EarthRadius);
	RootComponent = Surface;
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshSurface"));
	SphereMesh->AttachTo(RootComponent);
	SphereMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void AWorldPawn::BeginPlay()
{
	Super::BeginPlay();
	SphereMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called every frame
void AWorldPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWorldPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

