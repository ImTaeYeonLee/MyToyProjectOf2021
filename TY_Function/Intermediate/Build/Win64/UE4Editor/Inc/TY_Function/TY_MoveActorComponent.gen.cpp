// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/TY_MoveActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_MoveActorComponent() {}
// Cross Module References
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_MoveActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UTY_MoveActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	TY_FUNCTION_API UClass* Z_Construct_UClass_ATY_TestPawn_NoRegister();
// End Cross Module References
	void UTY_MoveActorComponent::StaticRegisterNativesUTY_MoveActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_MoveActorComponent_NoRegister()
	{
		return UTY_MoveActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_MoveActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_MoveActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_MoveActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_MoveActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_MoveActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_MoveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_MoveActorComponent, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "// ?? ???? ??????\xc6\xae?? ?????? ??\xc3\xbc?? ???? ?????? ????\n" },
		{ "ModuleRelativePath", "Public/TY_MoveActorComponent.h" },
		{ "ToolTip", "?? ???? ??????\xc6\xae?? ?????? ??\xc3\xbc?? ???? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_MoveActorComponent, me), Z_Construct_UClass_ATY_TestPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_me_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_MoveActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_MoveActorComponent_Statics::NewProp_me,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_MoveActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_MoveActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_MoveActorComponent_Statics::ClassParams = {
		&UTY_MoveActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_MoveActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_MoveActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_MoveActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_MoveActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_MoveActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_MoveActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_MoveActorComponent, 3507504272);
	template<> TY_FUNCTION_API UClass* StaticClass<UTY_MoveActorComponent>()
	{
		return UTY_MoveActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_MoveActorComponent(Z_Construct_UClass_UTY_MoveActorComponent, &UTY_MoveActorComponent::StaticClass, TEXT("/Script/TY_Function"), TEXT("UTY_MoveActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_MoveActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
