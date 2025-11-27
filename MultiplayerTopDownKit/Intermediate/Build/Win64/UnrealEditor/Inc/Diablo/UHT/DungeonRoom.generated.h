// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonRoom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIABLO_DungeonRoom_generated_h
#error "DungeonRoom.generated.h already included, missing '#pragma once' in DungeonRoom.h"
#endif
#define DIABLO_DungeonRoom_generated_h

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoorInfo_Statics; \
	DIABLO_API static class UScriptStruct* StaticStruct();


template<> DIABLO_API UScriptStruct* StaticStruct<struct FDoorInfo>();

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonRoom(); \
	friend struct Z_Construct_UClass_ADungeonRoom_Statics; \
public: \
	DECLARE_CLASS(ADungeonRoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diablo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonRoom)


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonRoom(ADungeonRoom&&); \
	ADungeonRoom(const ADungeonRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonRoom) \
	NO_API virtual ~ADungeonRoom();


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_31_PROLOG
#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIABLO_API UClass* StaticClass<class ADungeonRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h


#define FOREACH_ENUM_EROOMTYPE(op) \
	op(ERoomType::Normal) \
	op(ERoomType::Start) \
	op(ERoomType::End) \
	op(ERoomType::Boss) 

enum class ERoomType : uint8;
template<> struct TIsUEnumClass<ERoomType> { enum { Value = true }; };
template<> DIABLO_API UEnum* StaticEnum<ERoomType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
