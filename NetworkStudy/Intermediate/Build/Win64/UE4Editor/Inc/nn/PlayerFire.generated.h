// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef NN_PlayerFire_generated_h
#error "PlayerFire.generated.h already included, missing '#pragma once' in PlayerFire.h"
#endif
#define NN_PlayerFire_generated_h

#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_SPARSE_DATA
#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_RPC_WRAPPERS \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector Location, FRotator Rotation); \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_EVENT_PARMS \
	struct PlayerFire_eventServer_OnFire_Parms \
	{ \
		FVector Location; \
		FRotator Rotation; \
	};


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_CALLBACK_WRAPPERS
#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerFire(); \
	friend struct Z_Construct_UClass_UPlayerFire_Statics; \
public: \
	DECLARE_CLASS(UPlayerFire, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(UPlayerFire)


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerFire(); \
	friend struct Z_Construct_UClass_UPlayerFire_Statics; \
public: \
	DECLARE_CLASS(UPlayerFire, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(UPlayerFire)


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerFire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerFire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerFire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerFire(UPlayerFire&&); \
	NO_API UPlayerFire(const UPlayerFire&); \
public:


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerFire(UPlayerFire&&); \
	NO_API UPlayerFire(const UPlayerFire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerFire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerFire)


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_PRIVATE_PROPERTY_OFFSET
#define NetworkStudy_Source_nn_Public_PlayerFire_h_11_PROLOG \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_EVENT_PARMS


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_RPC_WRAPPERS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_CALLBACK_WRAPPERS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_INCLASS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkStudy_Source_nn_Public_PlayerFire_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_CALLBACK_WRAPPERS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_INCLASS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_PlayerFire_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NN_API UClass* StaticClass<class UPlayerFire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkStudy_Source_nn_Public_PlayerFire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
