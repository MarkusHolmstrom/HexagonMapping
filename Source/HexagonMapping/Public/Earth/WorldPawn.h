// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "WorldPawn.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class ACameraActor;
class UCameraComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTileClicked, AActor*, Tile);

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

	UPROPERTY(EditAnywhere)
	ACameraActor* CameraActor;
	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;
	UPROPERTY(EditAnywhere)
	float DefaultCameraFOV = 90;
	UPROPERTY(EditAnywhere)
		float MAXFOV = 120;
	UPROPERTY(EditAnywhere)
		float MINFOV = 40;
	UPROPERTY(EditAnywhere)
	float ZoomSpeed = 5;


	UPROPERTY(EditAnywhere, Category = ShowLight)
		TSubclassOf<AActor> ShowLightBP;
	UPROPERTY(EditAnywhere, Category = ShowLight)
		TArray<AActor*> ShowLights;

	UPROPERTY(BlueprintAssignable)
		FOnTileClicked OnTileClicked;

	// Sets default values for this pawn's properties
	AWorldPawn();

	UFUNCTION()
		void GetTile();
	UFUNCTION()
	void OnTileChosen(AActor* Tile);
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

	UFUNCTION()
	void RemoveLights()
	{
		for (size_t i = 0; i < ShowLights.Num(); i++)
		{
			ShowLights[i]->Destroy();
		}
		ShowLights.Empty();
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
