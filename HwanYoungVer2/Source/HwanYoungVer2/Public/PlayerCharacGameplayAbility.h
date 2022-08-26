// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include <HwanYoungVer2/HwanYoungVer2.h>
#include "PlayerCharacGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UPlayerCharacGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public: 

	UPlayerCharacGameplayAbility();

	//Abilities with this set will automatically activate when the input is pressed: 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EAbilityInputID AbilityInputID = EAbilityInputID::None;
	
};
