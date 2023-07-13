// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrisonBreak/Public/PlayerStateUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateUI() {}
// Cross Module References
	PRISONBREAK_API UClass* Z_Construct_UClass_UPlayerStateUI_NoRegister();
	PRISONBREAK_API UClass* Z_Construct_UClass_UPlayerStateUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PrisonBreak();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UPlayerStateUI::StaticRegisterNativesUPlayerStateUI()
	{
	}
	UClass* Z_Construct_UClass_UPlayerStateUI_NoRegister()
	{
		return UPlayerStateUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStateUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerA_MissionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerA_MissionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerB_MissionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerB_MissionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerA_FrontOfDoorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerA_FrontOfDoorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerB_FrontOfDoorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerB_FrontOfDoorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerA_IDText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerA_IDText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerB_IDText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerB_IDText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStateUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PrisonBreak,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ?\xc3\xb7??? \xc8\xad?\xe9\xbf\xa1 ?\xca\xbf??? ?????? 4?? ?\xcc\xb0? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???\xcc\xb4? X2 ?? ?\xd8\xbc? 8??\n// ?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ?? ?\xcc\xbc??? ???? ????\n// ?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ?? ?\xd5\xbf? ???? ?? ???? ????\n// ???? ?\xf3\xb8\xb6\xb3? ???????? ??\xc5\xb8???? ???\xce\xb1\xd7\xb7??? ??\n// ?\xc3\xb7??\xcc\xbe??? ID?? ??\xc5\xb8???? ????\n// MissionText ?? ?\xd7\xbb? ????????, ???? ???? ???? ????\n// FrontOfDoorText ?? ?? ?\xd5\xbf? ?? ???? ??????, ???? ???? ???? ????\n// ?\xc3\xb7??\xcc\xbe?ID Text ?? ?\xd7\xbb? ??????\n// ?\xd4\xbc??? ?\xce\xb0??? ?\xca\xbf? ?? ?? ????\n// 1. PlayerA ?? ???? ?? ??\n// 2. PlayerB ?? ???? ?? ??\n" },
		{ "IncludePath", "PlayerStateUI.h" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
		{ "ToolTip", "?\xc3\xb7??? \xc8\xad?\xe9\xbf\xa1 ?\xca\xbf??? ?????? 4?? ?\xcc\xb0? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???\xcc\xb4? X2 ?? ?\xd8\xbc? 8??\n?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ?? ?\xcc\xbc??? ???? ????\n?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ?? ?\xd5\xbf? ???? ?? ???? ????\n???? ?\xf3\xb8\xb6\xb3? ???????? ??\xc5\xb8???? ???\xce\xb1\xd7\xb7??? ??\n?\xc3\xb7??\xcc\xbe??? ID?? ??\xc5\xb8???? ????\nMissionText ?? ?\xd7\xbb? ????????, ???? ???? ???? ????\nFrontOfDoorText ?? ?? ?\xd5\xbf? ?? ???? ??????, ???? ???? ???? ????\n?\xc3\xb7??\xcc\xbe?ID Text ?? ?\xd7\xbb? ??????\n?\xd4\xbc??? ?\xce\xb0??? ?\xca\xbf? ?? ?? ????\n1. PlayerA ?? ???? ?? ??\n2. PlayerB ?? ???? ?? ??" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_MissionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "Comment", "// ?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ?? ?\xcc\xbc??? ???? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
		{ "ToolTip", "?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ???? ?? ?\xcc\xbc??? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_MissionText = { "PlayerA_MissionText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerA_MissionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_MissionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_MissionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_MissionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_MissionText = { "PlayerB_MissionText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerB_MissionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_MissionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_MissionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_FrontOfDoorText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "Comment", "// ?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ?? ?\xd5\xbf? ???? ?? ???? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
		{ "ToolTip", "?? ?\xc3\xb7??\xcc\xbe\xee\xb0\xa1 ???? ?? ?? ?\xd5\xbf? ???? ?? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_FrontOfDoorText = { "PlayerA_FrontOfDoorText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerA_FrontOfDoorText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_FrontOfDoorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_FrontOfDoorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_FrontOfDoorText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_FrontOfDoorText = { "PlayerB_FrontOfDoorText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerB_FrontOfDoorText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_FrontOfDoorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_FrontOfDoorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_IDText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "Comment", "// ?\xc3\xb7??\xcc\xbe??? ID?? ??\xc5\xb8???? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
		{ "ToolTip", "?\xc3\xb7??\xcc\xbe??? ID?? ??\xc5\xb8???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_IDText = { "PlayerA_IDText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerA_IDText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_IDText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_IDText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_IDText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerStateUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_IDText = { "PlayerB_IDText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateUI, PlayerB_IDText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_IDText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_IDText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStateUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_MissionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_MissionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_FrontOfDoorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_FrontOfDoorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerA_IDText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateUI_Statics::NewProp_PlayerB_IDText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStateUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateUI_Statics::ClassParams = {
		&UPlayerStateUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerStateUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStateUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStateUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStateUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStateUI, 3944558596);
	template<> PRISONBREAK_API UClass* StaticClass<UPlayerStateUI>()
	{
		return UPlayerStateUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStateUI(Z_Construct_UClass_UPlayerStateUI, &UPlayerStateUI::StaticClass, TEXT("/Script/PrisonBreak"), TEXT("UPlayerStateUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
