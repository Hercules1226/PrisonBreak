// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRISONBREAK_PlayerA_generated_h
#error "PlayerA.generated.h already included, missing '#pragma once' in PlayerA.h"
#endif
#define PRISONBREAK_PlayerA_generated_h

#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_SPARSE_DATA
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_RPC_WRAPPERS
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerA(); \
	friend struct Z_Construct_UClass_APlayerA_Statics; \
public: \
	DECLARE_CLASS(APlayerA, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(APlayerA)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerA(); \
	friend struct Z_Construct_UClass_APlayerA_Statics; \
public: \
	DECLARE_CLASS(APlayerA, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(APlayerA)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerA(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerA) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerA); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerA); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerA(APlayerA&&); \
	NO_API APlayerA(const APlayerA&); \
public:


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerA(APlayerA&&); \
	NO_API APlayerA(const APlayerA&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerA); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerA); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerA)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_PRIVATE_PROPERTY_OFFSET
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_18_PROLOG
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_RPC_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_INCLASS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_INCLASS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRISONBREAK_API UClass* StaticClass<class APlayerA>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerA_h


#define FOREACH_ENUM_EPLAYERASTATE(op) \
	op(EPlayerAState::CanLock) \
	op(EPlayerAState::Locking) \
	op(EPlayerAState::CanWatch) \
	op(EPlayerAState::Talk) 

enum class EPlayerAState : uint8;
template<> PRISONBREAK_API UEnum* StaticEnum<EPlayerAState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
