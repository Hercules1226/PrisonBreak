// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRISONBREAK_PlayerOneToPlayerTwo_generated_h
#error "PlayerOneToPlayerTwo.generated.h already included, missing '#pragma once' in PlayerOneToPlayerTwo.h"
#endif
#define PRISONBREAK_PlayerOneToPlayerTwo_generated_h

#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_SPARSE_DATA
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_RPC_WRAPPERS \
	virtual float PlayerBForwardInput_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execPlayerBForwardInput);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float PlayerBForwardInput_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execPlayerBForwardInput);


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_EVENT_PARMS \
	struct PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_CALLBACK_WRAPPERS
#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRISONBREAK_API UPlayerOneToPlayerTwo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerOneToPlayerTwo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRISONBREAK_API, UPlayerOneToPlayerTwo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerOneToPlayerTwo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRISONBREAK_API UPlayerOneToPlayerTwo(UPlayerOneToPlayerTwo&&); \
	PRISONBREAK_API UPlayerOneToPlayerTwo(const UPlayerOneToPlayerTwo&); \
public:


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRISONBREAK_API UPlayerOneToPlayerTwo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRISONBREAK_API UPlayerOneToPlayerTwo(UPlayerOneToPlayerTwo&&); \
	PRISONBREAK_API UPlayerOneToPlayerTwo(const UPlayerOneToPlayerTwo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRISONBREAK_API, UPlayerOneToPlayerTwo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerOneToPlayerTwo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerOneToPlayerTwo)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerOneToPlayerTwo(); \
	friend struct Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics; \
public: \
	DECLARE_CLASS(UPlayerOneToPlayerTwo, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PrisonBreak"), PRISONBREAK_API) \
	DECLARE_SERIALIZER(UPlayerOneToPlayerTwo)


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_GENERATED_UINTERFACE_BODY() \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_GENERATED_UINTERFACE_BODY() \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerOneToPlayerTwo() {} \
public: \
	typedef UPlayerOneToPlayerTwo UClassType; \
	typedef IPlayerOneToPlayerTwo ThisClass; \
	static float Execute_PlayerBForwardInput(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerOneToPlayerTwo() {} \
public: \
	typedef UPlayerOneToPlayerTwo UClassType; \
	typedef IPlayerOneToPlayerTwo ThisClass; \
	static float Execute_PlayerBForwardInput(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_10_PROLOG \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_EVENT_PARMS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_RPC_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_CALLBACK_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_SPARSE_DATA \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_CALLBACK_WRAPPERS \
	PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRISONBREAK_API UClass* StaticClass<class UPlayerOneToPlayerTwo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrisonBreak_BetaMaster_Source_PrisonBreak_Public_PlayerOneToPlayerTwo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
