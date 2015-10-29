// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MobileOpenCV.h"
#include "MobileOpenCVGameMode.h"
#include "MobileOpenCVHUD.h"
#include "MobileOpenCVCharacter.h"

AMobileOpenCVGameMode::AMobileOpenCVGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMobileOpenCVHUD::StaticClass();
}
