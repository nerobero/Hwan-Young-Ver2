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
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, mp, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerCharacAttributeSet, gaugeP, COND_None, REPNOTIFY_Always);
}

void UPlayerCharacAttributeSet::OnRep_HP(const FGameplayAttributeData& OldHP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, hp, OldHP);
}

void UPlayerCharacAttributeSet::OnRep_MP(const FGameplayAttributeData& OldMP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, mp, OldMP);
}

void UPlayerCharacAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, stamina, OldStamina);
}

void UPlayerCharacAttributeSet::OnRep_GaugeP(const FGameplayAttributeData& OldGaugeP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerCharacAttributeSet, gaugeP, OldGaugeP);
}
