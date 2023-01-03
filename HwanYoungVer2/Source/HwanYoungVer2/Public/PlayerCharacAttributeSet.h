// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"

#include "PlayerCharacAttributeSet.generated.h"

 
//uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) 
#define GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClasssName, PropertyName) 
#define GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) 
#define GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) 
#define GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) 


/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UPlayerCharacAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:

	UPlayerCharacAttributeSet(); //constructor
	~UPlayerCharacAttributeSet(); //destructor

	//when there are changes to any attributes, the attribute set needs to be replicated
	//in order for other appropriate entities within the game level to be aware of such changes 
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData hp;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, hp)
	
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHP)
	FGameplayAttributeData maxHP;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, maxHP)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_MP)
	FGameplayAttributeData mp;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, mp)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_MaxMP)
	FGameplayAttributeData maxMP;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, maxMP)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData stamina;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, stamina)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData maxStamina;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, maxStamina)

	UPROPERTY(BlueprintReadOnly, Category = "Ultimate Gauge Points", ReplicatedUsing = OnRep_GaugeP)
	FGameplayAttributeData gaugeP;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, gaugeP)
	
	UPROPERTY(BlueprintReadOnly, Category = "Ultimate Gauge Points", ReplicatedUsing = OnRep_MaxGaugeP)
	FGameplayAttributeData maxGaugeP;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, maxGaugeP)

	//Damage is treated as a meta-attribute which is intended to interact with HP;
	//This attribute value can be modified with buffs/debuffs in an GameplayEffectExecutionCalculation
	//and can be further manipulated in the AttributeSet.
	//The damage meta-attribute has no persistence between GameplayEffects and is overriden by every one
	//not typically replicated.
	UPROPERTY(BlueprintReadOnly, Category = "Damage - Meta attribute")
	FGameplayAttributeData damage;
	ATTRIBUTE_ACCESSORS(UPlayerCharacAttributeSet, damage)
	
	UFUNCTION()
		virtual void OnRep_HP(const FGameplayAttributeData& OldHP);

	UFUNCTION()
		virtual void OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP);

	UFUNCTION()
		virtual void OnRep_MP(const FGameplayAttributeData& OldMP);

	UFUNCTION()
		virtual void OnRep_MaxMP(const FGameplayAttributeData& OldMaxMP);
	
	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	UFUNCTION()
		virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);

	UFUNCTION()
		virtual void OnRep_GaugeP(const FGameplayAttributeData& OldGaugeP);

	UFUNCTION()
		virtual void OnRep_MaxGaugeP(const FGameplayAttributeData& OldMaxGaugeP);


};
