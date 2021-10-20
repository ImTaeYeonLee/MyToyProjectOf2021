// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/TY_FPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_FPSPlayer() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_ATY_FPSPlayer_NoRegister();
	NN_API UClass* Z_Construct_UClass_ATY_FPSPlayer();
	NN_API UClass* Z_Construct_UClass_AFPSPlayer();
	UPackage* Z_Construct_UPackage__Script_nn();
// End Cross Module References
	void ATY_FPSPlayer::StaticRegisterNativesATY_FPSPlayer()
	{
	}
	UClass* Z_Construct_UClass_ATY_FPSPlayer_NoRegister()
	{
		return ATY_FPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATY_FPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_FPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_FPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_FPSPlayer.h" },
		{ "ModuleRelativePath", "Public/TY_FPSPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_FPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_FPSPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_FPSPlayer_Statics::ClassParams = {
		&ATY_FPSPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATY_FPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_FPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_FPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_FPSPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_FPSPlayer, 3223986001);
	template<> NN_API UClass* StaticClass<ATY_FPSPlayer>()
	{
		return ATY_FPSPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_FPSPlayer(Z_Construct_UClass_ATY_FPSPlayer, &ATY_FPSPlayer::StaticClass, TEXT("/Script/nn"), TEXT("ATY_FPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_FPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
