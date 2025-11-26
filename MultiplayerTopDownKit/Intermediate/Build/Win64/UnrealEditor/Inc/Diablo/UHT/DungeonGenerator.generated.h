// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIABLO_DungeonGenerator_generated_h
#error "DungeonGenerator.generated.h already included, missing '#pragma once' in DungeonGenerator.h"
#endif
#define DIABLO_DungeonGenerator_generated_h

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomPrefab_Statics; \
	DIABLO_API static class UScriptStruct* StaticStruct();


template<> DIABLO_API UScriptStruct* StaticStruct<struct FRoomPrefab>();

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearDungeon); \
	DECLARE_FUNCTION(execGenerateDungeon);


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diablo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonGenerator(ADungeonGenerator&&); \
	ADungeonGenerator(const ADungeonGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator) \
	NO_API virtual ~ADungeonGenerator();


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_27_PROLOG
#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIABLO_API UClass* StaticClass<class ADungeonGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
