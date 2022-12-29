// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef HWANYOUNGVER2_MeleeAttributeSet_generated_h
#error "MeleeAttributeSet.generated.h already included, missing '#pragma once' in MeleeAttributeSet.h"
#endif
#define HWANYOUNGVER2_MeleeAttributeSet_generated_h

#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_SPARSE_DATA
#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CritATKDMGRate); \
	DECLARE_FUNCTION(execOnRep_CritRate); \
	DECLARE_FUNCTION(execOnRep_Physical);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CritATKDMGRate); \
	DECLARE_FUNCTION(execOnRep_CritRate); \
	DECLARE_FUNCTION(execOnRep_Physical);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeAttributeSet(); \
	friend struct Z_Construct_UClass_UMeleeAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMeleeAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(UMeleeAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		physical=NETFIELD_REP_START, \
		critRate, \
		critATKDMGrate, \
		NETFIELD_REP_END=critATKDMGrate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMeleeAttributeSet) \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMeleeAttributeSet(); \
	friend struct Z_Construct_UClass_UMeleeAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMeleeAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(UMeleeAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		physical=NETFIELD_REP_START, \
		critRate, \
		critATKDMGrate, \
		NETFIELD_REP_END=critATKDMGrate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMeleeAttributeSet) \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeAttributeSet(UMeleeAttributeSet&&); \
	NO_API UMeleeAttributeSet(const UMeleeAttributeSet&); \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeAttributeSet(UMeleeAttributeSet&&); \
	NO_API UMeleeAttributeSet(const UMeleeAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeleeAttributeSet)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET
#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_13_PROLOG
#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_RPC_WRAPPERS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_INCLASS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HWANYOUNGVER2_API UClass* StaticClass<class UMeleeAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HwanYoungVer2_Source_HwanYoungVer2_Public_MeleeAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
