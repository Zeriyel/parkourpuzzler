// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParkourPuzzlerGameMode.h"
#include "ParkourPuzzlerHUD.h"
#include "ParkourPuzzlerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParkourPuzzlerGameMode::AParkourPuzzlerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParkourPuzzlerHUD::StaticClass();
}
