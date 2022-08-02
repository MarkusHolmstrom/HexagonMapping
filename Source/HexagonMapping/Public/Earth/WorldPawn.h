// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "WorldPawn.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class HEXAGONMAPPING_API AWorldPawn : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* Surface;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int EarthRadius = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SphereMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rotation)
	bool CanRotate = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rotation)
	int RotationSpeed = 30;

	// Sets default values for this pawn's properties
	AWorldPawn();

	UFUNCTION()
	void ActivateRotation();
	UFUNCTION()
	void DeActivateRotation();
	UFUNCTION()
	void AddYawInput(float Val);
	UFUNCTION()
	void AddPitchInput(float Val);
	UFUNCTION()
	void SetZooming(float Val);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
