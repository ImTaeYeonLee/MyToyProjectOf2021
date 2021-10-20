// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TY_Function/Public/GrabActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabActorComponent() {}
// Cross Module References
	TY_FUNCTION_API UEnum* Z_Construct_UEnum_TY_Function_EGrabType();
	UPackage* Z_Construct_UPackage__Script_TY_Function();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister();
	TY_FUNCTION_API UClass* Z_Construct_UClass_UGrabActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EGrabType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TY_Function_EGrabType, Z_Construct_UPackage__Script_TY_Function(), TEXT("EGrabType"));
		}
		return Singleton;
	}
	template<> TY_FUNCTION_API UEnum* StaticEnum<EGrabType>()
	{
		return EGrabType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabType(EGrabType_StaticEnum, TEXT("/Script/TY_Function"), TEXT("EGrabType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TY_Function_EGrabType_Hash() { return 790418465U; }
	UEnum* Z_Construct_UEnum_TY_Function_EGrabType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TY_Function();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabType"), 0, Get_Z_Construct_UEnum_TY_Function_EGrabType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrabType::EGT_LineType", (int64)EGrabType::EGT_LineType },
				{ "EGrabType::EGT_SweepType", (int64)EGrabType::EGT_SweepType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EGT_LineType.DisplayName", "LineType" },
				{ "EGT_LineType.Name", "EGrabType::EGT_LineType" },
				{ "EGT_SweepType.DisplayName", "SweepType" },
				{ "EGT_SweepType.Name", "EGrabType::EGT_SweepType" },
				{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TY_Function,
				nullptr,
				"EGrabType",
				"EGrabType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGrabActorComponent::StaticRegisterNativesUGrabActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister()
	{
		return UGrabActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_grabDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_myGrabType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myGrabType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_myGrabType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TY_Function,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GrabActorComponent.h" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance = { "grabDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, grabDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType = { "myGrabType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, myGrabType), Z_Construct_UEnum_TY_Function_EGrabType, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_myGrabType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabActorComponent_Statics::ClassParams = {
		&UGrabActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabActorComponent, 2259912235);
	template<> TY_FUNCTION_API UClass* StaticClass<UGrabActorComponent>()
	{
		return UGrabActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabActorComponent(Z_Construct_UClass_UGrabActorComponent, &UGrabActorComponent::StaticClass, TEXT("/Script/TY_Function"), TEXT("UGrabActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
