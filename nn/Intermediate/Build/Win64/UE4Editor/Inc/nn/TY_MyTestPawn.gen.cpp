// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/TY_MyTestPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_MyTestPawn() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_ATY_MyTestPawn_NoRegister();
	NN_API UClass* Z_Construct_UClass_ATY_MyTestPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_nn();
// End Cross Module References
	void ATY_MyTestPawn::StaticRegisterNativesATY_MyTestPawn()
	{
	}
	UClass* Z_Construct_UClass_ATY_MyTestPawn_NoRegister()
	{
		return ATY_MyTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATY_MyTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_MyTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_MyTestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_MyTestPawn.h" },
		{ "ModuleRelativePath", "Public/TY_MyTestPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_MyTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_MyTestPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_MyTestPawn_Statics::ClassParams = {
		&ATY_MyTestPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_MyTestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_MyTestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_MyTestPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_MyTestPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_MyTestPawn, 2259616431);
	template<> NN_API UClass* StaticClass<ATY_MyTestPawn>()
	{
		return ATY_MyTestPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_MyTestPawn(Z_Construct_UClass_ATY_MyTestPawn, &ATY_MyTestPawn::StaticClass, TEXT("/Script/nn"), TEXT("ATY_MyTestPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_MyTestPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
