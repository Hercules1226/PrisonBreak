// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/PlayerA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerA() {}
// Cross Module References
	PRISONBREAK_API UEnum* Z_Construct_UEnum_PrisonBreak_EPlayerAState();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerA_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_APlayerA();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_ACCTV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EPlayerAState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PrisonBreak_EPlayerAState, Z_Construct_UPackage__Script_PrisonBreak(), TEXT("EPlayerAState"));
		}
		return Singleton;
	}
	template<> PRISONBREAK_API UEnum* StaticEnum<EPlayerAState>()
	{
		return EPlayerAState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerAState(EPlayerAState_StaticEnum, TEXT("/Script/PrisonBreak"), TEXT("EPlayerAState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PrisonBreak_EPlayerAState_Hash() { return 1161316924U; }
	UEnum* Z_Construct_UEnum_PrisonBreak_EPlayerAState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PrisonBreak();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerAState"), 0, Get_Z_Construct_UEnum_PrisonBreak_EPlayerAState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerAState::CanLock", (int64)EPlayerAState::CanLock },
				{ "EPlayerAState::Locking", (int64)EPlayerAState::Locking },
				{ "EPlayerAState::CanWatch", (int64)EPlayerAState::CanWatch },
				{ "EPlayerAState::Talk", (int64)EPlayerAState::Talk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanLock.DisplayName", "CANLOCK_STATE" },
				{ "CanLock.Name", "EPlayerAState::CanLock" },
				{ "CanWatch.DisplayName", "CANWATCH_STATE" },
				{ "CanWatch.Name", "EPlayerAState::CanWatch" },
				{ "Locking.DisplayName", "LOCKING_STATE" },
				{ "Locking.Name", "EPlayerAState::Locking" },
				{ "ModuleRelativePath", "Public/PlayerA.h" },
				{ "Talk.DisplayName", "TALK_STATE" },
				{ "Talk.Name", "EPlayerAState::Talk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PrisonBreak,
				nullptr,
				"EPlayerAState",
				"EPlayerAState",
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
	void APlayerA::StaticRegisterNativesAPlayerA()
	{
	}
	UClass* Z_Construct_UClass_APlayerA_NoRegister()
	{
		return APlayerA::StaticClass();
	}
	struct Z_Construct_UClass_APlayerA_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInTrigger_MetaData[];
#endif
		static void NewProp_isInTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lockComplete_MetaData[];
#endif
		static void NewProp_lockComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lockComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cuttingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cuttingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cuttingComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cuttingComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cctv_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cctv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlockSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unlockSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlockCompleteSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unlockCompleteSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_aState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_aState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_escape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_escape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_guard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_guard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_talking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_talking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerA.h" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_BoomArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerA" },
		{ "Comment", "// ????????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_BoomArm = { "BoomArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, BoomArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_BoomArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_BoomArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerA" },
		{ "Comment", "// \xc4\xab?\xde\xb6?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ?? ?\xd5\xbf? ?????? ?\xc8\xbc????? \xc3\xbc\xc5\xa9\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ?? ?\xd5\xbf? ?????? ?\xc8\xbc????? \xc3\xbc\xc5\xa9" },
	};
#endif
	void Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger_SetBit(void* Obj)
	{
		((APlayerA*)Obj)->isInTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger = { "isInTrigger", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerA), &Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	void Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete_SetBit(void* Obj)
	{
		((APlayerA*)Obj)->lockComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete = { "lockComplete", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerA), &Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingTime_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?? ???? ??????\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingTime = { "cuttingTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, cuttingTime), METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingComplete_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?? ???? ???????? ?\xf3\xb8\xb6\xb3? ???? ?\xcf\xb4???\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?? ???? ???????? ?\xf3\xb8\xb6\xb3? ???? ?\xcf\xb4???" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingComplete = { "cuttingComplete", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, cuttingComplete), METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_door_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_door = { "door", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, door), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_cctv_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_cctv = { "cctv", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, cctv), Z_Construct_UClass_ACCTV_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_cctv_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_cctv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_unlockSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ???? ???? ?\xd2\xb8?\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ???? ???? ?\xd2\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_unlockSound = { "unlockSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, unlockSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_unlockSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_unlockSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_unlockCompleteSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ???? ?\xd2\xb8?\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ???? ?\xd2\xb8?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_unlockCompleteSound = { "unlockCompleteSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, unlockCompleteSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_unlockCompleteSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_unlockCompleteSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "// ?\xde\xb8???\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?\xde\xb8???" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_SprintSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_aState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_aState_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe? ???\xc2\xb8\xd3\xbd?\n" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe? ???\xc2\xb8\xd3\xbd?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_aState = { "aState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, aState), Z_Construct_UEnum_PrisonBreak_EPlayerAState, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_aState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_aState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_M_escape_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_M_escape = { "M_escape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, M_escape), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_M_escape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_M_escape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_M_idle_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_M_idle = { "M_idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, M_idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_M_idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_M_idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_M_guard_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_M_guard = { "M_guard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, M_guard), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_M_guard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_M_guard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerA_Statics::NewProp_M_talking_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/PlayerA.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerA_Statics::NewProp_M_talking = { "M_talking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerA, M_talking), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::NewProp_M_talking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::NewProp_M_talking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_BoomArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_isInTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_lockComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_cuttingComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_cctv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_unlockSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_unlockCompleteSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_SprintSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_aState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_aState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_M_escape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_M_idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_M_guard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerA_Statics::NewProp_M_talking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerA_Statics::ClassParams = {
		&APlayerA::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerA, 2718731844);
	template<> PRISONBREAK_API UClass* StaticClass<APlayerA>()
	{
		return APlayerA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerA(Z_Construct_UClass_APlayerA, &APlayerA::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("APlayerA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
