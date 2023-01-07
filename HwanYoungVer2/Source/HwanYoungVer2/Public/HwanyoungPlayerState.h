// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "GameFramework/PlayerState.h"
#include "HwanyoungPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API AHwanyoungPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AHwanyoungPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPlayerCharacAttributeSet* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|UI")
	void ShowAbilityConfirmCancelText(bool showText);

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetHP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetMaxHP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetMP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetMaxMP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetGaugeP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetMaxGaugeP() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Player State|Attributes")
	float GetCharacterLevel() const;
	
protected:
	UPROPERTY()
	class UGAS_AbilitySystemComponent* AbilityComponent;

	UPROPERTY()
	class UPlayerCharacAttributeSet* AttributeSetBase;

	FGameplayTag DeadTag;

	FDelegateHandle HPChangedDelegateHandle;
	FDelegateHandle MaxHPChangedDelegateHandle;
	FDelegateHandle MPChangedDelegateHandle;
	FDelegateHandle MaxMPChangedDelegateHandle;
	FDelegateHandle StaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaChangedDelegateHandle;
	FDelegateHandle GaugePChangedDelegateHandle;
	FDelegateHandle MaxGaugePChangedDelegateHandle;
	FDelegateHandle CharacterLevelChangedDelegateHandle;

	virtual void BeginPlay() override;

	virtual void HPChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHPChanged(const FOnAttributeChangeData& Data);
	virtual void MPChanged(const FOnAttributeChangeData& Data);
	virtual void MaxMPChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);
	virtual void GaugePChanged(const FOnAttributeChangeData& Data);
	virtual void MaxGaugePChanged(const FOnAttributeChangeData& Data);
	virtual void CharacterLevelChanged(const FOnAttributeChangeData& Data);

	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
	
};
