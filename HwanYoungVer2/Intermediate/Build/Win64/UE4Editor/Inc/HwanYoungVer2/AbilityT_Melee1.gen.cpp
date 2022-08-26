// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/AbilityT_Melee1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityT_Melee1() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UAbilityT_Melee1_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_UAbilityT_Melee1();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityT_Melee1::execCreateMyTask)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityT_Melee1**)Z_Param__Result=UAbilityT_Melee1::CreateMyTask(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UAbilityT_Melee1::StaticRegisterNativesUAbilityT_Melee1()
	{
		UClass* Class = UAbilityT_Melee1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMyTask", &UAbilityT_Melee1::execCreateMyTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics
	{
		struct AbilityT_Melee1_eventCreateMyTask_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAbilityT_Melee1* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityT_Melee1_eventCreateMyTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityT_Melee1_eventCreateMyTask_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityT_Melee1_eventCreateMyTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityT_Melee1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09UPROPERTY(BlueprintAssignable)\n\x09""FMyTwoParamDelegate OnCalled;\n\x09*/" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "ExecuteMyTask" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityT_Melee1.h" },
		{ "ToolTip", "UPROPERTY(BlueprintAssignable)\nFMyTwoParamDelegate OnCalled;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityT_Melee1, nullptr, "CreateMyTask", nullptr, nullptr, sizeof(AbilityT_Melee1_eventCreateMyTask_Parms), Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityT_Melee1_NoRegister()
	{
		return UAbilityT_Melee1::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityT_Melee1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityT_Melee1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityT_Melee1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityT_Melee1_CreateMyTask, "CreateMyTask" }, // 3754386571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityT_Melee1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Ability for Melee attacks\n */" },
		{ "IncludePath", "AbilityT_Melee1.h" },
		{ "ModuleRelativePath", "Public/AbilityT_Melee1.h" },
		{ "ToolTip", "Base Ability for Melee attacks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityT_Melee1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityT_Melee1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityT_Melee1_Statics::ClassParams = {
		&UAbilityT_Melee1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityT_Melee1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityT_Melee1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityT_Melee1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityT_Melee1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityT_Melee1, 2827416338);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UAbilityT_Melee1>()
	{
		return UAbilityT_Melee1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityT_Melee1(Z_Construct_UClass_UAbilityT_Melee1, &UAbilityT_Melee1::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UAbilityT_Melee1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityT_Melee1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
