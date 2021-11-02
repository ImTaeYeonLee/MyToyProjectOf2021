// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyNetworkStudyGameMode.h"
#include "MyNetworkStudyHUD.h"
#include "MyNetworkStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyNetworkStudyGameMode::AMyNetworkStudyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyNetworkStudyHUD::StaticClass();
}
