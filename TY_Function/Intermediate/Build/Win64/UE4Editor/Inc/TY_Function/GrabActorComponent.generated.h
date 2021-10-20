// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TY_FUNCTION_GrabActorComponent_generated_h
#error "GrabActorComponent.generated.h already included, missing '#pragma once' in GrabActorComponent.h"
#endif
#define TY_FUNCTION_GrabActorComponent_generated_h

#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_SPARSE_DATA
#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_RPC_WRAPPERS
#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabActorComponent(); \
	friend struct Z_Construct_UClass_UGrabActorComponent_Statics; \
public: \
	DECLARE_CLASS(UGrabActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TY_Function"), NO_API) \
	DECLARE_SERIALIZER(UGrabActorComponent)


#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGrabActorComponent(); \
	friend struct Z_Construct_UClass_UGrabActorComponent_Statics; \
public: \
	DECLARE_CLASS(UGrabActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TY_Function"), NO_API) \
	DECLARE_SERIALIZER(UGrabActorComponent)


#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabActorComponent(UGrabActorComponent&&); \
	NO_API UGrabActorComponent(const UGrabActorComponent&); \
public:


#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabActorComponent(UGrabActorComponent&&); \
	NO_API UGrabActorComponent(const UGrabActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabActorComponent)


#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_17_PROLOG
#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_SPARSE_DATA \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_RPC_WRAPPERS \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_INCLASS \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_SPARSE_DATA \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_INCLASS_NO_PURE_DECLS \
	TY_Function_Source_TY_Function_Public_GrabActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TY_FUNCTION_API UClass* StaticClass<class UGrabActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TY_Function_Source_TY_Function_Public_GrabActorComponent_h


#define FOREACH_ENUM_EGRABTYPE(op) \
	op(EGrabType::EGT_LineType) \
	op(EGrabType::EGT_SweepType) 

enum class EGrabType : uint8;
template<> TY_FUNCTION_API UEnum* StaticEnum<EGrabType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
