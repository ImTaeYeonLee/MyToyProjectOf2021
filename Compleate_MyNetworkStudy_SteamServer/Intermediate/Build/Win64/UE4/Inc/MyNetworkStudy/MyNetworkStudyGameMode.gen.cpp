// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/MyNetworkStudyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNetworkStudyGameMode() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_AMyNetworkStudyGameMode_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_AMyNetworkStudyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void AMyNetworkStudyGameMode::StaticRegisterNativesAMyNetworkStudyGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyNetworkStudyGameMode_NoRegister()
	{
		return AMyNetworkStudyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyNetworkStudyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyNetworkStudyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyNetworkStudyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNetworkStudyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::ClassParams = {
		&AMyNetworkStudyGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNetworkStudyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNetworkStudyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNetworkStudyGameMode, 3509229304);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<AMyNetworkStudyGameMode>()
	{
		return AMyNetworkStudyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNetworkStudyGameMode(Z_Construct_UClass_AMyNetworkStudyGameMode, &AMyNetworkStudyGameMode::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("AMyNetworkStudyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNetworkStudyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
