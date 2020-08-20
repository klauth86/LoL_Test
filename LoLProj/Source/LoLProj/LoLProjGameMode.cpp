// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LoLProjGameMode.h"
#include "LoLProjHUD.h"
#include "LoLProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALoLProjGameMode::ALoLProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/BP/BP_FPCharacter.BP_FPCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALoLProjHUD::StaticClass();
}
