// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/TY_AudioTest_GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_AudioTest_GameModeBase() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_GameModeBase_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void ATY_AudioTest_GameModeBase::StaticRegisterNativesATY_AudioTest_GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATY_AudioTest_GameModeBase_NoRegister()
	{
		return ATY_AudioTest_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TY_AudioTest_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/TY_AudioTest_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_AudioTest_GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::ClassParams = {
		&ATY_AudioTest_GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_AudioTest_GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_AudioTest_GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_AudioTest_GameModeBase, 3408037230);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<ATY_AudioTest_GameModeBase>()
	{
		return ATY_AudioTest_GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_AudioTest_GameModeBase(Z_Construct_UClass_ATY_AudioTest_GameModeBase, &ATY_AudioTest_GameModeBase::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("ATY_AudioTest_GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_AudioTest_GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
