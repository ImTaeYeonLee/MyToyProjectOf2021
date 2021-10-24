// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/TY_AudioTest_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_AudioTest_PlayerController() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_PlayerController_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_ATY_AudioTest_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void ATY_AudioTest_PlayerController::StaticRegisterNativesATY_AudioTest_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATY_AudioTest_PlayerController_NoRegister()
	{
		return ATY_AudioTest_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TY_AudioTest_PlayerController.h" },
		{ "ModuleRelativePath", "Public/TY_AudioTest_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_AudioTest_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::ClassParams = {
		&ATY_AudioTest_PlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_AudioTest_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_AudioTest_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_AudioTest_PlayerController, 3206795252);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<ATY_AudioTest_PlayerController>()
	{
		return ATY_AudioTest_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_AudioTest_PlayerController(Z_Construct_UClass_ATY_AudioTest_PlayerController, &ATY_AudioTest_PlayerController::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("ATY_AudioTest_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_AudioTest_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
