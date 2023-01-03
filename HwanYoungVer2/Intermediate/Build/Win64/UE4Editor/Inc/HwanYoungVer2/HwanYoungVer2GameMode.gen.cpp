// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/HwanYoungVer2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHwanYoungVer2GameMode() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2GameMode_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_AHwanYoungVer2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
// End Cross Module References
	void AHwanYoungVer2GameMode::StaticRegisterNativesAHwanYoungVer2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AHwanYoungVer2GameMode_NoRegister()
	{
		return AHwanYoungVer2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHwanYoungVer2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HwanYoungVer2GameMode.h" },
		{ "ModuleRelativePath", "Public/HwanYoungVer2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHwanYoungVer2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::ClassParams = {
		&AHwanYoungVer2GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHwanYoungVer2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHwanYoungVer2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHwanYoungVer2GameMode, 1457013212);
	template<> HWANYOUNGVER2_API UClass* StaticClass<AHwanYoungVer2GameMode>()
	{
		return AHwanYoungVer2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHwanYoungVer2GameMode(Z_Construct_UClass_AHwanYoungVer2GameMode, &AHwanYoungVer2GameMode::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("AHwanYoungVer2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHwanYoungVer2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
