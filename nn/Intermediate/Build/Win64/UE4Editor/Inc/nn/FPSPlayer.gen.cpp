// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/FPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayer() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	NN_API UClass* Z_Construct_UClass_AFPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_nn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NN_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	NN_API UClass* Z_Construct_UClass_UPlayerFire_NoRegister();
// End Cross Module References
	void AFPSPlayer::StaticRegisterNativesAFPSPlayer()
	{
	}
	UClass* Z_Construct_UClass_AFPSPlayer_NoRegister()
	{
		return AFPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fpsCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fpsCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSPlayer.h" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData[] = {
		{ "Category", "FPSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera = { "fpsCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, fpsCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, bodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "PlayerMove" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, playerMove), Z_Construct_UClass_UPlayerMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerFire_MetaData[] = {
		{ "Category", "PlayerFire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerFire = { "playerFire", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, playerFire), Z_Construct_UClass_UPlayerFire_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerFire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerFire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayer_Statics::ClassParams = {
		&AFPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayer, 866121550);
	template<> NN_API UClass* StaticClass<AFPSPlayer>()
	{
		return AFPSPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayer(Z_Construct_UClass_AFPSPlayer, &AFPSPlayer::StaticClass, TEXT("/Script/nn"), TEXT("AFPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
