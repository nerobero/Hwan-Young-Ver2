// Fill out your copyright notice in the Description page of Project Settings.


#include "HwanYoungAssetManager.h"
#include "AbilitySystemGlobals.h"

void UHwanYoungAssetManager::StartInitialLoading() {
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
}