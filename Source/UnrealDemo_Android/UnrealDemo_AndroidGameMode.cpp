// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealDemo_AndroidGameMode.h"
#include "UnrealDemo_AndroidCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealDemo_AndroidGameMode::AUnrealDemo_AndroidGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
