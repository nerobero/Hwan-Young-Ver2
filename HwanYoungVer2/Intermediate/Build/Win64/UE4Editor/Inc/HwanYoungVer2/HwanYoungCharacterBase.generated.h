// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHwanYoungCharacterBase;
enum class EAbilityInputID : uint8;
#ifdef HWANYOUNGVER2_HwanYoungCharacterBase_generated_h
#error "HwanYoungCharacterBase.generated.h already included, missing '#pragma once' in HwanYoungCharacterBase.h"
#endif
#define HWANYOUNGVER2_HwanYoungCharacterBase_generated_h

#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_13_DELEGATE \
struct _Script_HwanYoungVer2_eventCharacterDiedDelegate_Parms \
{ \
	AHwanYoungCharacterBase* Character; \
}; \
static inline void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, AHwanYoungCharacterBase* Character) \
{ \
	_Script_HwanYoungVer2_eventCharacterDiedDelegate_Parms Parms; \
	Parms.Character=Character; \
	CharacterDiedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_SPARSE_DATA
#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxGaugeP); \
	DECLARE_FUNCTION(execGetGaugeP); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxMP); \
	DECLARE_FUNCTION(execGetMP); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execIsAlive);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxGaugeP); \
	DECLARE_FUNCTION(execGetGaugeP); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxMP); \
	DECLARE_FUNCTION(execGetMP); \
	DECLARE_FUNCTION(execGetMaxHP); \
	DECLARE_FUNCTION(execGetHP); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execIsAlive);


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHwanYoungCharacterBase(); \
	friend struct Z_Construct_UClass_AHwanYoungCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AHwanYoungCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(AHwanYoungCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHwanYoungCharacterBase*>(this); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAHwanYoungCharacterBase(); \
	friend struct Z_Construct_UClass_AHwanYoungCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AHwanYoungCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HwanYoungVer2"), NO_API) \
	DECLARE_SERIALIZER(AHwanYoungCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHwanYoungCharacterBase*>(this); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHwanYoungCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHwanYoungCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHwanYoungCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHwanYoungCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHwanYoungCharacterBase(AHwanYoungCharacterBase&&); \
	NO_API AHwanYoungCharacterBase(const AHwanYoungCharacterBase&); \
public:


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHwanYoungCharacterBase(AHwanYoungCharacterBase&&); \
	NO_API AHwanYoungCharacterBase(const AHwanYoungCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHwanYoungCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHwanYoungCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHwanYoungCharacterBase)


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterName() { return STRUCT_OFFSET(AHwanYoungCharacterBase, CharacterName); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(AHwanYoungCharacterBase, DeathMontage); } \
	FORCEINLINE static uint32 __PPO__DefaultAttributes() { return STRUCT_OFFSET(AHwanYoungCharacterBase, DefaultAttributes); } \
	FORCEINLINE static uint32 __PPO__StartupEffects() { return STRUCT_OFFSET(AHwanYoungCharacterBase, StartupEffects); } \
	FORCEINLINE static uint32 __PPO__CharacterAbilities() { return STRUCT_OFFSET(AHwanYoungCharacterBase, CharacterAbilities); }


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_16_PROLOG
#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_RPC_WRAPPERS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_INCLASS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_SPARSE_DATA \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
	HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HWANYOUNGVER2_API UClass* StaticClass<class AHwanYoungCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HwanYoungVer2_Source_HwanYoungVer2_Public_HwanYoungCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
