// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityT_Melee1.generated.h"



#define DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMyDelegate);


/**
 * Base Ability for Melee attacks
 */
UCLASS()
class HWANYOUNGVER2_API UAbilityT_Melee1 : public UAbilityTask
{
	GENERATED_BODY()

	/**
	UPROPERTY(BlueprintAssignable)
	FMyTwoParamDelegate OnCalled;
	*/
	
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "ExecuteMyTask", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityT_Melee1* CreateMyTask(UGameplayAbility* OwningAbility, FName TaskInstanceName);
};
