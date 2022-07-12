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
	HWANYOUNGVER2_API UEnum* Z_Construct_UEnum_HwanYoungVer2_AbilityInput();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2Character_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	static UEnum* AbilityInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HwanYoungVer2_AbilityInput, Z_Construct_UPackage__Script_HwanYoungVer2(), TEXT("AbilityInput"));
		}
		return Singleton;
	}
	template<> HWANYOUNGVER2_API UEnum* StaticEnum<AbilityInput>()
	{
		return AbilityInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AbilityInput(AbilityInput_StaticEnum, TEXT("/Script/HwanYoungVer2"), TEXT("AbilityInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HwanYoungVer2_AbilityInput_Hash() { return 2664218718U; }
	UEnum* Z_Construct_UEnum_HwanYoungVer2_AbilityInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HwanYoungVer2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AbilityInput"), 0, Get_Z_Construct_UEnum_HwanYoungVer2_AbilityInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AbilityInput::UseWeapon", (int64)AbilityInput::UseWeapon },
				{ "AbilityInput::SwitchWeapon", (int64)AbilityInput::SwitchWeapon },
				{ "AbilityInput::UseActive1", (int64)AbilityInput::UseActive1 },
				{ "AbilityInput::UseActive2", (int64)AbilityInput::UseActive2 },
				{ "AbilityInput::UseActive3", (int64)AbilityInput::UseActive3 },
				{ "AbilityInput::UseUlt", (int64)AbilityInput::UseUlt },
				{ "AbilityInput::PassiveDash", (int64)AbilityInput::PassiveDash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
				{ "PassiveDash.Comment", "// ID: 5, ult\n" },
				{ "PassiveDash.DisplayName", "Dash" },
				{ "PassiveDash.Name", "AbilityInput::PassiveDash" },
				{ "PassiveDash.ToolTip", "ID: 5, ult" },
				{ "SwitchWeapon.Comment", "//ID: 0, using weapon to attack\n" },
				{ "SwitchWeapon.DisplayName", "Switch Weapons" },
				{ "SwitchWeapon.Name", "AbilityInput::SwitchWeapon" },
				{ "SwitchWeapon.ToolTip", "ID: 0, using weapon to attack" },
				{ "UseActive1.Comment", "//ID: 1, switching weapons\n" },
				{ "UseActive1.DisplayName", "Use Active Skill 1" },
				{ "UseActive1.Name", "AbilityInput::UseActive1" },
				{ "UseActive1.ToolTip", "ID: 1, switching weapons" },
				{ "UseActive2.Comment", "// ID: 2, active 1\n" },
				{ "UseActive2.DisplayName", "Use Active Skill 2" },
				{ "UseActive2.Name", "AbilityInput::UseActive2" },
				{ "UseActive2.ToolTip", "ID: 2, active 1" },
				{ "UseActive3.Comment", "// ID: 3, active 2\n" },
				{ "UseActive3.DisplayName", "Use Active Skill 3" },
				{ "UseActive3.Name", "AbilityInput::UseActive3" },
				{ "UseActive3.ToolTip", "ID: 3, active 2" },
				{ "UseUlt.Comment", "// ID: 4, active 3\n" },
				{ "UseUlt.DisplayName", "Use Ultimate Skill" },
				{ "UseUlt.Name", "AbilityInput::UseUlt" },
				{ "UseUlt.ToolTip", "ID: 4, active 3" },
				{ "UseWeapon.DisplayName", "Use Weapon" },
				{ "UseWeapon.Name", "AbilityInput::UseWeapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HwanYoungVer2,
				nullptr,
				"AbilityInput",
				"AbilityInput",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "Comment", "/** Our ability system */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HwanYoungVer2Character.h" },
		{ "ToolTip", "Our ability system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungVer2Character, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystem_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHwanYoungVer2Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungVer2Character_Statics::NewProp_BaseLookUpRate,
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
	IMPLEMENT_CLASS(AHwanYoungVer2Character, 1558033334);
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
