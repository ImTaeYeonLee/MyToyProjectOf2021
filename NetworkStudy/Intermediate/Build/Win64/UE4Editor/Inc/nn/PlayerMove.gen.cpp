// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/PlayerMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMove() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	NN_API UClass* Z_Construct_UClass_UPlayerMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_nn();
	NN_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
// End Cross Module References
	void UPlayerMove::StaticRegisterNativesUPlayerMove()
	{
	}
	UClass* Z_Construct_UClass_UPlayerMove_NoRegister()
	{
		return UPlayerMove::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ???????? ?\xd4\xb7??? ?\xde\xbe? ?\xcc\xb5?\n// ?\xca\xbf??\xd3\xbc?:?\xcc\xb5??\xd3\xb5?, ????????\n" },
		{ "IncludePath", "PlayerMove.h" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
		{ "ToolTip", "???????? ?\xd4\xb7??? ?\xde\xbe? ?\xcc\xb5?\n?\xca\xbf??\xd3\xbc?:?\xcc\xb5??\xd3\xb5?, ????????" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "// ?\xca\xbf??\xd3\xbc?:????????\n" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc?:????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, me), Z_Construct_UClass_AFPSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_me,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMove_Statics::ClassParams = {
		&UPlayerMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMove, 242007669);
	template<> NN_API UClass* StaticClass<UPlayerMove>()
	{
		return UPlayerMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMove(Z_Construct_UClass_UPlayerMove, &UPlayerMove::StaticClass, TEXT("/Script/nn"), TEXT("UPlayerMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
