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
#ifdef MYNETWORKSTUDY_MyNetworkStudyCharacter_generated_h
#error "MyNetworkStudyCharacter.generated.h already included, missing '#pragma once' in MyNetworkStudyCharacter.h"
#endif
#define MYNETWORKSTUDY_MyNetworkStudyCharacter_generated_h

#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_SPARSE_DATA
#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_RPC_WRAPPERS \
	virtual bool Server_OnFire_Validate(FVector , FRotator ); \
	virtual void Server_OnFire_Implementation(FVector Location, FRotator Rotation); \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServer_OnFire);


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_EVENT_PARMS \
	struct MyNetworkStudyCharacter_eventServer_OnFire_Parms \
	{ \
		FVector Location; \
		FRotator Rotation; \
	};


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_CALLBACK_WRAPPERS
#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNetworkStudyCharacter(); \
	friend struct Z_Construct_UClass_AMyNetworkStudyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkStudyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyNetworkStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkStudyCharacter)


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyNetworkStudyCharacter(); \
	friend struct Z_Construct_UClass_AMyNetworkStudyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkStudyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyNetworkStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkStudyCharacter)


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNetworkStudyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNetworkStudyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkStudyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkStudyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkStudyCharacter(AMyNetworkStudyCharacter&&); \
	NO_API AMyNetworkStudyCharacter(const AMyNetworkStudyCharacter&); \
public:


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkStudyCharacter(AMyNetworkStudyCharacter&&); \
	NO_API AMyNetworkStudyCharacter(const AMyNetworkStudyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkStudyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkStudyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyNetworkStudyCharacter)


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMyNetworkStudyCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMyNetworkStudyCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMyNetworkStudyCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMyNetworkStudyCharacter, FirstPersonCameraComponent); }


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_17_PROLOG \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_EVENT_PARMS


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_SPARSE_DATA \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_RPC_WRAPPERS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_CALLBACK_WRAPPERS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_INCLASS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_SPARSE_DATA \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_CALLBACK_WRAPPERS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_INCLASS_NO_PURE_DECLS \
	MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYNETWORKSTUDY_API UClass* StaticClass<class AMyNetworkStudyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyNetworkStudy_Source_MyNetworkStudy_Public_MyNetworkStudyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
