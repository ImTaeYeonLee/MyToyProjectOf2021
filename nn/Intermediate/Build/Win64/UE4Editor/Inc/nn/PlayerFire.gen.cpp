// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "nn/Public/PlayerFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerFire() {}
// Cross Module References
	NN_API UClass* Z_Construct_UClass_UPlayerFire_NoRegister();
	NN_API UClass* Z_Construct_UClass_UPlayerFire();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_nn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	NN_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	NN_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UPlayerFire::StaticRegisterNativesUPlayerFire()
	{
	}
	UClass* Z_Construct_UClass_UPlayerFire_NoRegister()
	{
		return UPlayerFire::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_firePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fireDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bulletPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ?????\xda\xb0? ?\xdf\xbb???\xc6\xb0?? ?????? ?\xd1\xbe??? ?\xdf\xbb??\xcf\xb0? ?\xcd\xb4?.\n// ?\xca\xbf??\xd3\xbc? : ?\xd1\xbe\xcb\xb0???\n" },
		{ "IncludePath", "PlayerFire.h" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
		{ "ToolTip", "?????\xda\xb0? ?\xdf\xbb???\xc6\xb0?? ?????? ?\xd1\xbe??? ?\xdf\xbb??\xcf\xb0? ?\xcd\xb4?.\n?\xca\xbf??\xd3\xbc? : ?\xd1\xbe\xcb\xb0???" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake = { "cameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, cameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "Comment", "// ?\xca\xbf??\xd3\xbc? : ?\xd1\xbe\xcb\xb0???\n" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : ?\xd1\xbe\xcb\xb0???" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, bulletFactory), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "// ?\xca\xbf??\xd3\xbc?:????????\n" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc?:????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, me), Z_Construct_UClass_AFPSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition = { "firePosition", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, firePosition), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance_MetaData[] = {
		{ "Category", "FireDistance" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance = { "fireDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, fireDistance), METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect_MetaData[] = {
		{ "Category", "BulletEffect" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect = { "bulletEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, bulletEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower_MetaData[] = {
		{ "Category", "BulletPower" },
		{ "Comment", "// ???? ???? ?? ?\xce\xb5??? ??\xc3\xbc?? ???? ??\n" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
		{ "ToolTip", "???? ???? ?? ?\xce\xb5??? ??\xc3\xbc?? ???? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower = { "bulletPower", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, bulletPower), METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFire_Statics::ClassParams = {
		&UPlayerFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerFire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerFire, 3634292398);
	template<> NN_API UClass* StaticClass<UPlayerFire>()
	{
		return UPlayerFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerFire(Z_Construct_UClass_UPlayerFire, &UPlayerFire::StaticClass, TEXT("/Script/nn"), TEXT("UPlayerFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
