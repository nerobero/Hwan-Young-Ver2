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
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_Physical)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysical);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Physical(Z_Param_Out_OldPhysical);
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
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
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
	DEFINE_FUNCTION(UPlayerCharacAttributeSet::execOnRep_HP)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HP(Z_Param_Out_OldHP);
		P_NATIVE_END;
	}
	void UPlayerCharacAttributeSet::StaticRegisterNativesUPlayerCharacAttributeSet()
	{
		UClass* Class = UPlayerCharacAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_GaugeP", &UPlayerCharacAttributeSet::execOnRep_GaugeP },
			{ "OnRep_HP", &UPlayerCharacAttributeSet::execOnRep_HP },
			{ "OnRep_MP", &UPlayerCharacAttributeSet::execOnRep_MP },
			{ "OnRep_Physical", &UPlayerCharacAttributeSet::execOnRep_Physical },
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
	struct Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics
	{
		struct PlayerCharacAttributeSet_eventOnRep_Physical_Parms
		{
			FGameplayAttributeData OldPhysical;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldPhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldPhysical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical = { "OldPhysical", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacAttributeSet_eventOnRep_Physical_Parms, OldPhysical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacAttributeSet, nullptr, "OnRep_Physical", nullptr, nullptr, sizeof(PlayerCharacAttributeSet_eventOnRep_Physical_Parms), Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaugeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaugeP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_physical;
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
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_MP, "OnRep_MP" }, // 1180331008
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Physical, "OnRep_Physical" }, // 2270380208
		{ &Z_Construct_UFunction_UPlayerCharacAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 1197669740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerCharacAttributeSet.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp = { "hp", "OnRep_HP", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, hp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp = { "mp", "OnRep_MP", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, mp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina = { "stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP = { "gaugeP", "OnRep_GaugeP", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, gaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical = { "physical", "OnRep_Physical", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, physical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical,
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
	IMPLEMENT_CLASS(UPlayerCharacAttributeSet, 178382828);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UPlayerCharacAttributeSet>()
	{
		return UPlayerCharacAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCharacAttributeSet(Z_Construct_UClass_UPlayerCharacAttributeSet, &UPlayerCharacAttributeSet::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UPlayerCharacAttributeSet"), false, nullptr, nullptr, nullptr);

	void UPlayerCharacAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_hp(TEXT("hp"));
		static const FName Name_mp(TEXT("mp"));
		static const FName Name_stamina(TEXT("stamina"));
		static const FName Name_gaugeP(TEXT("gaugeP"));
		static const FName Name_physical(TEXT("physical"));

		const bool bIsValid = true
			&& Name_hp == ClassReps[(int32)ENetFields_Private::hp].Property->GetFName()
			&& Name_mp == ClassReps[(int32)ENetFields_Private::mp].Property->GetFName()
			&& Name_stamina == ClassReps[(int32)ENetFields_Private::stamina].Property->GetFName()
			&& Name_gaugeP == ClassReps[(int32)ENetFields_Private::gaugeP].Property->GetFName()
			&& Name_physical == ClassReps[(int32)ENetFields_Private::physical].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerCharacAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
