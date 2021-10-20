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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NN_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	NN_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerFire::execServer_OnFire)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_OnFire_Validate(Z_Param_Location,Z_Param_Rotation))
		{
			RPC_ValidateFailed(TEXT("Server_OnFire_Validate"));
			return;
		}
		P_THIS->Server_OnFire_Implementation(Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	static FName NAME_UPlayerFire_Server_OnFire = FName(TEXT("Server_OnFire"));
	void UPlayerFire::Server_OnFire(FVector Location, FRotator Rotation)
	{
		PlayerFire_eventServer_OnFire_Parms Parms;
		Parms.Location=Location;
		Parms.Rotation=Rotation;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerFire_Server_OnFire),&Parms);
	}
	void UPlayerFire::StaticRegisterNativesUPlayerFire()
	{
		UClass* Class = UPlayerFire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_OnFire", &UPlayerFire::execServer_OnFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerFire_eventServer_OnFire_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerFire_eventServer_OnFire_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerFire, nullptr, "Server_OnFire", nullptr, nullptr, sizeof(PlayerFire_eventServer_OnFire_Parms), Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerFire_Server_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerFire_Server_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerFire_NoRegister()
	{
		return UPlayerFire::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_firePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_nn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerFire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerFire_Server_OnFire, "Server_OnFire" }, // 26611781
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition = { "firePosition", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerFire, firePosition), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_fireDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_firePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFire_Statics::ClassParams = {
		&UPlayerFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerFire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPlayerFire, 756362342);
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
