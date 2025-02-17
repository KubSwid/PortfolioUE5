// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExceptSpaceGameMode.h"
#include "ExceptSpaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExceptSpaceGameMode::AExceptSpaceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
