// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAIController.h"

APlayerAIController::APlayerAIController()
{
	//if we create a new AI instance, it will want to have its own player state:
	bWantsPlayerState = true;  
}
