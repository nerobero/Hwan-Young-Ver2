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
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungCharacterBase_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
// End Cross Module References
	void AHwanYoungCharacterBase::StaticRegisterNativesAHwanYoungCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_AHwanYoungCharacterBase_NoRegister()
	{
		return AHwanYoungCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AHwanYoungCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHwanYoungCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HwanYoungCharacterBase.h" },
		{ "ModuleRelativePath", "Public/HwanYoungCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHwanYoungCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHwanYoungCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHwanYoungCharacterBase_Statics::ClassParams = {
		&AHwanYoungCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
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
	IMPLEMENT_CLASS(AHwanYoungCharacterBase, 3869899095);
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
