// Fill out your copyright notice in the Description page of Project Settings.


#include "HwanYoungCharacterBase.h"
#include "GAS_AbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "PlayerCharacAttributeSet.h"
#include "PlayerCharacGameplayAbility.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AHwanYoungCharacterBase::AHwanYoungCharacterBase(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass<UCharacterMovementComponent>(
		ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//setting up the capsule collider object for the character:
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility,
		ECollisionResponse::ECR_Overlap);

	bAlwaysRelevant = true;

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("State.RemoveOnDeath"));
}

UAbilitySystemComponent* AHwanYoungCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

bool AHwanYoungCharacterBase::IsAlive() const
{
	return GetHP() > 0.0f;
}

void AHwanYoungCharacterBase::RemoveCharacterAbilities()
{
	//if the object doesn't have the authority, ability system component is not valid
	//or character abilities are not given in the ability system component,
	//we don't do anything and just return
	if (GetLocalRole() != ROLE_Authority || 
		!AbilitySystemComponent.IsValid() ||
		!AbilitySystemComponent->CharacterAbilitiesGiven)
	{
		return;
	}

	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if (Spec.SourceObject == this && CharacterAbilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle); //spec.handle is an instance of the ability
		}
	}

	for (int32 i = 0; i <AbilitiesToRemove.Num(); i++)
	{
		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
	}

	AbilitySystemComponent->CharacterAbilitiesGiven = false;
}


int32 AHwanYoungCharacterBase::GetAbilityLevel(EAbilityInputID AbilityID) const
{
	return 1; //hardcoding it for now (23-01-03)
}

float AHwanYoungCharacterBase::GetCharacterLevel() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->Getlevel();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetHP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->Gethp();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetMP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->Getmp();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetStamina() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->Getstamina();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetGaugeP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->GetgaugeP();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetMaxGaugeP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->GetmaxGaugeP();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetMaxMP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->GetmaxMP();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetMaxHP() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->GetmaxHP();
	}

	return 0.0f;
}

float AHwanYoungCharacterBase::GetMaxStamina() const
{
	if (AttributeSetBase.IsValid())
	{
		return AttributeSetBase->GetmaxStamina();
	}

	return 0.0f;
}

void AHwanYoungCharacterBase::Die()
{
	RemoveCharacterAbilities();
	
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCharacterMovement()->GravityScale = 0;
	GetCharacterMovement()->Velocity = FVector(0); //disabling character movement when death

	OnCharacterDied.Broadcast(this);

	if (AbilitySystemComponent.IsValid())
	{
		AbilitySystemComponent->CancelAbilities();

		FGameplayTagContainer EffectsTagsToRemove;
		EffectsTagsToRemove.AddTag(EffectRemoveOnDeathTag);
		int32 NumEffectsRemoved = AbilitySystemComponent->RemoveActiveEffectsWithTags(EffectsTagsToRemove);
		AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
	}

	//playing death anim:
	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	else
	{
		FinishDying();
	}
}

void AHwanYoungCharacterBase::FinishDying()
{
	Destroy();
}


// Called when the game starts or when spawned
void AHwanYoungCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHwanYoungCharacterBase::InitializeAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributes)
	{
		UE_LOG(LogTemp, Error,
			TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's Blueprint."),
			*FString(__FUNCTION__), *GetName());
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->
		MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		//apply the gameplayeffect here:
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(
			*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}

void AHwanYoungCharacterBase::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority ||
		!AbilitySystemComponent.IsValid() ||
		AbilitySystemComponent->StartupEffectApplied)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
		if (NewHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle =
				AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(
					*NewHandle.Data.Get(), AbilitySystemComponent.Get());
		}
	}
	AbilitySystemComponent->StartupEffectApplied = true; 
}

void AHwanYoungCharacterBase::SetHP(float hp)
{
	if (AttributeSetBase.IsValid())
	{
		AttributeSetBase->Sethp(hp);
	}
}

void AHwanYoungCharacterBase::SetMP(float mp)
{
	if (AttributeSetBase.IsValid())
	{
		AttributeSetBase->Setmp(mp);
	}
}

void AHwanYoungCharacterBase::SetStamina(float stamina)
{
	if (AttributeSetBase.IsValid())
	{
		AttributeSetBase->Setstamina(stamina);
	}
}

void AHwanYoungCharacterBase::SetGaugeP(float gaugep)
{
	if (AttributeSetBase.IsValid())
	{
		AttributeSetBase->SetgaugeP(gaugep);
	}
}


// // Called every frame
// void AHwanYoungCharacterBase::Tick(float DeltaTime)
// {
// 	Super::Tick(DeltaTime);
//
// }
//
// // Called to bind functionality to input
// void AHwanYoungCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
// }

void AHwanYoungCharacterBase::AddCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority ||
		!AbilitySystemComponent.IsValid() ||
		AbilitySystemComponent->CharacterAbilitiesGiven)
	{
		return;
	}

	//if there are no abilities added to the character:
	for (TSubclassOf<UPlayerCharacGameplayAbility>& StartUpAbility : CharacterAbilities)
	{
		AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(StartUpAbility,
				GetAbilityLevel(StartUpAbility.GetDefaultObject()->AbilityID),
				static_cast<int32> (StartUpAbility.GetDefaultObject()->AbilityInputID),
				this));
	}
}


