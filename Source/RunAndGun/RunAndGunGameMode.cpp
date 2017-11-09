// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RunAndGunGameMode.h"
#include "RunAndGunHUD.h"
#include "RunAndGunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunAndGunGameMode::ARunAndGunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARunAndGunHUD::StaticClass();
}
