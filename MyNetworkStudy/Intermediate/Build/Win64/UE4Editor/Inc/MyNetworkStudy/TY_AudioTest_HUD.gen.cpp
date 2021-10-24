// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/TY_AudioTest_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_AudioTest_HUD() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_HUD_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void ATY_AudioTest_HUD::StaticRegisterNativesATY_AudioTest_HUD()
	{
	}
	UClass* Z_Construct_UClass_ATY_AudioTest_HUD_NoRegister()
	{
		return ATY_AudioTest_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ATY_AudioTest_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_AudioTest_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_AudioTest_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TY_AudioTest_HUD.h" },
		{ "ModuleRelativePath", "Public/TY_AudioTest_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_AudioTest_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_AudioTest_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_AudioTest_HUD_Statics::ClassParams = {
		&ATY_AudioTest_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATY_AudioTest_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_AudioTest_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_AudioTest_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_AudioTest_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_AudioTest_HUD, 2321050967);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<ATY_AudioTest_HUD>()
	{
		return ATY_AudioTest_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_AudioTest_HUD(Z_Construct_UClass_ATY_AudioTest_HUD, &ATY_AudioTest_HUD::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("ATY_AudioTest_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_AudioTest_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
