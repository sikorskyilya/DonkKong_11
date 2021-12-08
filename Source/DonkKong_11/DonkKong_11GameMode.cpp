// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkKong_11GameMode.h"
#include "DonkKong_11Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkKong_11GameMode::ADonkKong_11GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
