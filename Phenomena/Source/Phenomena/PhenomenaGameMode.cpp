// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhenomenaGameMode.h"
#include "PhenomenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhenomenaGameMode::APhenomenaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
