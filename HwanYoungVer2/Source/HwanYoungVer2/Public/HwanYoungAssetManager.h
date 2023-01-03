// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "HwanYoungAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class HWANYOUNGVER2_API UHwanYoungAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:
	virtual void StartInitialLoading() override;
};
