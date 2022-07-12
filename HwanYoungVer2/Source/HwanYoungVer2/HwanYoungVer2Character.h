// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h" //allows defining an interface for ability system
#include "HwanYoungVer2Character.generated.h"


UCLASS(config=Game)
class AHwanYoungVer2Character : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Our ability system */ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true")) 
	class UAbilitySystemComponent* AbilitySystem;

public:
	AHwanYoungVer2Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	//We add this function, overriding it from IAbilitySystemInterface. 
	FORCEINLINE UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystem; }
	
};

UENUM(BlueprintType)
enum class AbilityInput : uint8
{
	UseWeapon UMETA(DisplayName = "Use Weapon"), //ID: 0, using weapon to attack
	SwitchWeapon UMETA(DisplayName = "Switch Weapons"), //ID: 1, switching weapons
	UseActive1 UMETA(DisplayName = "Use Active Skill 1"), // ID: 2, active 1
	UseActive2 UMETA(DisplayName = "Use Active Skill 2"), // ID: 3, active 2
	UseActive3 UMETA(DisplayName = "Use Active Skill 3"), // ID: 4, active 3
	UseUlt UMETA(DisplayName = "Use Ultimate Skill"), // ID: 5, ult
	PassiveDash UMETA(DisplayName = "Dash"), // ID: 6, dash (passive)
};