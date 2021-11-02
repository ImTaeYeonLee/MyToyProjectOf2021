// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkStudy/Public/UW_Chat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_Chat() {}
// Cross Module References
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_UUW_Chat_NoRegister();
	MYNETWORKSTUDY_API UClass* Z_Construct_UClass_UUW_Chat();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyNetworkStudy();
// End Cross Module References
	void UUW_Chat::StaticRegisterNativesUUW_Chat()
	{
	}
	UClass* Z_Construct_UClass_UUW_Chat_NoRegister()
	{
		return UUW_Chat::StaticClass();
	}
	struct Z_Construct_UClass_UUW_Chat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUW_Chat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUW_Chat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UW_Chat.h" },
		{ "ModuleRelativePath", "Public/UW_Chat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUW_Chat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Chat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUW_Chat_Statics::ClassParams = {
		&UUW_Chat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUW_Chat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Chat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUW_Chat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUW_Chat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUW_Chat, 3735763968);
	template<> MYNETWORKSTUDY_API UClass* StaticClass<UUW_Chat>()
	{
		return UUW_Chat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUW_Chat(Z_Construct_UClass_UUW_Chat, &UUW_Chat::StaticClass, TEXT("/Script/MyNetworkStudy"), TEXT("UUW_Chat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_Chat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
