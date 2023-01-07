// Fill out your copyright notice in the Description page of Project Settings.


#include "HwanyoungPlayerState.h"
#include "PlayerCharacAttributeSet.h"
#include "GAS_AbilitySystemComponent.h"

AHwanyoungPlayerState::AHwanyoungPlayerState()
{
	AbilityComponent =
		CreateDefaultSubobject<UGAS_AbilitySystemComponent>(
			TEXT("AbilitySystemComponent"));

	AbilityComponent->SetIsReplicated(true);

	//we do mixed because we only need to replicate gameplay cues
	//which are responsible for visual stuff
	AbilityComponent->SetReplicationMode(
		EGameplayEffectReplicationMode::Mixed);

	AttributeSetBase =
		CreateDefaultSubobject<UPlayerCharacAttributeSet>(
			TEXT("AttributeSetBase"));

	NetUpdateFrequency = 100.0f;

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

UAbilitySystemComponent* AHwanyoungPlayerState::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}

UPlayerCharacAttributeSet* AHwanyoungPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

void AHwanyoungPlayerState::ShowAbilityConfirmCancelText(bool showText)
{
	//TODO:
	//this is for implementing HUD later!
}

float AHwanyoungPlayerState::GetHP() const
{
	return AttributeSetBase->Gethp();
}

float AHwanyoungPlayerState::GetMaxHP() const
{
	return AttributeSetBase->GetmaxHP();
}

float AHwanyoungPlayerState::GetMP() const
{
	return AttributeSetBase->Getmp();
}

float AHwanyoungPlayerState::GetMaxMP() const
{
	return AttributeSetBase->GetmaxMP();
}

float AHwanyoungPlayerState::GetStamina() const
{
	return AttributeSetBase->Getstamina();
}

float AHwanyoungPlayerState::GetMaxStamina() const
{
	return AttributeSetBase->GetmaxStamina();
}

float AHwanyoungPlayerState::GetGaugeP() const
{
	return AttributeSetBase->GetgaugeP();
}

float AHwanyoungPlayerState::GetMaxGaugeP() const
{
	return AttributeSetBase->GetmaxGaugeP();
}

float AHwanyoungPlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->Getlevel();
}

void AHwanyoungPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilityComponent)
	{
		//what we are doing here is creating a "link"
		//between the attribute change event and the function.
		//we will do this for all attribute change delegate handlers
		HPChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GethpAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::HPChanged);
		MaxHPChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetmaxHPAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::MaxHPChanged);
		MPChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetmpAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::MPChanged);
		MaxMPChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetmaxMPAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::MaxMPChanged);
		StaminaChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetstaminaAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::StaminaChanged);
		MaxStaminaChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetmaxStaminaAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::MaxStaminaChanged);
		GaugePChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetgaugePAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::GaugePChanged);
		MaxGaugePChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetmaxGaugePAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::MaxGaugePChanged);
		CharacterLevelChangedDelegateHandle =
			AbilityComponent->GetGameplayAttributeValueChangeDelegate(
				AttributeSetBase->GetlevelAttribute()).AddUObject(
				this, &AHwanyoungPlayerState::CharacterLevelChanged);

		//here we are making a custom gameplay tag event for State.Debuff.Stun 
		AbilityComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(
			FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(
				this, &AHwanyoungPlayerState::StunTagChanged);
	}
}

void AHwanyoungPlayerState::HPChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("HP changed!"));
}

void AHwanyoungPlayerState::MaxHPChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max HP changed!"));
}

void AHwanyoungPlayerState::MPChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("MP changed!"));
}

void AHwanyoungPlayerState::MaxMPChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max MP changed!"));
}

void AHwanyoungPlayerState::StaminaChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Stamina changed!"));
}

void AHwanyoungPlayerState::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max Stamina changed!"));
}

void AHwanyoungPlayerState::GaugePChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Gauge points changed!"));
}

void AHwanyoungPlayerState::MaxGaugePChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max Gauge poitns changed!"));
}

void AHwanyoungPlayerState::CharacterLevelChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Character Level changed!"));
}

void AHwanyoungPlayerState::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(
			FName("Ability.NotCanceledByStun")));

		AbilityComponent->CancelAbilities(
			&AbilityTagsToCancel, &AbilityTagsToCancel);
	}
}

bool AHwanyoungPlayerState::IsAlive() const
{
	return GetHP() > 0.0f;
}
