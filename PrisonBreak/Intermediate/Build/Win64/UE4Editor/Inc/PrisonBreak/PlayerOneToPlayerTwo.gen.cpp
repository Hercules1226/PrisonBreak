// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/PlayerOneToPlayerTwo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOneToPlayerTwo() {}
// Cross Module References
	PRISONBREAK_API UClass* Z_Construct_UClass_UPlayerOneToPlayerTwo_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_UPlayerOneToPlayerTwo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerOneToPlayerTwo::execPlayerBForwardInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayerBForwardInput_Implementation();
		P_NATIVE_END;
	}
	float IPlayerOneToPlayerTwo::PlayerBForwardInput()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerBForwardInput instead.");
		PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPlayerOneToPlayerTwo::StaticRegisterNativesUPlayerOneToPlayerTwo()
	{
		UClass* Class = UPlayerOneToPlayerTwo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerBForwardInput", &IPlayerOneToPlayerTwo::execPlayerBForwardInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerOneToPlayerTwo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOneToPlayerTwo, nullptr, "PlayerBForwardInput", nullptr, nullptr, sizeof(PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms), Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerOneToPlayerTwo_NoRegister()
	{
		return UPlayerOneToPlayerTwo::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerOneToPlayerTwo_PlayerBForwardInput, "PlayerBForwardInput" }, // 840619728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerOneToPlayerTwo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerOneToPlayerTwo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::ClassParams = {
		&UPlayerOneToPlayerTwo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerOneToPlayerTwo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerOneToPlayerTwo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerOneToPlayerTwo, 2489895019);
	template<> PRISONBREAK_API UClass* StaticClass<UPlayerOneToPlayerTwo>()
	{
		return UPlayerOneToPlayerTwo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerOneToPlayerTwo(Z_Construct_UClass_UPlayerOneToPlayerTwo, &UPlayerOneToPlayerTwo::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("UPlayerOneToPlayerTwo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOneToPlayerTwo);
	static FName NAME_UPlayerOneToPlayerTwo_PlayerBForwardInput = FName(TEXT("PlayerBForwardInput"));
	float IPlayerOneToPlayerTwo::Execute_PlayerBForwardInput(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerOneToPlayerTwo::StaticClass()));
		PlayerOneToPlayerTwo_eventPlayerBForwardInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerOneToPlayerTwo_PlayerBForwardInput);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerOneToPlayerTwo*)(O->GetNativeInterfaceAddress(UPlayerOneToPlayerTwo::StaticClass())))
		{
			Parms.ReturnValue = I->PlayerBForwardInput_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
