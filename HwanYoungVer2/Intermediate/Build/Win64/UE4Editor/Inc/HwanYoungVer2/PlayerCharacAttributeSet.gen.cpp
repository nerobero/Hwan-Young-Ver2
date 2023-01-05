// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/PlayerCharacAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacAttributeSet() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UPlayerCharacAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_MaxGaugeP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxGaugeP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxGaugeP(Z_Param_Out_OldMaxGaugeP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_GaugeP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldGaugeP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GaugeP(Z_Param_Out_OldGaugeP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_MaxStamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_MaxMP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMP(Z_Param_Out_OldMaxMP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_MP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MP(Z_Param_Out_OldMP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_MaxHP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHP(Z_Param_Out_OldMaxHP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_HP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HP(Z_Param_Out_OldHP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_Level)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Level(Z_Param_Out_OldLevel);
		P_NATIVE_END;
	}
	void UPlayerCharacAttributeSet::StaticRegisterNativesUPlayerCharacAttributeSet()
	{
		UClass* Class = UPlayerCharacAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_GaugeP", &UPlayerCharacAttributeSet::execOnRep_GaugeP },
			{ "OnRep_HP", &UPlayerCharacAttributeSet::execOnRep_HP },
			{ "OnRep_Level", &UPlayerCharacAttributeSet::execOnRep_Level },
			{ "OnRep_MaxGaugeP", &UPlayerCharacAttributeSet::execOnRep_MaxGaugeP },
			{ "OnRep_MaxHP", &UPlayerCharacAttributeSet::execOnRep_MaxHP },
			{ "OnRep_MaxMP", &UPlayerCharacAttributeSet::execOnRep_MaxMP },
			{ "OnRep_MaxStamina", &UPlayerCharacAttributeSet::execOnRep_MaxStamina },
			{ "OnRep_MP", &UPlayerCharacAttributeSet::execOnRep_MP },
			{ "OnRep_Stamina", &UPlayerCharacAttributeSet::execOnRep_Stamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_GaugeP_Parms
		{
			FGameplayAttributeData OldGaugeP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldGaugeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldGaugeP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::NewProp_OldGaugeP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::NewProp_OldGaugeP = { "OldGaugeP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_GaugeP_Parms, OldGaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::NewProp_OldGaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::NewProp_OldGaugeP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::NewProp_OldGaugeP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_GaugeP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_GaugeP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_HP_Parms
		{
			FGameplayAttributeData OldHP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::NewProp_OldHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::NewProp_OldHP = { "OldHP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_HP_Parms, OldHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::NewProp_OldHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::NewProp_OldHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::NewProp_OldHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_HP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_HP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_Level_Parms
		{
			FGameplayAttributeData OldLevel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::NewProp_OldLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_Level_Parms, OldLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::NewProp_OldLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::NewProp_OldLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::NewProp_OldLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_Level", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_Level_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_MaxGaugeP_Parms
		{
			FGameplayAttributeData OldMaxGaugeP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxGaugeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxGaugeP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::NewProp_OldMaxGaugeP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::NewProp_OldMaxGaugeP = { "OldMaxGaugeP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_MaxGaugeP_Parms, OldMaxGaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::NewProp_OldMaxGaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::NewProp_OldMaxGaugeP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::NewProp_OldMaxGaugeP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_MaxGaugeP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_MaxGaugeP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_MaxHP_Parms
		{
			FGameplayAttributeData OldMaxHP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP = { "OldMaxHP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_MaxHP_Parms, OldMaxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::NewProp_OldMaxHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_MaxHP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_MaxHP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_MaxMP_Parms
		{
			FGameplayAttributeData OldMaxMP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxMP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::NewProp_OldMaxMP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::NewProp_OldMaxMP = { "OldMaxMP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_MaxMP_Parms, OldMaxMP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::NewProp_OldMaxMP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::NewProp_OldMaxMP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::NewProp_OldMaxMP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_MaxMP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_MaxMP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_MaxStamina_Parms
		{
			FGameplayAttributeData OldMaxStamina;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_MaxStamina_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_MP_Parms
		{
			FGameplayAttributeData OldMP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::NewProp_OldMP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::NewProp_OldMP = { "OldMP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_MP_Parms, OldMP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::NewProp_OldMP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::NewProp_OldMP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::NewProp_OldMP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_MP", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_MP_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_Stamina_Parms
		{
			FGameplayAttributeData OldStamina;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldStamina;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_Stamina_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister()
	{
		return UPlayerCharacAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxMP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxMP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaugeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaugeP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxGaugeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxGaugeP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_GaugeP, "OnRep_GaugeP" }, // 1082495180
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_HP, "OnRep_HP" }, // 1125076897
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Level, "OnRep_Level" }, // 3645479807
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxGaugeP, "OnRep_MaxGaugeP" }, // 3813862231
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxHP, "OnRep_MaxHP" }, // 1034095011
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxMP, "OnRep_MaxMP" }, // 1050034716
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 574588211
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP, "OnRep_MP" }, // 1180331008
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 1197669740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerCharacAttributeSet.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_level_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_level = { "level", "OnRep_Level", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, level), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp = { "hp", "OnRep_HP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, hp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxHP_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxHP = { "maxHP", "OnRep_MaxHP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, maxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp = { "mp", "OnRep_MP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, mp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxMP_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxMP = { "maxMP", "OnRep_MaxMP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, maxMP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxMP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxMP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina = { "stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxStamina = { "maxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, maxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData[] = {
		{ "Category", "Ultimate Gauge Points" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP = { "gaugeP", "OnRep_GaugeP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, gaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxGaugeP_MetaData[] = {
		{ "Category", "Ultimate Gauge Points" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxGaugeP = { "maxGaugeP", "OnRep_MaxGaugeP", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, maxGaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxGaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxGaugeP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Damage - Meta attribute" },
		{ "Comment", "//Damage is treated as a meta-attribute which is intended to interact with HP;\n//This attribute value can be modified with buffs/debuffs in an GameplayEffectExecutionCalculation\n//and can be further manipulated in the AttributeSet.\n//The damage meta-attribute has no persistence between GameplayEffects and is overriden by every one\n//not typically replicated.\n" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
		{ "ToolTip", "Damage is treated as a meta-attribute which is intended to interact with HP;\nThis attribute value can be modified with buffs/debuffs in an GameplayEffectExecutionCalculation\nand can be further manipulated in the AttributeSet.\nThe damage meta-attribute has no persistence between GameplayEffects and is overriden by every one\nnot typically replicated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_maxGaugeP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::ClassParams = {
		&UPlayerCharacAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCharacAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCharacAttributeSet, 976224720);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UPlayerCharacAttributeSet>()
	{
		return UPlayerCharacAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCharacAttributeSet(Z_Construct_UClass_UPlayerCharacAttributeSet, &UPlayerCharacAttributeSet::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UPlayerCharacAttributeSet"), false, nullptr, nullptr, nullptr);

	void UPlayerCharacAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_level(TEXT("level"));
		static const FName Name_hp(TEXT("hp"));
		static const FName Name_maxHP(TEXT("maxHP"));
		static const FName Name_mp(TEXT("mp"));
		static const FName Name_maxMP(TEXT("maxMP"));
		static const FName Name_stamina(TEXT("stamina"));
		static const FName Name_maxStamina(TEXT("maxStamina"));
		static const FName Name_gaugeP(TEXT("gaugeP"));
		static const FName Name_maxGaugeP(TEXT("maxGaugeP"));

		const bool bIsValid = true
			&& Name_level == ClassReps[(int32)ENetFields_Private::level].Property->GetFName()
			&& Name_hp == ClassReps[(int32)ENetFields_Private::hp].Property->GetFName()
			&& Name_maxHP == ClassReps[(int32)ENetFields_Private::maxHP].Property->GetFName()
			&& Name_mp == ClassReps[(int32)ENetFields_Private::mp].Property->GetFName()
			&& Name_maxMP == ClassReps[(int32)ENetFields_Private::maxMP].Property->GetFName()
			&& Name_stamina == ClassReps[(int32)ENetFields_Private::stamina].Property->GetFName()
			&& Name_maxStamina == ClassReps[(int32)ENetFields_Private::maxStamina].Property->GetFName()
			&& Name_gaugeP == ClassReps[(int32)ENetFields_Private::gaugeP].Property->GetFName()
			&& Name_maxGaugeP == ClassReps[(int32)ENetFields_Private::maxGaugeP].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerCharacAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
