// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game_Planning_TaskGameMode.h"
#include "Game_Planning_TaskHUD.h"
#include "Game_Planning_TaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGame_Planning_TaskGameMode::AGame_Planning_TaskGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGame_Planning_TaskHUD::StaticClass();
}
