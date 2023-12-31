// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/CCTV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCTV() {}
// Cross Module References
	PRISONBREAK_API UClass* Z_Construct_UClass_ACCTV_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_ACCTV();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
// End Cross Module References
	DEFINE_FUNCTION(ACCTV::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_value);
		P_NATIVE_END;
	}
	void ACCTV::StaticRegisterNativesACCTV()
	{
		UClass* Class = ACCTV::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Turn", &ACCTV::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACCTV_Turn_Statics
	{
		struct CCTV_eventTurn_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACCTV_Turn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CCTV_eventTurn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACCTV_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACCTV_Turn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACCTV_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/CCTV.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACCTV_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACCTV, nullptr, "Turn", nullptr, nullptr, sizeof(CCTV_eventTurn_Parms), Z_Construct_UFunction_ACCTV_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCTV_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACCTV_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACCTV_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACCTV_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACCTV_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACCTV_NoRegister()
	{
		return ACCTV::StaticClass();
	}
	struct Z_Construct_UClass_ACCTV_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACCTV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACCTV_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACCTV_Turn, "Turn" }, // 1307186066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCTV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CCTV.h" },
		{ "ModuleRelativePath", "Public/CCTV.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACCTV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACCTV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACCTV_Statics::ClassParams = {
		&ACCTV::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACCTV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACCTV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACCTV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACCTV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACCTV, 1010978573);
	template<> PRISONBREAK_API UClass* StaticClass<ACCTV>()
	{
		return ACCTV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACCTV(Z_Construct_UClass_ACCTV, &ACCTV::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("ACCTV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACCTV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
