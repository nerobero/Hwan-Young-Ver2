// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
//#include "AttributeSetBase.generated.h"


/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API PlayerCharacAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	PlayerCharacAttributeSet(); //constructor
	~PlayerCharacAttributeSet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData HP;

	
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