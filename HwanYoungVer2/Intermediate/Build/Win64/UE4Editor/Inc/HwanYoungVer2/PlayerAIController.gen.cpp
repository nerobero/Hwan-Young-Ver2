// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HwanYoungVer2/Public/PlayerAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAIController() {}
// Cross Module References
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_APlayerAIController_NoRegister();
	HWANYOUNGVER2_API UClass* Z_Construct_UClass_APlayerAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_HwanYoungVer2();
// End Cross Module References
	void APlayerAIController::StaticRegisterNativesAPlayerAIController()
	{
	}
	UClass* Z_Construct_UClass_APlayerAIController_NoRegister()
	{
		return APlayerAIController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_HwanYoungVer2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerAIController.h" },
		{ "ModuleRelativePath", "Public/PlayerAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerAIController_Statics::ClassParams = {
		&APlayerAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerAIController, 3654449091);
	template<> HWANYOUNGVER2_API UClass* StaticClass<APlayerAIController>()
	{
		return APlayerAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerAIController(Z_Construct_UClass_APlayerAIController, &APlayerAIController::StaticClass, TEXT("/Script/HwanYoungVer2"), TEXT("APlayerAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
