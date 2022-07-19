// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityT_Melee1.h"

UAbilityT_Melee1* UAbilityT_Melee1::CreateMyTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, float examplevariable)
{
    UAbilityT_Melee1* MyObj = NewAbilityTask->UAbilityT_Melee1->(OwningAbility, TaskInstanceName);
    //Just assume we have defined a float called OptionalValue somewhere in the class before. This is just an example.
    //MyObj->OptionalValue = examplevariable;
    return MyObj;
}
