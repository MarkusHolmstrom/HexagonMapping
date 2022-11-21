// Copyright Epic Games, Inc. All Rights Reserved.

#include "HexagonMappingGameMode.h"
#include "HexagonMappingPlayerController.h"
#include "HexagonMappingCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "HexagonPlayerController.h"

AHexagonMappingGameMode::AHexagonMappingGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHexagonPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}