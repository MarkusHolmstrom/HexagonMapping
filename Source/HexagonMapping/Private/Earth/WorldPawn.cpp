// Fill out your copyright notice in the Description page of Project Settings.


#include "Earth/WorldPawn.h"
#include "Earth/GenerateMapComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
//#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

// Sets default values
AWorldPawn::AWorldPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Surface = CreateDefaultSubobject<USphereComponent>("Surface");
	Surface->SetSphereRadius(EarthRadius);
	RootComponent = Surface;
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshSurface"));
	SphereMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	//SphereMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

}

// Called when the game starts or when spawned
void AWorldPawn::BeginPlay()
{
	Super::BeginPlay();
	SphereMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	if (!CameraComponent)
	{
		CameraComponent = CameraActor->FindComponentByClass<UCameraComponent>();
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("cam comp found"));

	}
}

void AWorldPawn::GetTile()
{
	// Trace to see what is under the mouse cursor
	FHitResult Hit;
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit) 
	{
		OnTileChosen(Hit.GetActor());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, Hit.GetActor()->GetName());
	}
}

void AWorldPawn::OnTileChosen(AActor* Tile)
{
	AActor* ShowLight = GetWorld()->SpawnActor<AActor>(ShowLightBP, Tile->GetActorLocation(), FRotator::ZeroRotator);
	ShowLights.Add(ShowLight);
	OnTileClicked.Broadcast(Tile);
}

void AWorldPawn::ActivateRotation()
{
	CanRotate = true;
}

void AWorldPawn::DeActivateRotation()
{
	CanRotate = false;
}

void AWorldPawn::AddYawInput(float Val)
{
	if (CanRotate)
	{
		AddActorWorldRotation(FRotator(0, -Val, 0));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("yaw"));
	}
}

void AWorldPawn::AddPitchInput(float Val)
{
	if (CanRotate)
	{
		AddActorWorldRotation(FRotator(-Val, 0, 0));
	}
}

void AWorldPawn::SetZooming(float Val)
{
	if (CameraComponent && Val != 0)
	{
		if (DefaultCameraFOV <= MAXFOV && DefaultCameraFOV >= MINFOV)
		{
			CameraComponent->SetFieldOfView(FMath::Lerp(CameraComponent->FieldOfView, 
				DefaultCameraFOV -= Val * ZoomSpeed, 0.1f));
		}
		else if (DefaultCameraFOV > MAXFOV)
		{
			DefaultCameraFOV = MAXFOV;
		}
		else if (DefaultCameraFOV < MINFOV)
		{
			DefaultCameraFOV = MINFOV;
		}
	}
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
	PlayerInputComponent->BindAction(TEXT("Activate"), IE_Pressed, this, 
		&AWorldPawn::ActivateRotation);
	PlayerInputComponent->BindAction(TEXT("Activate"), IE_DoubleClick, this,
		&AWorldPawn::GetTile);
	PlayerInputComponent->BindAction(TEXT("DeActivate"), IE_Released, this,
		&AWorldPawn::DeActivateRotation);

	PlayerInputComponent->BindAxis(TEXT("RotateX"), this, 
		&AWorldPawn::AddYawInput);
	PlayerInputComponent->BindAxis(TEXT("RotateY"), this,
		&AWorldPawn::AddPitchInput);
	PlayerInputComponent->BindAxis(TEXT("Zooming"), this,
		&AWorldPawn::SetZooming);
}


