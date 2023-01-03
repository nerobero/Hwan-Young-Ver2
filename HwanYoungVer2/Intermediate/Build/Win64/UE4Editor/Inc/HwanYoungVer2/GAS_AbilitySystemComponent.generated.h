// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGAS_AbilitySystemComponent;
#ifdef HWANYOUNGVER2_GAS_AbilitySystemComponent_generated_h
#error "GAS_AbilitySystemComponent.generated.h already included, missing '#pragma once' in GAS_AbilitySystemComponent.h"
#endif
#define HWANYOUNGVER2_GAS_AbilitySystemComponent_generated_h

#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_10_DELEGATE \
struct _Script_HwanYoungVer2_eventReceivedDamageDelegate_Parms \
{ \
	UGAS_AbilitySystemComponent* SourceASC; \
	float UnmitigatedDamage; \
	float MitigatedDamage; \
}; \
static inline void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, UGAS_AbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage) \
{ \
	_Script_HwanYoungVer2_eventReceivedDamageDelegate_Parms Parms; \
	Parms.SourceASC=SourceASC; \
	Parms.UnmitigatedDamage=UnmitigatedDamage; \
	Parms.MitigatedDamage=MitigatedDamage; \
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_SPARSE_DATA
#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_RPC_WRAPPERS
#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_AbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGAS_AbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(UGAS_AbilitySystemComponent)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGAS_AbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGAS_AbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGAS_AbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(UGAS_AbilitySystemComponent)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAS_AbilitySystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAS_AbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_AbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_AbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAS_AbilitySystemComponent(UGAS_AbilitySystemComponent&&); \
	NO_API UGAS_AbilitySystemComponent(const UGAS_AbilitySystemComponent&); \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAS_AbilitySystemComponent(UGAS_AbilitySystemComponent&&); \
	NO_API UGAS_AbilitySystemComponent(const UGAS_AbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_AbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_AbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_AbilitySystemComponent)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_16_PROLOG
#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_RPC_WRAPPERS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_INCLASS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HWANYOUNGVER2_API UClass* StaticClass<class UGAS_AbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HwanYoungVer2_Source_HwanYoungVer2_Public_GAS_AbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
