// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MeleeAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UMeleeAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	UMeleeAttributeSet();

	//when there are changes to any attributes, the attribute set needs to be replicated
	//in order for other appropriate entities within the game level to be aware of such changes 
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Physical)
		FGameplayAttributeData physical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_CritRate)
		FGameplayAttributeData critRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_CritATKDMGRate)
		FGameplayAttributeData critATKDMGrate;

	UFUNCTION()
		virtual void OnRep_Physical(const FGameplayAttributeData& OldPhysical);


	UFUNCTION()
		virtual void OnRep_CritRate(const FGameplayAttributeData& OldCritRate);


	UFUNCTION()
		virtual void OnRep_CritATKDMGRate(const FGameplayAttributeData& OldCritATKDMGRate);
};
