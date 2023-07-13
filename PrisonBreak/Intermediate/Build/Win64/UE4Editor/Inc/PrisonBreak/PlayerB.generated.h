// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRISONBREAK_PlayerB_generated_h
#error "PlayerB.generated.h already included, missing '#pragma once' in PlayerB.h"
#endif
#define PRISONBREAK_PlayerB_generated_h

#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_SPARSE_DATA
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execB_DeInteract); \
	DECLARE_FUNCTION(execB_OnInteract); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveForward);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execB_DeInteract); \
	DECLARE_FUNCTION(execB_OnInteract); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveForward);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerB(); \
	friend struct Z_Construct_UClass_APlayerB_Statics; \
public: \
	DECLARE_CLASS(APlayerB, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(APlayerB)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerB(); \
	friend struct Z_Construct_UClass_APlayerB_Statics; \
public: \
	DECLARE_CLASS(APlayerB, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(APlayerB)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerB(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerB) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerB); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerB(APlayerB&&); \
	NO_API APlayerB(const APlayerB&); \
public:


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerB(APlayerB&&); \
	NO_API APlayerB(const APlayerB&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerB); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerB)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_PRIVATE_PROPERTY_OFFSET
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_18_PROLOG
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_RPC_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_INCLASS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_INCLASS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRISONBREAK_API UClass* StaticClass<class APlayerB>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerB_h


#define FOREACH_ENUM_EPLAYERBSTATE(op) \
	op(EPlayerBState::B_CanLock) \
	op(EPlayerBState::B_Locking) \
	op(EPlayerBState::B_CanWatch) \
	op(EPlayerBState::B_Talk) \
	op(EPlayerBState::B_End) 

enum class EPlayerBState : uint8;
template<> PRISONBREAK_API UEnum* StaticEnum<EPlayerBState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
