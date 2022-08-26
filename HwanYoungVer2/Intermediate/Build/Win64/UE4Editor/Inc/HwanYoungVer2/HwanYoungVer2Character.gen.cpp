// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/HwanYoungVer2Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHwanYoungVer2Character() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2Character_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void AHwanYoungVer2Character::StaticRegisterNativesAHwanYoungVer2Character()
	{
	}
	UClass* Z_Construct_UClass_AHwanYoungVer2Character_NoRegister()
	{
		return AHwanYoungVer2Character::StaticClass();
	}
	struct Z_Construct_UClass_AHwanYoungVer2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffect;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHwanYoungVer2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HwanYoungVer2Character.h" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "Comment", "/** Our ability system */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Our ability system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, AbilitySystemComponent), Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, AttributeSet), Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAttributeEffect_MetaData[] = {
		{ "Category", "GAS" },
		{ "Comment", "/**Effect that initializes our default attributes.*/" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Effect that initializes our default attributes." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAttributeEffect = { "DefaultAttributeEffect", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, DefaultAttributeEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAttributeEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAttributeEffect_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "Comment", "//An array of default abilities\n" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "An array of default abilities" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHwanYoungVer2Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAttributeEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_DefaultAbilities,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AHwanYoungVer2Character, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHwanYoungVer2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHwanYoungVer2Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::ClassParams = {
		&AHwanYoungVer2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHwanYoungVer2Character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHwanYoungVer2Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHwanYoungVer2Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHwanYoungVer2Character, 3209033544);
	template<> HWANYOUNGVER2_API UClass* StaticClass<AHwanYoungVer2Character>()
	{
		return AHwanYoungVer2Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHwanYoungVer2Character(Z_Construct_UClass_AHwanYoungVer2Character, &AHwanYoungVer2Character::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("AHwanYoungVer2Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHwanYoungVer2Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
