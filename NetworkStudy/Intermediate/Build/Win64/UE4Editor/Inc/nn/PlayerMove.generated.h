// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NN_PlayerMove_generated_h
#error "PlayerMove.generated.h already included, missing '#pragma once' in PlayerMove.h"
#endif
#define NN_PlayerMove_generated_h

#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_SPARSE_DATA
#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_RPC_WRAPPERS
#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMove(); \
	friend struct Z_Construct_UClass_UPlayerMove_Statics; \
public: \
	DECLARE_CLASS(UPlayerMove, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMove)


#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMove(); \
	friend struct Z_Construct_UClass_UPlayerMove_Statics; \
public: \
	DECLARE_CLASS(UPlayerMove, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMove)


#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMove(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMove(UPlayerMove&&); \
	NO_API UPlayerMove(const UPlayerMove&); \
public:


#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMove(UPlayerMove&&); \
	NO_API UPlayerMove(const UPlayerMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMove); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMove); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerMove)


#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_PRIVATE_PROPERTY_OFFSET
#define NetworkStudy_Source_nn_Public_PlayerMove_h_12_PROLOG
#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_RPC_WRAPPERS \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_INCLASS \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkStudy_Source_nn_Public_PlayerMove_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_INCLASS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_PlayerMove_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NN_API UClass* StaticClass<class UPlayerMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkStudy_Source_nn_Public_PlayerMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
