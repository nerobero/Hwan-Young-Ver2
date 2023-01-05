// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "HwanYoungVer2.h"
#include "HwanYoungCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate,
	AHwanYoungCharacterBase*, Character);


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
	float GetCharacterLevel() const;
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

	//pointers to the attribute set and ability system component
	//of the player character  
	TWeakObjectPtr<class UGAS_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class UPlayerCharacAttributeSet> AttributeSetBase;

	//gameplaytags represent the states of the object;
	//so if we were to modify the gameplay tags of a character,
	//we are, comprehensively speaking, changing the states of
	//the given character
	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Hwanyoung|Character")
	FText CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Hwanyoung|Animation")
	UAnimMontage* DeathMontage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Hwanyoung|Abilties")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Hwanyoung|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Hwanyoung|Abilities")
	TArray<TSubclassOf<class UPlayerCharacGameplayAbility>> CharacterAbilities;
	
	
	virtual void AddCharacterAbilities();
	virtual void InitializeAttributes();
	virtual void AddStartupEffects();

	//these two functions are going to be used
	//when re/spawn; changes to these attributes mid-gameplay
	//are going to be calculated via GameplayEffects
	virtual void SetHP(float hp);
	virtual void SetMP(float mp);
	virtual void SetStamina(float stamina);
	virtual void SetGaugeP(float gaugep);
	
public:	
	// // Called every frame
	// virtual void Tick(float DeltaTime) override;
	//
	// // Called to bind functionality to input
	// virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//getter function for ability system component:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
