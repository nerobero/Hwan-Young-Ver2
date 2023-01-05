// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/HwanYoungCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHwanYoungCharacterBase() {}
// Cross Module References
	HWANYOUNGVER2_API UFunction* Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungCharacterBase_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	HWANYOUNGVER2_API UEnum* Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics
	{
		struct _Script_HwanYoungVer2_eventCharacterDiedDelegate_Parms
		{
			AHwanYoungCharacterBase* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HwanYoungVer2_eventCharacterDiedDelegate_Parms, Character), Z_Construct_UClass_AHwanYoungCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HwanYoungVer2, nullptr, "CharacterDiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_HwanYoungVer2_eventCharacterDiedDelegate_Parms), Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetMaxGaugeP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxGaugeP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetGaugeP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGaugeP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetMaxMP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetMP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetMaxHP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetHP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execFinishDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execGetAbilityLevel)
	{
		P_GET_ENUM(EAbilityInputID,Z_Param_AbilityID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(EAbilityInputID(Z_Param_AbilityID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanYoungCharacterBase::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	void AHwanYoungCharacterBase::StaticRegisterNativesAHwanYoungCharacterBase()
	{
		UClass* Class = AHwanYoungCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishDying", &AHwanYoungCharacterBase::execFinishDying },
			{ "GetAbilityLevel", &AHwanYoungCharacterBase::execGetAbilityLevel },
			{ "GetCharacterLevel", &AHwanYoungCharacterBase::execGetCharacterLevel },
			{ "GetGaugeP", &AHwanYoungCharacterBase::execGetGaugeP },
			{ "GetHP", &AHwanYoungCharacterBase::execGetHP },
			{ "GetMaxGaugeP", &AHwanYoungCharacterBase::execGetMaxGaugeP },
			{ "GetMaxHP", &AHwanYoungCharacterBase::execGetMaxHP },
			{ "GetMaxMP", &AHwanYoungCharacterBase::execGetMaxMP },
			{ "GetMaxStamina", &AHwanYoungCharacterBase::execGetMaxStamina },
			{ "GetMP", &AHwanYoungCharacterBase::execGetMP },
			{ "GetStamina", &AHwanYoungCharacterBase::execGetStamina },
			{ "IsAlive", &AHwanYoungCharacterBase::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Character" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "FinishDying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics
	{
		struct HwanYoungCharacterBase_eventGetAbilityLevel_Parms
		{
			EAbilityInputID AbilityID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetAbilityLevel_Parms, AbilityID), Z_Construct_UEnum_HwanYoungVer2_EAbilityInputID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Character" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetAbilityLevel", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetAbilityLevel_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics
	{
		struct HwanYoungCharacterBase_eventGetCharacterLevel_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Attributes" },
		{ "Comment", "//attribute getter functions\n" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
		{ "ToolTip", "attribute getter functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetCharacterLevel", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetCharacterLevel_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics
	{
		struct HwanYoungCharacterBase_eventGetGaugeP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetGaugeP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Attributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetGaugeP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetGaugeP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics
	{
		struct HwanYoungCharacterBase_eventGetHP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Attributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetHP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetHP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics
	{
		struct HwanYoungCharacterBase_eventGetMaxGaugeP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetMaxGaugeP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Atributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetMaxGaugeP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetMaxGaugeP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics
	{
		struct HwanYoungCharacterBase_eventGetMaxHP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetMaxHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Atributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetMaxHP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetMaxHP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics
	{
		struct HwanYoungCharacterBase_eventGetMaxMP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetMaxMP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Atributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetMaxMP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetMaxMP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics
	{
		struct HwanYoungCharacterBase_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Atributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetMaxStamina_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics
	{
		struct HwanYoungCharacterBase_eventGetMP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetMP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Attributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetMP", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetMP_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics
	{
		struct HwanYoungCharacterBase_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanYoungCharacterBase_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Attributes" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "GetStamina", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventGetStamina_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics
	{
		struct HwanYoungCharacterBase_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HwanYoungCharacterBase_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HwanYoungCharacterBase_eventIsAlive_Parms), &Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Character" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanYoungCharacterBase, nullptr, "IsAlive", nullptr, nullptr, sizeof(HwanYoungCharacterBase_eventIsAlive_Parms), Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHwanYoungCharacterBase_NoRegister()
	{
		return AHwanYoungCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AHwanYoungCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDied_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHwanYoungCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHwanYoungCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_FinishDying, "FinishDying" }, // 2706766984
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetAbilityLevel, "GetAbilityLevel" }, // 4246864529
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetCharacterLevel, "GetCharacterLevel" }, // 2789843423
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetGaugeP, "GetGaugeP" }, // 1021777737
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetHP, "GetHP" }, // 1064159544
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxGaugeP, "GetMaxGaugeP" }, // 4165354368
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxHP, "GetMaxHP" }, // 3728984579
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxMP, "GetMaxMP" }, // 130868015
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetMaxStamina, "GetMaxStamina" }, // 2686541848
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetMP, "GetMP" }, // 1907312010
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_GetStamina, "GetStamina" }, // 3937272216
		{ &Z_Construct_UFunction_AHwanYoungCharacterBase_IsAlive, "IsAlive" }, // 3502016015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HwanYoungCharacterBase.h" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_OnCharacterDied_MetaData[] = {
		{ "Category", "Hwanyoung|Character" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_OnCharacterDied = { "OnCharacterDied", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, OnCharacterDied), Z_Construct_UDelegateFunction_HwanYoungVer2_CharacterDiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_OnCharacterDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_OnCharacterDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Hwanyoung|Character" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, CharacterName), METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Hwanyoung|Animation" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DeathMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Hwanyoung|Abilties" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, DefaultAttributes), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DefaultAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DefaultAttributes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Hwanyoung|Abilities" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerCharacGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "Hwanyoung|Abilities" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanYoungCharacterBase, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHwanYoungCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_OnCharacterDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DeathMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_DefaultAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_StartupEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanYoungCharacterBase_Statics::NewProp_CharacterAbilities,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AHwanYoungCharacterBase, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHwanYoungCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHwanYoungCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::ClassParams = {
		&AHwanYoungCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHwanYoungCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHwanYoungCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHwanYoungCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHwanYoungCharacterBase, 2783086214);
	template<> HWANYOUNGVER2_API UClass* StaticClass<AHwanYoungCharacterBase>()
	{
		return AHwanYoungCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHwanYoungCharacterBase(Z_Construct_UClass_AHwanYoungCharacterBase, &AHwanYoungCharacterBase::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("AHwanYoungCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHwanYoungCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
