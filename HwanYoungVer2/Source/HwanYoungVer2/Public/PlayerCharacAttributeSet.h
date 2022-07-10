// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerCharacAttributeSet.generated.h"

//#include "AttributeSetBase.generated.h"


/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UPlayerCharacAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPlayerCharacAttributeSet(); //constructor
	//~PlayerCharacAttributeSet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData hp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData mp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData gaugeP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData physical;

	
};

/*
* UCLASS()
class USimpleAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	/** Set default values. For example, Health should be set to a positive number */
	//USimpleAttributeSet();
	/** This measures how much damage can be absorbed before dying. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	//FGameplayAttributeData Health;
	///};
	//*/