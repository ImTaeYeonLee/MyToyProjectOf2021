// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/MyNetworkStudyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNetworkStudyHUD() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_AMyNetworkStudyHUD_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_AMyNetworkStudyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void AMyNetworkStudyHUD::StaticRegisterNativesAMyNetworkStudyHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyNetworkStudyHUD_NoRegister()
	{
		return AMyNetworkStudyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyNetworkStudyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNetworkStudyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNetworkStudyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyNetworkStudyHUD.h" },
		{ "ModuleRelativePath", "Public/MyNetworkStudyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNetworkStudyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNetworkStudyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNetworkStudyHUD_Statics::ClassParams = {
		&AMyNetworkStudyHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyNetworkStudyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNetworkStudyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNetworkStudyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNetworkStudyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNetworkStudyHUD, 4010608445);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<AMyNetworkStudyHUD>()
	{
		return AMyNetworkStudyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNetworkStudyHUD(Z_Construct_UClass_AMyNetworkStudyHUD, &AMyNetworkStudyHUD::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("AMyNetworkStudyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNetworkStudyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
