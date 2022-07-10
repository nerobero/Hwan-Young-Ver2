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
	void UPlayerCharacAttributeSet::StaticRegisterNativesUPlayerCharacAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UPlayerCharacAttributeSet_NoRegister()
	{
		return UPlayerCharacAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		{ "Comment", "//constructor\n//~PlayerCharacAttributeSet();\n" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
		{ "ToolTip", "constructor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, hp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp = { "mp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, mp), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP = { "gaugeP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, gaugeP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_gaugeP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PlayerCharacAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical = { "physical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacAttributeSet, physical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_physical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::NewProp_mp,
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
		nullptr,
		Z_Construct_UClass_UPlayerCharacAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UPlayerCharacAttributeSet, 1850952848);
	template<> HWANYOUNGVER2_API UClass* StaticClass<UPlayerCharacAttributeSet>()
	{
		return UPlayerCharacAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCharacAttributeSet(Z_Construct_UClass_UPlayerCharacAttributeSet, &UPlayerCharacAttributeSet::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("UPlayerCharacAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
