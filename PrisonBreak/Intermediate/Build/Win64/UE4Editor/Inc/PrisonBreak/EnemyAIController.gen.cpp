// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/EnemyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}
// Cross Module References
	PRISONBREAK_API UEnum* Z_Construct_UEnum_PrisonBreak_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
	PRISONBREAK_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_AEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerA_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerB_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EEnemyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PrisonBreak_EEnemyState, Z_Construct_UPackage__Script_PrisonBreak(), TEXT("EEnemyState"));
		}
		return Singleton;
	}
	template<> PRISONBREAK_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyState(EEnemyState_StaticEnum, TEXT("/Script/PrisonBreak"), TEXT("EEnemyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PrisonBreak_EEnemyState_Hash() { return 1054430346U; }
	UEnum* Z_Construct_UEnum_PrisonBreak_EEnemyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PrisonBreak();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyState"), 0, Get_Z_Construct_UEnum_PrisonBreak_EEnemyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
				{ "EEnemyState::Move", (int64)EEnemyState::Move },
				{ "EEnemyState::Talk", (int64)EEnemyState::Talk },
				{ "EEnemyState::Check", (int64)EEnemyState::Check },
				{ "EEnemyState::End", (int64)EEnemyState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Check.Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "Check.Name", "EEnemyState::Check" },
				{ "Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "End.Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "End.Name", "EEnemyState::End" },
				{ "Idle.Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "Idle.Name", "EEnemyState::Idle" },
				{ "ModuleRelativePath", "Public/EnemyAIController.h" },
				{ "Move.Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "Move.Name", "EEnemyState::Move" },
				{ "Talk.Comment", "/**\n * \n *///?????? ???\xc2\xb8? ????\n" },
				{ "Talk.Name", "EEnemyState::Talk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PrisonBreak,
				nullptr,
				"EEnemyState",
				"EEnemyState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AEnemyAIController::execWaypointB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->WaypointB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyAIController::execWaypointA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->WaypointA();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyAIController::execGoToRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToRandomWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyAIController::execGetRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetRandomWaypoint();
		P_NATIVE_END;
	}
	void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
	{
		UClass* Class = AEnemyAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomWaypoint", &AEnemyAIController::execGetRandomWaypoint },
			{ "GoToRandomWaypoint", &AEnemyAIController::execGoToRandomWaypoint },
			{ "WaypointA", &AEnemyAIController::execWaypointA },
			{ "WaypointB", &AEnemyAIController::execWaypointB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics
	{
		struct EnemyAIController_eventGetRandomWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAIController_eventGetRandomWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "GetRandomWaypoint", nullptr, nullptr, sizeof(EnemyAIController_eventGetRandomWaypoint_Parms), Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "GoToRandomWaypoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics
	{
		struct EnemyAIController_eventWaypointA_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAIController_eventWaypointA_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "WaypointA", nullptr, nullptr, sizeof(EnemyAIController_eventWaypointA_Parms), Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAIController_WaypointA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAIController_WaypointA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics
	{
		struct EnemyAIController_eventWaypointB_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAIController_eventWaypointB_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "WaypointB", nullptr, nullptr, sizeof(EnemyAIController_eventWaypointB_Parms), Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAIController_WaypointB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAIController_WaypointB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
	{
		return AEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_talkTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_talkTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_talkSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_talkSound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyAIController_GetRandomWaypoint, "GetRandomWaypoint" }, // 3553609714
		{ &Z_Construct_UFunction_AEnemyAIController_GoToRandomWaypoint, "GoToRandomWaypoint" }, // 3163486445
		{ &Z_Construct_UFunction_AEnemyAIController_WaypointA, "WaypointA" }, // 4039505095
		{ &Z_Construct_UFunction_AEnemyAIController_WaypointB, "WaypointB" }, // 3457413900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EnemyAIController.h" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state = { "m_state", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, m_state), Z_Construct_UEnum_PrisonBreak_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_idleDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//?\xca\xbf??\xd3\xbc? : ???\xd9\xb8? ?\xc3\xb0?, ???? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : ???\xd9\xb8? ?\xc3\xb0?, ???? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_idleDelayTime = { "idleDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, idleDelayTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_idleDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_idleDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, currentTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_CheckTime_MetaData[] = {
		{ "Comment", "//talk ?\xc3\xb5??? ???? ?\xc3\xb7??\xcc\xbe? A?? enemy?? ???\xd6\xba??? ???\xd6\xb4? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
		{ "ToolTip", "talk ?\xc3\xb5??? ???? ?\xc3\xb7??\xcc\xbe? A?? enemy?? ???\xd6\xba??? ???\xd6\xb4? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_CheckTime = { "CheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, CheckTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_CheckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_CheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkTime_MetaData[] = {
		{ "Comment", "//talk?? state ???? ??  idle?? ?\xd9\xb2??????? ???\xd9\xb8? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
		{ "ToolTip", "talk?? state ???? ??  idle?? ?\xd9\xb2??????? ???\xd9\xb8? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkTime = { "talkTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, talkTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetA_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetA = { "targetA", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, targetA), Z_Construct_UClass_APlayerA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetB_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetB = { "targetB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, targetB), Z_Construct_UClass_APlayerB_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, me), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_endSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "//Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? Animation Instance ????\n//UPROPERTY()\n//class UEnemyAnimInstance* anim;\n" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
		{ "ToolTip", "Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? Animation Instance ????\nUPROPERTY()\nclass UEnemyAnimInstance* anim;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_endSound = { "endSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, endSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_endSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_endSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkSound = { "talkSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, talkSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkSound_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_m_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_idleDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_CheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_targetB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_endSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_talkSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
		&AEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAIController, 1018723453);
	template<> PRISONBREAK_API UClass* StaticClass<AEnemyAIController>()
	{
		return AEnemyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAIController(Z_Construct_UClass_AEnemyAIController, &AEnemyAIController::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("AEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
