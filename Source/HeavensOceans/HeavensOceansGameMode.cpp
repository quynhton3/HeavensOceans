// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeavensOceansGameMode.h"
#include "HeavensOceansCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeavensOceansGameMode::AHeavensOceansGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
