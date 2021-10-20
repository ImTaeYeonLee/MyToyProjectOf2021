// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NN_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define NN_Bullet_generated_h

#define NetworkStudy_Source_nn_Public_Bullet_h_12_SPARSE_DATA
#define NetworkStudy_Source_nn_Public_Bullet_h_12_RPC_WRAPPERS
#define NetworkStudy_Source_nn_Public_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkStudy_Source_nn_Public_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define NetworkStudy_Source_nn_Public_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/nn"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define NetworkStudy_Source_nn_Public_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define NetworkStudy_Source_nn_Public_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define NetworkStudy_Source_nn_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET
#define NetworkStudy_Source_nn_Public_Bullet_h_9_PROLOG
#define NetworkStudy_Source_nn_Public_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_Bullet_h_12_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_Bullet_h_12_RPC_WRAPPERS \
	NetworkStudy_Source_nn_Public_Bullet_h_12_INCLASS \
	NetworkStudy_Source_nn_Public_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkStudy_Source_nn_Public_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkStudy_Source_nn_Public_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	NetworkStudy_Source_nn_Public_Bullet_h_12_SPARSE_DATA \
	NetworkStudy_Source_nn_Public_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	NetworkStudy_Source_nn_Public_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NN_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkStudy_Source_nn_Public_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
