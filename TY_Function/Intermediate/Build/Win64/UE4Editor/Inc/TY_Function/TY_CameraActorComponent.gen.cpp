// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/TY_CameraActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_CameraActorComponent() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_CameraActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_CameraActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UTY_CameraActorComponent::StaticRegisterNativesUTY_CameraActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_CameraActorComponent_NoRegister()
	{
		return UTY_CameraActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_CameraActorComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraTurnInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cameraTurnInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_camSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_CameraActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_CameraActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_CameraActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "PlayerCamera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_CameraActorComponent.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??????\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraActorComponent, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCameraSpringArm_MetaData[] = {
		{ "Category", "PlayerCamera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_CameraActorComponent.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCameraSpringArm = { "playerCameraSpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraActorComponent, playerCameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_cameraTurnInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_CameraActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_cameraTurnInput = { "cameraTurnInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraActorComponent, cameraTurnInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_cameraTurnInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_cameraTurnInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_camSpeed_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// \xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????\n" },
		{ "ModuleRelativePath", "Public/TY_CameraActorComponent.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_camSpeed = { "camSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraActorComponent, camSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_camSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_camSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_CameraActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_playerCameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_cameraTurnInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraActorComponent_Statics::NewProp_camSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_CameraActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_CameraActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_CameraActorComponent_Statics::ClassParams = {
		&UTY_CameraActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_CameraActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_CameraActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_CameraActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_CameraActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_CameraActorComponent, 3930820042);
	template<> TY_FUNCTION_API UClass* StaticClass<UTY_CameraActorComponent>()
	{
		return UTY_CameraActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_CameraActorComponent(Z_Construct_UClass_UTY_CameraActorComponent, &UTY_CameraActorComponent::StaticClass, TEXT("/Script/TY_Function"), TEXT("UTY_CameraActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_CameraActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
