// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAttributeType : uint8;
#ifdef DIABLO_AttributeComponent_generated_h
#error "AttributeComponent.generated.h already included, missing '#pragma once' in AttributeComponent.h"
#endif
#define DIABLO_AttributeComponent_generated_h

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttribute_Statics; \
	DIABLO_API static class UScriptStruct* StaticStruct();


template<> DIABLO_API UScriptStruct* StaticStruct<struct FAttribute>();

#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_30_DELEGATE \
DIABLO_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, EAttributeType AttributeType, int32 NewValue);


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisplayAttributesDebug); \
	DECLARE_FUNCTION(execResetAttributes); \
	DECLARE_FUNCTION(execGetAvailablePoints); \
	DECLARE_FUNCTION(execGetMaxAttribute); \
	DECLARE_FUNCTION(execGetAttribute); \
	DECLARE_FUNCTION(execDecreaseAttribute); \
	DECLARE_FUNCTION(execIncreaseAttribute);


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeComponent(); \
	friend struct Z_Construct_UClass_UAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diablo"), NO_API) \
	DECLARE_SERIALIZER(UAttributeComponent)


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributeComponent(UAttributeComponent&&); \
	UAttributeComponent(const UAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeComponent) \
	NO_API virtual ~UAttributeComponent();


#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_32_PROLOG
#define FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIABLO_API UClass* StaticClass<class UAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h


#define FOREACH_ENUM_EATTRIBUTETYPE(op) \
	op(EAttributeType::Vie) \
	op(EAttributeType::Mana) \
	op(EAttributeType::Intelligence) 

enum class EAttributeType : uint8;
template<> struct TIsUEnumClass<EAttributeType> { enum { Value = true }; };
template<> DIABLO_API UEnum* StaticEnum<EAttributeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
