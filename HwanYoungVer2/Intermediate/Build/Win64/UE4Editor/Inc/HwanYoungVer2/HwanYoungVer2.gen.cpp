// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/HwanYoungVer2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHwanYoungVer2() {}
// Cross Module References
	HWANYOUNGVER2_API UEnum* Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
// End Cross Module References
	static UEnum* EAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID, Z_Construct_UPackage__Script_HwanYoungVer2(), TEXT("EAbilityInputID"));
		}
		return Singleton;
	}
	template<> HWANYOUNGVER2_API UEnum* StaticEnum<EAbilityInputID>()
	{
		return EAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityInputID(EAbilityInputID_StaticEnum, TEXT("/Script/HwanYoungVer2"), TEXT("EAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID_Hash() { return 108384804U; }
	UEnum* Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HwanYoungVer2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityInputID"), 0, Get_Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityInputID::None", (int64)EAbilityInputID::None },
				{ "EAbilityInputID::Confirm", (int64)EAbilityInputID::Confirm },
				{ "EAbilityInputID::Cancel", (int64)EAbilityInputID::Cancel },
				{ "EAbilityInputID::UseWeapon", (int64)EAbilityInputID::UseWeapon },
				{ "EAbilityInputID::SwitchWeapon", (int64)EAbilityInputID::SwitchWeapon },
				{ "EAbilityInputID::UseActive1", (int64)EAbilityInputID::UseActive1 },
				{ "EAbilityInputID::UseActive2", (int64)EAbilityInputID::UseActive2 },
				{ "EAbilityInputID::UseActive3", (int64)EAbilityInputID::UseActive3 },
				{ "EAbilityInputID::UseUlt", (int64)EAbilityInputID::UseUlt },
				{ "EAbilityInputID::PassiveDash", (int64)EAbilityInputID::PassiveDash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "EAbilityInputID::Cancel" },
				{ "Confirm.Comment", "//no input given\n" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "EAbilityInputID::Confirm" },
				{ "Confirm.ToolTip", "no input given" },
				{ "ModuleRelativePath", "Public/HwanYoungVer2.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EAbilityInputID::None" },
				{ "PassiveDash.Comment", "//ult\n" },
				{ "PassiveDash.DisplayName", "Dash" },
				{ "PassiveDash.Name", "EAbilityInputID::PassiveDash" },
				{ "PassiveDash.ToolTip", "ult" },
				{ "SwitchWeapon.Comment", "//using melee weapon to attack\n" },
				{ "SwitchWeapon.DisplayName", "Switch Weapons" },
				{ "SwitchWeapon.Name", "EAbilityInputID::SwitchWeapon" },
				{ "SwitchWeapon.ToolTip", "using melee weapon to attack" },
				{ "UseActive1.Comment", "//switching weapons\n" },
				{ "UseActive1.DisplayName", "Use Active Skill 1" },
				{ "UseActive1.Name", "EAbilityInputID::UseActive1" },
				{ "UseActive1.ToolTip", "switching weapons" },
				{ "UseActive2.Comment", "//active 1\n" },
				{ "UseActive2.DisplayName", "Use Active Skill 2" },
				{ "UseActive2.Name", "EAbilityInputID::UseActive2" },
				{ "UseActive2.ToolTip", "active 1" },
				{ "UseActive3.Comment", "//active 2\n" },
				{ "UseActive3.DisplayName", "Use Active Skill 3" },
				{ "UseActive3.Name", "EAbilityInputID::UseActive3" },
				{ "UseActive3.ToolTip", "active 2" },
				{ "UseUlt.Comment", "//active 3\n" },
				{ "UseUlt.DisplayName", "Use Ultimate Skill" },
				{ "UseUlt.Name", "EAbilityInputID::UseUlt" },
				{ "UseUlt.ToolTip", "active 3" },
				{ "UseWeapon.DisplayName", "Use Weapon" },
				{ "UseWeapon.Name", "EAbilityInputID::UseWeapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HwanYoungVer2,
				nullptr,
				"EAbilityInputID",
				"EAbilityInputID",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
