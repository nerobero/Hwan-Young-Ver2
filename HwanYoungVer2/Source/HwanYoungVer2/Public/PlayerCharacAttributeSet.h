// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"

#include "PlayerCharacAttributeSet.generated.h"

 
//uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \\
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClasssName, PropertyName) \\
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \\
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) 


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

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_HP)
	FGameplayAttributeData hp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_MP)
	FGameplayAttributeData mp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData stamina; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing = OnRep_GaugeP)
	FGameplayAttributeData gaugeP;



	UFUNCTION()
		virtual void OnRep_HP(const FGameplayAttributeData& OldHP);

	UFUNCTION()
		virtual void OnRep_MP(const FGameplayAttributeData& OldMP);

	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	UFUNCTION()
		virtual void OnRep_GaugeP(const FGameplayAttributeData& OldGaugeP);


};
