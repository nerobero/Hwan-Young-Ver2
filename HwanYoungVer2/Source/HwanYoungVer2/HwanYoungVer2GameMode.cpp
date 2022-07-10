// Copyright Epic Games, Inc. All Rights Reserved.

#include "HwanYoungVer2GameMode.h"
#include "HwanYoungVer2Character.h"
#include "UObject/ConstructorHelpers.h"

AHwanYoungVer2GameMode::AHwanYoungVer2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
