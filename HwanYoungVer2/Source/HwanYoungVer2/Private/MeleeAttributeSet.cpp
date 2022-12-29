// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAttributeSet.h"
#include "Net/UnrealNetwork.h"


UMeleeAttributeSet::UMeleeAttributeSet()
{

}

void UMeleeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UMeleeAttributeSet, physical, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMeleeAttributeSet, critRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMeleeAttributeSet, critATKDMGrate, COND_None, REPNOTIFY_Always);
}

void UMeleeAttributeSet::OnRep_Physical(const FGameplayAttributeData& OldPhysical)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMeleeAttributeSet, physical, OldPhysical);
}

void UMeleeAttributeSet::OnRep_CritRate(const FGameplayAttributeData& OldCritRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMeleeAttributeSet, critRate, OldCritRate);
}

void UMeleeAttributeSet::OnRep_CritATKDMGRate(const FGameplayAttributeData& OldCritATKDMGRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMeleeAttributeSet, critATKDMGrate, OldCritATKDMGRate);
}
