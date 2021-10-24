// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYNETWORKSTUDY_MyNetworkStudyProjectile_generated_h
#error "MyNetworkStudyProjectile.generated.h already included, missing '#pragma once' in MyNetworkStudyProjectile.h"
#endif
#define MYNETWORKSTUDY_MyNetworkStudyProjectile_generated_h

#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_SPARSE_DATA
#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNetworkStudyProjectile(); \
	friend struct Z_Construct_UClass_AMyNetworkStudyProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkStudyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyNetworkStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkStudyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyNetworkStudyProjectile(); \
	friend struct Z_Construct_UClass_AMyNetworkStudyProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkStudyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyNetworkStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkStudyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNetworkStudyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNetworkStudyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkStudyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkStudyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkStudyProjectile(AMyNetworkStudyProjectile&&); \
	NO_API AMyNetworkStudyProjectile(const AMyNetworkStudyProjectile&); \
public:


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkStudyProjectile(AMyNetworkStudyProjectile&&); \
	NO_API AMyNetworkStudyProjectile(const AMyNetworkStudyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkStudyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkStudyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyNetworkStudyProjectile)


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyNetworkStudyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyNetworkStudyProjectile, ProjectileMovement); }


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_12_PROLOG
#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_SPARSE_DATA \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_RPC_WRAPPERS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_INCLASS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_SPARSE_DATA \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYNETWORKSTUDY_API UClass* StaticClass<class AMyNetworkStudyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
