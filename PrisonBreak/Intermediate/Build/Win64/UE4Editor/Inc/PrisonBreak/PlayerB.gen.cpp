// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/PlayerB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerB() {}
// Cross Module References
	PRISONBREAK_API UEnum* Z_Construct_UEnum_PrisonBreak_EPlayerBState();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerB_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerB();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerA_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EPlayerBState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PrisonBreak_EPlayerBState, Z_Construct_UPackage__Script_PrisonBreak(), TEXT("EPlayerBState"));
		}
		return Singleton;
	}
	template<> PRISONBREAK_API UEnum* StaticEnum<EPlayerBState>()
	{
		return EPlayerBState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerBState(EPlayerBState_StaticEnum, TEXT("/Script/PrisonBreak"), TEXT("EPlayerBState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PrisonBreak_EPlayerBState_Hash() { return 1194293034U; }
	UEnum* Z_Construct_UEnum_PrisonBreak_EPlayerBState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PrisonBreak();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerBState"), 0, Get_Z_Construct_UEnum_PrisonBreak_EPlayerBState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerBState::B_CanLock", (int64)EPlayerBState::B_CanLock },
				{ "EPlayerBState::B_Locking", (int64)EPlayerBState::B_Locking },
				{ "EPlayerBState::B_CanWatch", (int64)EPlayerBState::B_CanWatch },
				{ "EPlayerBState::B_Talk", (int64)EPlayerBState::B_Talk },
				{ "EPlayerBState::B_End", (int64)EPlayerBState::B_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "B_CanLock.DisplayName", "B_CANLOCK_STATE" },
				{ "B_CanLock.Name", "EPlayerBState::B_CanLock" },
				{ "B_CanWatch.DisplayName", "B_CANWATCH_STATE" },
				{ "B_CanWatch.Name", "EPlayerBState::B_CanWatch" },
				{ "B_End.DisplayName", "B_END_STATE" },
				{ "B_End.Name", "EPlayerBState::B_End" },
				{ "B_Locking.DisplayName", "B_LOCKING_STATE" },
				{ "B_Locking.Name", "EPlayerBState::B_Locking" },
				{ "B_Talk.DisplayName", "B_TALK_STATE" },
				{ "B_Talk.Name", "EPlayerBState::B_Talk" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PlayerB.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PrisonBreak,
				nullptr,
				"EPlayerBState",
				"EPlayerBState",
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
	DEFINE_FUNCTION(APlayerB::execB_DeInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->B_DeInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerB::execB_OnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->B_OnInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerB::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerB::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	void APlayerB::StaticRegisterNativesAPlayerB()
	{
		UClass* Class = APlayerB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "B_DeInteract", &APlayerB::execB_DeInteract },
			{ "B_OnInteract", &APlayerB::execB_OnInteract },
			{ "MoveForward", &APlayerB::execMoveForward },
			{ "Turn", &APlayerB::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerB_B_DeInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerB_B_DeInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerB_B_DeInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerB, nullptr, "B_DeInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerB_B_DeInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_B_DeInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerB_B_DeInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerB_B_DeInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerB_B_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerB_B_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerB_B_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerB, nullptr, "B_OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerB_B_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_B_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerB_B_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerB_B_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerB_MoveForward_Statics
	{
		struct PlayerB_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerB_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerB_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerB_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerB_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerB_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "Comment", "// ?\xcc\xb5? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "?\xcc\xb5? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerB_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerB, nullptr, "MoveForward", nullptr, nullptr, sizeof(PlayerB_eventMoveForward_Parms), Z_Construct_UFunction_APlayerB_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerB_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerB_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerB_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerB_Turn_Statics
	{
		struct PlayerB_eventTurn_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerB_Turn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerB_eventTurn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerB_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerB_Turn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerB_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerB_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerB, nullptr, "Turn", nullptr, nullptr, sizeof(PlayerB_eventTurn_Parms), Z_Construct_UFunction_APlayerB_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerB_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerB_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerB_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerB_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerB_NoRegister()
	{
		return APlayerB::StaticClass();
	}
	struct Z_Construct_UClass_APlayerB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoomArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInTrigger_MetaData[];
#endif
		static void NewProp_bIsInTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCuttingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bCuttingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCuttingTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bCuttingTimeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_guard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_guard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_talking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_talking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_escape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_escape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_idle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerB_B_DeInteract, "B_DeInteract" }, // 3759646448
		{ &Z_Construct_UFunction_APlayerB_B_OnInteract, "B_OnInteract" }, // 2724359698
		{ &Z_Construct_UFunction_APlayerB_MoveForward, "MoveForward" }, // 3490122323
		{ &Z_Construct_UFunction_APlayerB_Turn, "Turn" }, // 2968659598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerB.h" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_BoomArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerB" },
		{ "Comment", "// ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_BoomArm = { "BoomArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, BoomArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_BoomArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_BoomArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerB" },
		{ "Comment", "// \xc4\xab?\xde\xb6?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ?? ?\xd5\xbf? ?????? ?\xc8\xbc????? \xc3\xbc\xc5\xa9\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ?? ?\xd5\xbf? ?????? ?\xc8\xbc????? \xc3\xbc\xc5\xa9" },
	};
#endif
	void Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger_SetBit(void* Obj)
	{
		((APlayerB*)Obj)->bIsInTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger = { "bIsInTrigger", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerB), &Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTime_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?? ???? ??????\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTime = { "bCuttingTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, bCuttingTime), METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTimeMax_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?? ???? ???????? ?\xf3\xb8\xb6\xb3? ???? ?\xcf\xb4???\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "?? ???? ???????? ?\xf3\xb8\xb6\xb3? ???? ?\xcf\xb4???" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTimeMax = { "bCuttingTimeMax", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, bCuttingTimeMax), METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTimeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_playerA_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_playerA = { "playerA", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, playerA), Z_Construct_UClass_APlayerA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_playerA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_playerA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "// ?\xde\xb8???\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "?\xde\xb8???" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_SprintSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_bState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_bState_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe? ???\xc2\xb8\xd3\xbd?\n" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe? ???\xc2\xb8\xd3\xbd?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, bState), Z_Construct_UEnum_PrisonBreak_EPlayerBState, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_M_guard_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_M_guard = { "M_guard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, M_guard), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_M_guard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_M_guard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_M_talking_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_M_talking = { "M_talking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, M_talking), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_M_talking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_M_talking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_M_escape_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_M_escape = { "M_escape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, M_escape), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_M_escape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_M_escape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerB_Statics::NewProp_M_idle_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerB.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerB_Statics::NewProp_M_idle = { "M_idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerB, M_idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::NewProp_M_idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::NewProp_M_idle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_BoomArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_bIsInTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_bCuttingTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_playerA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_SprintSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_bState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_bState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_M_guard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_M_talking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_M_escape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerB_Statics::NewProp_M_idle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerB_Statics::ClassParams = {
		&APlayerB::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerB, 1903009675);
	template<> PRISONBREAK_API UClass* StaticClass<APlayerB>()
	{
		return APlayerB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerB(Z_Construct_UClass_APlayerB, &APlayerB::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("APlayerB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
