// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/TY_TestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_TestCharacter() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_ATY_TestCharacter_NoRegister();
	NN_API UClass* Z_Construct_UClass_ATY_TestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_nn();
// End Cross Module References
	void ATY_TestCharacter::StaticRegisterNativesATY_TestCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATY_TestCharacter_NoRegister()
	{
		return ATY_TestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATY_TestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_TestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_TestCharacter.h" },
		{ "ModuleRelativePath", "Public/TY_TestCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_TestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_TestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_TestCharacter_Statics::ClassParams = {
		&ATY_TestCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATY_TestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_TestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_TestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_TestCharacter, 1632175272);
	template<> NN_API UClass* StaticClass<ATY_TestCharacter>()
	{
		return ATY_TestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_TestCharacter(Z_Construct_UClass_ATY_TestCharacter, &ATY_TestCharacter::StaticClass, TEXT("/Script/nn"), TEXT("ATY_TestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_TestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
