// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HWANYOUNGVER2_HwanyoungPlayerState_generated_h
#error "HwanyoungPlayerState.generated.h already included, missing '#pragma once' in HwanyoungPlayerState.h"
#endif
#define HWANYOUNGVER2_HwanyoungPlayerState_generated_h

#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_SPARSE_DATA
#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMaxGaugeP); \
	DECLARE_FUNCTION(execGetGaugeP); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxMP); \
	DECLARE_FUNCTION(execGetMP); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execShowAbilityConfirmCancelText); \
	DECLARE_FUNCTION(execIsAlive);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMaxGaugeP); \
	DECLARE_FUNCTION(execGetGaugeP); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxMP); \
	DECLARE_FUNCTION(execGetMP); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execShowAbilityConfirmCancelText); \
	DECLARE_FUNCTION(execIsAlive);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHwanyoungPlayerState(); \
	friend struct Z_Construct_UClass_AHwanyoungPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHwanyoungPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(AHwanyoungPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHwanyoungPlayerState*>(this); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHwanyoungPlayerState(); \
	friend struct Z_Construct_UClass_AHwanyoungPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHwanyoungPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(AHwanyoungPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AHwanyoungPlayerState*>(this); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHwanyoungPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHwanyoungPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHwanyoungPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHwanyoungPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHwanyoungPlayerState(AHwanyoungPlayerState&&); \
	NO_API AHwanyoungPlayerState(const AHwanyoungPlayerState&); \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHwanyoungPlayerState(AHwanyoungPlayerState&&); \
	NO_API AHwanyoungPlayerState(const AHwanyoungPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHwanyoungPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHwanyoungPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHwanyoungPlayerState)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilityComponent() { return STRUCT_OFFSET(AHwanyoungPlayerState, AbilityComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(AHwanyoungPlayerState, AttributeSetBase); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_15_PROLOG
#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_RPC_WRAPPERS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_INCLASS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HWANYOUNGVER2_API UClass* StaticClass<class AHwanyoungPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HwanYoungVer2_Source_HwanYoungVer2_Public_HwanyoungPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
