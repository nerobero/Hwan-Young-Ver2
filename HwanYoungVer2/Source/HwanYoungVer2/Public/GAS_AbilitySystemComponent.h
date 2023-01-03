// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GAS_AbilitySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedDamageDelegate,
	UGAS_AbilitySystemComponent*, SourceASC, float, UnmitigatedDamage, float, MitigatedDamage);


/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UGAS_AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public: 

	bool CharacterAbilitiesGiven = false;
	bool StartupEffectApplied = false;

	FReceivedDamageDelegate ReceivedDamage;
	//constructor 
	UGAS_AbilitySystemComponent();
	
	virtual void ReceiveDamage(UGAS_AbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage);
};
