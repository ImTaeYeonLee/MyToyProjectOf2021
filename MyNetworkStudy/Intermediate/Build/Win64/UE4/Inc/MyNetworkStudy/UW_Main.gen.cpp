// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/UW_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_Main() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_UUW_Main_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_UUW_Main();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_UUW_Chat_NoRegister();
// End Cross Module References
	void UUW_Main::StaticRegisterNativesUUW_Main()
	{
	}
	UClass* Z_Construct_UClass_UUW_Main_NoRegister()
	{
		return UUW_Main::StaticClass();
	}
	struct Z_Construct_UClass_UUW_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WB_Chat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WB_Chat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUW_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUW_Main_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UW_Main.h" },
		{ "ModuleRelativePath", "Public/UW_Main.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UW_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat = { "WB_Chat", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUW_Main, WB_Chat), Z_Construct_UClass_UUW_Chat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_Main_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUW_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUW_Main_Statics::ClassParams = {
		&UUW_Main::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUW_Main_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUW_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUW_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUW_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUW_Main, 406635945);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<UUW_Main>()
	{
		return UUW_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUW_Main(Z_Construct_UClass_UUW_Main, &UUW_Main::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("UUW_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
