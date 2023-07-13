// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef PRISONBREAK_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define PRISONBREAK_EnemyAIController_generated_h

#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_SPARSE_DATA
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaypointB); \
	DECLARE_FUNCTION(execWaypointA); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaypointB); \
	DECLARE_FUNCTION(execWaypointA); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrisonBreak"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(AEnemyAIController, Waypoints); }


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_30_PROLOG
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_RPC_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_INCLASS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_PRIVATE_PROPERTY_OFFSET \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_INCLASS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRISONBREAK_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrisonBreak_BetaMaster_Source_PrisonBreak_Public_EnemyAIController_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Idle) \
	op(EEnemyState::Move) \
	op(EEnemyState::Talk) \
	op(EEnemyState::Check) \
	op(EEnemyState::End) 

enum class EEnemyState : uint8;
template<> PRISONBREAK_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
