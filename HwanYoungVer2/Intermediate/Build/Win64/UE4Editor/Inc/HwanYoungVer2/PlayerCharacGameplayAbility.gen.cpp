// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/PlayerCharacGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacGameplayAbility() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	HWANYOUNGVER2_API UEnum* Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID();
// End Cross Module References
	void UPlayerCharacGameplayAbility::StaticRegisterNativesUPlayerCharacGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister()
	{
		return UPlayerCharacGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityOnGranted_MetaData[];
#endif
		static void NewProp_ActivateAbilityOnGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateAbilityOnGranted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerCharacGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "//Abilities with this set will automatically activate when the input is pressed: \n" },
		{ "ModuleRelativePath", "Public/PlayerCharacGameplayAbility.h" },
		{ "ToolTip", "Abilities with this set will automatically activate when the input is pressed:" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacGameplayAbility, AbilityInputID), Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/PlayerCharacGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacGameplayAbility, AbilityID), Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/PlayerCharacGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit(void* Obj)
	{
		((UPlayerCharacGameplayAbility*)Obj)->ActivateAbilityOnGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted = { "ActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacGameplayAbility), &Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityInputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_AbilityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::ClassParams = {
		&UPlayerCharacGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCharacGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCharacGameplayAbility, 3925951540);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UPlayerCharacGameplayAbility>()
	{
		return UPlayerCharacGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCharacGameplayAbility(Z_Construct_UClass_UPlayerCharacGameplayAbility, &UPlayerCharacGameplayAbility::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UPlayerCharacGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
