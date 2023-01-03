// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "HwanYoungCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate,
	AHwanYoungCharacterBase*, character);


UCLASS()
class HWANYOUNGVER2_API AHwanYoungCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHwanYoungCharacterBase(const class FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintAssignable, Category = "Hwanyoung|Character")
	FCharacterDiedDelegate OnCharacterDied;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Character")
	virtual bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Character")
	virtual int32 GetAbilityLevel(EAbilityInputID AbilityID) const;

	//this function is called only in the server:
	virtual void RemoveCharacterAbilities();
	//this is also called only in the server:
	virtual void Die();

	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Character")
	virtual void FinishDying();

	//attribute getter functions
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Attributes")
	float GetHP() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Atributes")
	float GetMaxHP() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Attributes")
	float GetMP() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Atributes")
	float GetMaxMP() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Attributes")
	float GetStamina() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Atributes")
	float GetMaxStamina() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Attributes")
	float GetGaugeP() const;
	UFUNCTION(BlueprintCallable, Category = "Hwanyoung|Atributes")
	float GetMaxGaugeP() const;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TWeakObjectPtr<class UGAS_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class UPlayerCharacGameplayAbility> AttributeSetBase;

	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Hwanyoung|Character")
	FText CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Hwanyoung|Animation")
	UAnimMontage* DeathMontage;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
