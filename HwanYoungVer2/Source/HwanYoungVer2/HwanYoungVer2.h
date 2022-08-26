// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	None UMETA(DisplayName = "None"), //no input given
	Confirm UMETA(DisplayName = "Confirm"), 
	Cancel UMETA(DisplayName = "Cancel"),
	UseWeapon UMETA(DisplayName = "Use Weapon"), //using melee weapon to attack
	SwitchWeapon UMETA(DisplayName = "Switch Weapons"), //switching weapons
	UseActive1 UMETA(DisplayName = "Use Active Skill 1"), //active 1
	UseActive2 UMETA(DisplayName = "Use Active Skill 2"), //active 2
	UseActive3 UMETA(DisplayName = "Use Active Skill 3"), //active 3
	UseUlt UMETA(DisplayName = "Use Ultimate Skill"), //ult
	PassiveDash UMETA(DisplayName = "Dash") //dash (passive)
};