// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/TY_CameraWheelActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_CameraWheelActorComponent() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_CameraWheelActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_CameraWheelActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UTY_CameraWheelActorComponent::StaticRegisterNativesUTY_CameraWheelActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_CameraWheelActorComponent_NoRegister()
	{
		return UTY_CameraWheelActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_CameraWheelActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_CameraWheelActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData[] = {
		{ "Comment", "/*\n\x09// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerCamera\")\n\x09\x09""class UCameraComponent* playerCamera_pc;\n\n\x09// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\n\x09UPROPERTY(VisibleAnywhere, Category = \"PlayerCamera\")\n\x09\x09""class USpringArmComponent* playerCameraSpringArm;\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/TY_CameraWheelActorComponent.h" },
		{ "ToolTip", "// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerCamera\")\n        class UCameraComponent* playerCamera_pc;\n\n// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\nUPROPERTY(VisibleAnywhere, Category = \"PlayerCamera\")\n        class USpringArmComponent* playerCameraSpringArm;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput = { "cameraTurnInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraWheelActorComponent, cameraTurnInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// \xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????\n" },
		{ "ModuleRelativePath", "Public/TY_CameraWheelActorComponent.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_camSpeed = { "camSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_CameraWheelActorComponent, camSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::NewProp_camSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_CameraWheelActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::ClassParams = {
		&UTY_CameraWheelActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_CameraWheelActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_CameraWheelActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_CameraWheelActorComponent, 1758353587);
	template<> TY_FUNCTION_API UClass* StaticClass<UTY_CameraWheelActorComponent>()
	{
		return UTY_CameraWheelActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_CameraWheelActorComponent(Z_Construct_UClass_UTY_CameraWheelActorComponent, &UTY_CameraWheelActorComponent::StaticClass, TEXT("/Script/TY_Function"), TEXT("UTY_CameraWheelActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_CameraWheelActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
