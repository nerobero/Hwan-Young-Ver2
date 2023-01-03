// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacAttributeSet.h"
#include "Net/UnrealNetwork.h"
//UCLASS()

UPlayerCharacAttributeSet::UPlayerCharacAttributeSet()
{

}


UPlayerCharacAttributeSet::~UPlayerCharacAttributeSet()
{
}

void UPlayerCharacAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, hp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, maxHP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, mp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, maxMP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, maxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, gaugeP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, maxGaugeP, COND_None, REPNOTIFY_Always);
}

void UPlayerCharacAttributeSet::OnRep_HP(const FGameplayAttributeData& OldHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, hp, OldHP);
}

void UPlayerCharacAttributeSet::OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, maxHP, OldMaxHP);
}

void UPlayerCharacAttributeSet::OnRep_MP(const FGameplayAttributeData& OldMP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, mp, OldMP);
}

void UPlayerCharacAttributeSet::OnRep_MaxMP(const FGameplayAttributeData& OldMaxMP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, maxMP, OldMaxMP);
}

void UPlayerCharacAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, stamina, OldStamina);
}

void UPlayerCharacAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, maxStamina, OldMaxStamina);
}

void UPlayerCharacAttributeSet::OnRep_GaugeP(const FGameplayAttributeData& OldGaugeP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, gaugeP, OldGaugeP);
}

void UPlayerCharacAttributeSet::OnRep_MaxGaugeP(const FGameplayAttributeData& OldMaxGaugeP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, maxGaugeP, OldMaxGaugeP);
}