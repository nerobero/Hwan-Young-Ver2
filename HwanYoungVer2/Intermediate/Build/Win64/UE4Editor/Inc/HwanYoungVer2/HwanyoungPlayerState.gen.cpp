// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/HwanyoungPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHwanyoungPlayerState() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanyoungPlayerState_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanyoungPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetMaxGaugeP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxGaugeP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetGaugeP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGaugeP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetMaxMP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetMP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetMaxHP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execGetHP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execShowAbilityConfirmCancelText)
	{
		P_GET_UBOOL(Z_Param_showText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAbilityConfirmCancelText(Z_Param_showText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHwanyoungPlayerState::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	void AHwanyoungPlayerState::StaticRegisterNativesAHwanyoungPlayerState()
	{
		UClass* Class = AHwanyoungPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterLevel", &AHwanyoungPlayerState::execGetCharacterLevel },
			{ "GetGaugeP", &AHwanyoungPlayerState::execGetGaugeP },
			{ "GetHP", &AHwanyoungPlayerState::execGetHP },
			{ "GetMaxGaugeP", &AHwanyoungPlayerState::execGetMaxGaugeP },
			{ "GetMaxHP", &AHwanyoungPlayerState::execGetMaxHP },
			{ "GetMaxMP", &AHwanyoungPlayerState::execGetMaxMP },
			{ "GetMaxStamina", &AHwanyoungPlayerState::execGetMaxStamina },
			{ "GetMP", &AHwanyoungPlayerState::execGetMP },
			{ "GetStamina", &AHwanyoungPlayerState::execGetStamina },
			{ "IsAlive", &AHwanyoungPlayerState::execIsAlive },
			{ "ShowAbilityConfirmCancelText", &AHwanyoungPlayerState::execShowAbilityConfirmCancelText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics
	{
		struct HwanyoungPlayerState_eventGetCharacterLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetCharacterLevel", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetCharacterLevel_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics
	{
		struct HwanyoungPlayerState_eventGetGaugeP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetGaugeP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetGaugeP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetGaugeP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics
	{
		struct HwanyoungPlayerState_eventGetHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetHP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetHP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics
	{
		struct HwanyoungPlayerState_eventGetMaxGaugeP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetMaxGaugeP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetMaxGaugeP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetMaxGaugeP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics
	{
		struct HwanyoungPlayerState_eventGetMaxHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetMaxHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetMaxHP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetMaxHP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics
	{
		struct HwanyoungPlayerState_eventGetMaxMP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetMaxMP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetMaxMP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetMaxMP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics
	{
		struct HwanyoungPlayerState_eventGetMaxStamina_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetMaxStamina_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics
	{
		struct HwanyoungPlayerState_eventGetMP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetMP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetMP", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetMP_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics
	{
		struct HwanyoungPlayerState_eventGetStamina_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HwanyoungPlayerState_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|Attributes" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "GetStamina", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventGetStamina_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics
	{
		struct HwanyoungPlayerState_eventIsAlive_Parms
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
	void Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HwanyoungPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HwanyoungPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "IsAlive", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventIsAlive_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics
	{
		struct HwanyoungPlayerState_eventShowAbilityConfirmCancelText_Parms
		{
			bool showText;
		};
		static void NewProp_showText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_showText_SetBit(void* Obj)
	{
		((HwanyoungPlayerState_eventShowAbilityConfirmCancelText_Parms*)Obj)->showText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_showText = { "showText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HwanyoungPlayerState_eventShowAbilityConfirmCancelText_Parms), &Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_showText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::NewProp_showText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hwanyoung|Player State|UI" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHwanyoungPlayerState, nullptr, "ShowAbilityConfirmCancelText", nullptr, nullptr, sizeof(HwanyoungPlayerState_eventShowAbilityConfirmCancelText_Parms), Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHwanyoungPlayerState_NoRegister()
	{
		return AHwanyoungPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AHwanyoungPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHwanyoungPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHwanyoungPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetCharacterLevel, "GetCharacterLevel" }, // 3202570259
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetGaugeP, "GetGaugeP" }, // 986133105
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetHP, "GetHP" }, // 1993541369
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxGaugeP, "GetMaxGaugeP" }, // 4168920677
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxHP, "GetMaxHP" }, // 1257211239
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxMP, "GetMaxMP" }, // 3001972030
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetMaxStamina, "GetMaxStamina" }, // 1534088617
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetMP, "GetMP" }, // 1782639473
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_GetStamina, "GetStamina" }, // 2533242834
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_IsAlive, "IsAlive" }, // 2959172083
		{ &Z_Construct_UFunction_AHwanyoungPlayerState_ShowAbilityConfirmCancelText, "ShowAbilityConfirmCancelText" }, // 373834603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanyoungPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HwanyoungPlayerState.h" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanyoungPlayerState, AbilityComponent), Z_Construct_UClass_UGAS_AbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AbilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HwanyoungPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHwanyoungPlayerState, AttributeSetBase), Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AttributeSetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AttributeSetBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHwanyoungPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AbilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHwanyoungPlayerState_Statics::NewProp_AttributeSetBase,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHwanyoungPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AHwanyoungPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHwanyoungPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHwanyoungPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHwanyoungPlayerState_Statics::ClassParams = {
		&AHwanyoungPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHwanyoungPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHwanyoungPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHwanyoungPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanyoungPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHwanyoungPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHwanyoungPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHwanyoungPlayerState, 2722984141);
	template<> HWANYOUNGVER2_API UClass* StaticClass<AHwanyoungPlayerState>()
	{
		return AHwanyoungPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHwanyoungPlayerState(Z_Construct_UClass_AHwanyoungPlayerState, &AHwanyoungPlayerState::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("AHwanyoungPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHwanyoungPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
