// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/ShootPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootPlayer() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_AShootPlayer_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_AShootPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_MoveActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_CameraWheelActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShootPlayer::StaticRegisterNativesAShootPlayer()
	{
	}
	UClass* Z_Construct_UClass_AShootPlayer_NoRegister()
	{
		return AShootPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AShootPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCameraController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCameraController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootPlayer.h" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "PlayerCamera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??????\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "PlayerMove" },
		{ "Comment", "/*\n\x09UPROPERTY(VisibleAnywhere, Category = \"PlayerMove\")\n\x09""class UPlayerMove* playerMove;\n\x09\n\x09UPROPERTY(VisibleAnywhere, Category = \"PlayerFire\")\n\x09""class UPlayerFire* playerFire;\n\n\x09UPROPERTY(VisibleAnywhere, Category = \"FirePosition\")\n\x09""class UArrowComponent* firePosition;\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"PlayerMove\")\nclass UPlayerMove* playerMove;\n\nUPROPERTY(VisibleAnywhere, Category = \"PlayerFire\")\nclass UPlayerFire* playerFire;\n\nUPROPERTY(VisibleAnywhere, Category = \"FirePosition\")\nclass UArrowComponent* firePosition;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, playerMove), Z_Construct_UClass_UTY_MoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCameraController_MetaData[] = {
		{ "Category", "PlayerCameraController" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, category = \"PlayerCameraController\")\n//class UTY_CameraActorComponent* playerCameraController;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, category = \"PlayerCameraController\")\nclass UTY_CameraActorComponent* playerCameraController;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCameraController = { "playerCameraController", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, playerCameraController), Z_Construct_UClass_UTY_CameraWheelActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCameraController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCameraController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_boxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Box\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
		{ "ToolTip", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_boxCollision = { "boxCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, boxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_boxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_boxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "Comment", "// StaticMesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
		{ "ToolTip", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerCameraController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_boxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootPlayer_Statics::ClassParams = {
		&AShootPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootPlayer, 1356806808);
	template<> TY_FUNCTION_API UClass* StaticClass<AShootPlayer>()
	{
		return AShootPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootPlayer(Z_Construct_UClass_AShootPlayer, &AShootPlayer::StaticClass, TEXT("/Script/TY_Function"), TEXT("AShootPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
