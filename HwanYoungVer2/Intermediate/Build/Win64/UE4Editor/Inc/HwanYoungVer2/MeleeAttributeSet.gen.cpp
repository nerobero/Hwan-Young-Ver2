// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/MeleeAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAttributeSet() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UMeleeAttributeSet_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UMeleeAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UMeleeAttributeSet::execOnRep_CritATKDMGRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritATKDMGRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CritATKDMGRate(Z_Param_Out_OldCritATKDMGRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeleeAttributeSet::execOnRep_CritRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CritRate(Z_Param_Out_OldCritRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeleeAttributeSet::execOnRep_Physical)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysical);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Physical(Z_Param_Out_OldPhysical);
		P_NATIVE_END;
	}
	void UMeleeAttributeSet::StaticRegisterNativesUMeleeAttributeSet()
	{
		UClass* Class = UMeleeAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CritATKDMGRate", &UMeleeAttributeSet::execOnRep_CritATKDMGRate },
			{ "OnRep_CritRate", &UMeleeAttributeSet::execOnRep_CritRate },
			{ "OnRep_Physical", &UMeleeAttributeSet::execOnRep_Physical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics
	{
		struct MeleeAttributeSet_eventOnRep_CritATKDMGRate_Parms
		{
			FGameplayAttributeData OldCritATKDMGRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCritATKDMGRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCritATKDMGRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::NewProp_OldCritATKDMGRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::NewProp_OldCritATKDMGRate = { "OldCritATKDMGRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeAttributeSet_eventOnRep_CritATKDMGRate_Parms, OldCritATKDMGRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::NewProp_OldCritATKDMGRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::NewProp_OldCritATKDMGRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::NewProp_OldCritATKDMGRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeAttributeSet, nullptr, "OnRep_CritATKDMGRate", nullptr, nullptr, sizeof(MeleeAttributeSet_eventOnRep_CritATKDMGRate_Parms), Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics
	{
		struct MeleeAttributeSet_eventOnRep_CritRate_Parms
		{
			FGameplayAttributeData OldCritRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCritRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCritRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate = { "OldCritRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeAttributeSet_eventOnRep_CritRate_Parms, OldCritRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::NewProp_OldCritRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeAttributeSet, nullptr, "OnRep_CritRate", nullptr, nullptr, sizeof(MeleeAttributeSet_eventOnRep_CritRate_Parms), Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics
	{
		struct MeleeAttributeSet_eventOnRep_Physical_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical = { "OldPhysical", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeAttributeSet_eventOnRep_Physical_Parms, OldPhysical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::NewProp_OldPhysical,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeAttributeSet, nullptr, "OnRep_Physical", nullptr, nullptr, sizeof(MeleeAttributeSet_eventOnRep_Physical_Parms), Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeleeAttributeSet_NoRegister()
	{
		return UMeleeAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_physical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_critRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_critRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_critATKDMGrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_critATKDMGrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeleeAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritATKDMGRate, "OnRep_CritATKDMGRate" }, // 3909470656
		{ &Z_Construct_UFunction_UMeleeAttributeSet_OnRep_CritRate, "OnRep_CritRate" }, // 3164399186
		{ &Z_Construct_UFunction_UMeleeAttributeSet_OnRep_Physical, "OnRep_Physical" }, // 1382827597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeleeAttributeSet.h" },
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_physical_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_physical = { "physical", "OnRep_Physical", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeleeAttributeSet, physical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_physical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critRate_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critRate = { "critRate", "OnRep_CritRate", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeleeAttributeSet, critRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critATKDMGrate_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MeleeAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critATKDMGrate = { "critATKDMGrate", "OnRep_CritATKDMGRate", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeleeAttributeSet, critATKDMGrate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critATKDMGrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critATKDMGrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_physical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeAttributeSet_Statics::NewProp_critATKDMGrate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeAttributeSet_Statics::ClassParams = {
		&UMeleeAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeleeAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeleeAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeAttributeSet, 1267870803);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UMeleeAttributeSet>()
	{
		return UMeleeAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeAttributeSet(Z_Construct_UClass_UMeleeAttributeSet, &UMeleeAttributeSet::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UMeleeAttributeSet"), false, nullptr, nullptr, nullptr);

	void UMeleeAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_physical(TEXT("physical"));
		static const FName Name_critRate(TEXT("critRate"));
		static const FName Name_critATKDMGrate(TEXT("critATKDMGrate"));

		const bool bIsValid = true
			&& Name_physical == ClassReps[(int32)ENetFields_Private::physical].Property->GetFName()
			&& Name_critRate == ClassReps[(int32)ENetFields_Private::critRate].Property->GetFName()
			&& Name_critATKDMGrate == ClassReps[(int32)ENetFields_Private::critATKDMGrate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMeleeAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
