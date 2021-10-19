// Copyright Epic Games, Inc. All Rights Reserved.

#include "TY_FunctionGameMode.h"
#include "TY_FunctionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATY_FunctionGameMode::ATY_FunctionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
