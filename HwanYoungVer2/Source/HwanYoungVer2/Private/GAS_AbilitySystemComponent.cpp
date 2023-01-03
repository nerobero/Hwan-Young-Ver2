// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_AbilitySystemComponent.h"

UGAS_AbilitySystemComponent::UGAS_AbilitySystemComponent()
{

}


void UGAS_AbilitySystemComponent::ReceiveDamage(
	UGAS_AbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}