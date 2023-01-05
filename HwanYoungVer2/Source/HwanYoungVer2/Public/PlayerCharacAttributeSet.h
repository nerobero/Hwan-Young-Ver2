// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"

#include "PlayerCharacAttributeSet.generated.h"

 
//uses macros from AttributeSet.h

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClasssName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) 

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

	UPROPERTY(BlueprintReadOnly, Category = "Level", ReplicatedUsing = OnRep_Level)
	FGameplayAttributeData level;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, level)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(level)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(level)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(level)
	
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData hp;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, hp)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(hp)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(hp)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(hp)
	
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHP)
	FGameplayAttributeData maxHP;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, maxHP)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(maxHP)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(maxHP)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(maxHP)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_MP)
	FGameplayAttributeData mp;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, mp)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(mp)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(mp)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(mp)

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_MaxMP)
	FGameplayAttributeData maxMP;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, maxMP)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(maxMP)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(maxMP)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(maxMP)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData stamina;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, stamina)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(stamina)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(stamina)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(stamina)

	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData maxStamina;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, maxStamina)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(maxStamina)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(maxStamina)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(maxStamina)

	UPROPERTY(BlueprintReadOnly, Category = "Ultimate Gauge Points", ReplicatedUsing = OnRep_GaugeP)
	FGameplayAttributeData gaugeP;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, gaugeP)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(gaugeP)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(gaugeP)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(gaugeP)
	
	UPROPERTY(BlueprintReadOnly, Category = "Ultimate Gauge Points", ReplicatedUsing = OnRep_MaxGaugeP)
	FGameplayAttributeData maxGaugeP;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, maxGaugeP)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(maxGaugeP)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(maxGaugeP)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(maxGaugeP)

	//Damage is treated as a meta-attribute which is intended to interact with HP;
	//This attribute value can be modified with buffs/debuffs in an GameplayEffectExecutionCalculation
	//and can be further manipulated in the AttributeSet.
	//The damage meta-attribute has no persistence between GameplayEffects and is overriden by every one
	//not typically replicated.
	UPROPERTY(BlueprintReadOnly, Category = "Damage - Meta attribute")
	FGameplayAttributeData damage;
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UPlayerCharacAttributeSet, damage)
	GAMEPLAYATTRIBUTE_VALUE_GETTER(damage)
	GAMEPLAYATTRIBUTE_VALUE_SETTER(damage)
	GAMEPLAYATTRIBUTE_VALUE_INITTER(damage)

	UFUNCTION()
		virtual void OnRep_Level(const FGameplayAttributeData& OldLevel);
	
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
