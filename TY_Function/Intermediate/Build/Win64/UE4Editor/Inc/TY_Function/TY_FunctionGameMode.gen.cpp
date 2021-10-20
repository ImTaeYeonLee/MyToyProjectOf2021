// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/TY_FunctionGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_FunctionGameMode() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_ATY_FunctionGameMode_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_ATY_FunctionGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
// End Cross Module References
	void ATY_FunctionGameMode::StaticRegisterNativesATY_FunctionGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATY_FunctionGameMode_NoRegister()
	{
		return ATY_FunctionGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATY_FunctionGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_FunctionGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_FunctionGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TY_FunctionGameMode.h" },
		{ "ModuleRelativePath", "Public/TY_FunctionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_FunctionGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_FunctionGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_FunctionGameMode_Statics::ClassParams = {
		&ATY_FunctionGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATY_FunctionGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_FunctionGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_FunctionGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_FunctionGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_FunctionGameMode, 3353380281);
	template<> TY_FUNCTION_API UClass* StaticClass<ATY_FunctionGameMode>()
	{
		return ATY_FunctionGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_FunctionGameMode(Z_Construct_UClass_ATY_FunctionGameMode, &ATY_FunctionGameMode::StaticClass, TEXT("/Script/TY_Function"), TEXT("ATY_FunctionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_FunctionGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
