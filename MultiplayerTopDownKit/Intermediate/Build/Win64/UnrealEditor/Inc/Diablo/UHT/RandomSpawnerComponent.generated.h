// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RandomSpawnerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIABLO_RandomSpawnerComponent_generated_h
#error "RandomSpawnerComponent.generated.h already included, missing '#pragma once' in RandomSpawnerComponent.h"
#endif
#define DIABLO_RandomSpawnerComponent_generated_h

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandom);


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURandomSpawnerComponent(); \
	friend struct Z_Construct_UClass_URandomSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(URandomSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diablo"), NO_API) \
	DECLARE_SERIALIZER(URandomSpawnerComponent)


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URandomSpawnerComponent(URandomSpawnerComponent&&); \
	URandomSpawnerComponent(const URandomSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomSpawnerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URandomSpawnerComponent) \
	NO_API virtual ~URandomSpawnerComponent();


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_7_PROLOG
#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIABLO_API UClass* StaticClass<class URandomSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
