// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/VR_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_Player() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_AVR_Player();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UMoveActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UHandActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister();
// End Cross Module References
	void AVR_Player::StaticRegisterNativesAVR_Player()
	{
	}
	UClass* Z_Construct_UClass_AVR_Player_NoRegister()
	{
		return AVR_Player::StaticClass();
	}
	struct Z_Construct_UClass_AVR_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVR_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VR_Player.h" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp = { "bodyComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, bodyComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot = { "cameraRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, cameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam = { "playerCam", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, playerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController = { "leftController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController = { "rightController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog = { "leftLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog = { "rightLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
		{ "ToolTip", "???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, moveComp), Z_Construct_UClass_UMoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp = { "handComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, handComp), Z_Construct_UClass_UHandActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp = { "grabComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, grabComp), Z_Construct_UClass_UGrabActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVR_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVR_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVR_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVR_Player_Statics::ClassParams = {
		&AVR_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVR_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVR_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVR_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_Player, 2740740207);
	template<> TY_FUNCTION_API UClass* StaticClass<AVR_Player>()
	{
		return AVR_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_Player(Z_Construct_UClass_AVR_Player, &AVR_Player::StaticClass, TEXT("/Script/TY_Function"), TEXT("AVR_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
