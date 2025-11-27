// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diablo/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}

// Begin Cross Module References
DIABLO_API UClass* Z_Construct_UClass_UAttributeComponent();
DIABLO_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
DIABLO_API UEnum* Z_Construct_UEnum_Diablo_EAttributeType();
DIABLO_API UFunction* Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature();
DIABLO_API UScriptStruct* Z_Construct_UScriptStruct_FAttribute();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Diablo();
// End Cross Module References

// Begin Enum EAttributeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeType;
static UEnum* EAttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Diablo_EAttributeType, (UObject*)Z_Construct_UPackage__Script_Diablo(), TEXT("EAttributeType"));
	}
	return Z_Registration_Info_UEnum_EAttributeType.OuterSingleton;
}
template<> DIABLO_API UEnum* StaticEnum<EAttributeType>()
{
	return EAttributeType_StaticEnum();
}
struct Z_Construct_UEnum_Diablo_EAttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Intelligence.DisplayName", "Intelligence" },
		{ "Intelligence.Name", "EAttributeType::Intelligence" },
		{ "Mana.DisplayName", "Mana" },
		{ "Mana.Name", "EAttributeType::Mana" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
		{ "Vie.DisplayName", "Vie" },
		{ "Vie.Name", "EAttributeType::Vie" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttributeType::Vie", (int64)EAttributeType::Vie },
		{ "EAttributeType::Mana", (int64)EAttributeType::Mana },
		{ "EAttributeType::Intelligence", (int64)EAttributeType::Intelligence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Diablo_EAttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Diablo,
	nullptr,
	"EAttributeType",
	"EAttributeType",
	Z_Construct_UEnum_Diablo_EAttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Diablo_EAttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Diablo_EAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Diablo_EAttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Diablo_EAttributeType()
{
	if (!Z_Registration_Info_UEnum_EAttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeType.InnerSingleton, Z_Construct_UEnum_Diablo_EAttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttributeType.InnerSingleton;
}
// End Enum EAttributeType

// Begin ScriptStruct FAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Attribute;
class UScriptStruct* FAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttribute, (UObject*)Z_Construct_UPackage__Script_Diablo(), TEXT("Attribute"));
	}
	return Z_Registration_Info_UScriptStruct_Attribute.OuterSingleton;
}
template<> DIABLO_API UScriptStruct* StaticStruct<FAttribute>()
{
	return FAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttribute, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttribute, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttribute_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
	nullptr,
	&NewStructOps,
	"Attribute",
	Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::PropPointers),
	sizeof(FAttribute),
	alignof(FAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton, Z_Construct_UScriptStruct_FAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Attribute.InnerSingleton;
}
// End ScriptStruct FAttribute

// Begin Delegate FOnAttributeChanged
struct Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_Diablo_eventOnAttributeChanged_Parms
	{
		EAttributeType AttributeType;
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Diablo_eventOnAttributeChanged_Parms, AttributeType), Z_Construct_UEnum_Diablo_EAttributeType, METADATA_PARAMS(0, nullptr) }; // 3191604887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Diablo_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Diablo, nullptr, "OnAttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::_Script_Diablo_eventOnAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::_Script_Diablo_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, EAttributeType AttributeType, int32 NewValue)
{
	struct _Script_Diablo_eventOnAttributeChanged_Parms
	{
		EAttributeType AttributeType;
		int32 NewValue;
	};
	_Script_Diablo_eventOnAttributeChanged_Parms Parms;
	Parms.AttributeType=AttributeType;
	Parms.NewValue=NewValue;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttributeChanged

// Begin Class UAttributeComponent Function DecreaseAttribute
struct Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics
{
	struct AttributeComponent_eventDecreaseAttribute_Parms
	{
		EAttributeType AttributeType;
		int32 Points;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "CPP_Default_Points", "1" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventDecreaseAttribute_Parms, AttributeType), Z_Construct_UEnum_Diablo_EAttributeType, METADATA_PARAMS(0, nullptr) }; // 3191604887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventDecreaseAttribute_Parms, Points), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AttributeComponent_eventDecreaseAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttributeComponent_eventDecreaseAttribute_Parms), &Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "DecreaseAttribute", nullptr, nullptr, Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::AttributeComponent_eventDecreaseAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::AttributeComponent_eventDecreaseAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execDecreaseAttribute)
{
	P_GET_ENUM(EAttributeType,Z_Param_AttributeType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecreaseAttribute(EAttributeType(Z_Param_AttributeType),Z_Param_Points);
	P_NATIVE_END;
}
// End Class UAttributeComponent Function DecreaseAttribute

// Begin Class UAttributeComponent Function DisplayAttributesDebug
struct Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "DisplayAttributesDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execDisplayAttributesDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayAttributesDebug();
	P_NATIVE_END;
}
// End Class UAttributeComponent Function DisplayAttributesDebug

// Begin Class UAttributeComponent Function GetAttribute
struct Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics
{
	struct AttributeComponent_eventGetAttribute_Parms
	{
		EAttributeType AttributeType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventGetAttribute_Parms, AttributeType), Z_Construct_UEnum_Diablo_EAttributeType, METADATA_PARAMS(0, nullptr) }; // 3191604887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventGetAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::AttributeComponent_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::AttributeComponent_eventGetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeComponent_GetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execGetAttribute)
{
	P_GET_ENUM(EAttributeType,Z_Param_AttributeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttribute(EAttributeType(Z_Param_AttributeType));
	P_NATIVE_END;
}
// End Class UAttributeComponent Function GetAttribute

// Begin Class UAttributeComponent Function GetAvailablePoints
struct Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics
{
	struct AttributeComponent_eventGetAvailablePoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventGetAvailablePoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "GetAvailablePoints", nullptr, nullptr, Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::AttributeComponent_eventGetAvailablePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::AttributeComponent_eventGetAvailablePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execGetAvailablePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvailablePoints();
	P_NATIVE_END;
}
// End Class UAttributeComponent Function GetAvailablePoints

// Begin Class UAttributeComponent Function GetMaxAttribute
struct Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics
{
	struct AttributeComponent_eventGetMaxAttribute_Parms
	{
		EAttributeType AttributeType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventGetMaxAttribute_Parms, AttributeType), Z_Construct_UEnum_Diablo_EAttributeType, METADATA_PARAMS(0, nullptr) }; // 3191604887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventGetMaxAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "GetMaxAttribute", nullptr, nullptr, Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::AttributeComponent_eventGetMaxAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::AttributeComponent_eventGetMaxAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execGetMaxAttribute)
{
	P_GET_ENUM(EAttributeType,Z_Param_AttributeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAttribute(EAttributeType(Z_Param_AttributeType));
	P_NATIVE_END;
}
// End Class UAttributeComponent Function GetMaxAttribute

// Begin Class UAttributeComponent Function IncreaseAttribute
struct Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics
{
	struct AttributeComponent_eventIncreaseAttribute_Parms
	{
		EAttributeType AttributeType;
		int32 Points;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "CPP_Default_Points", "1" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_AttributeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventIncreaseAttribute_Parms, AttributeType), Z_Construct_UEnum_Diablo_EAttributeType, METADATA_PARAMS(0, nullptr) }; // 3191604887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributeComponent_eventIncreaseAttribute_Parms, Points), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AttributeComponent_eventIncreaseAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttributeComponent_eventIncreaseAttribute_Parms), &Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_AttributeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "IncreaseAttribute", nullptr, nullptr, Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::AttributeComponent_eventIncreaseAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::AttributeComponent_eventIncreaseAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execIncreaseAttribute)
{
	P_GET_ENUM(EAttributeType,Z_Param_AttributeType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IncreaseAttribute(EAttributeType(Z_Param_AttributeType),Z_Param_Points);
	P_NATIVE_END;
}
// End Class UAttributeComponent Function IncreaseAttribute

// Begin Class UAttributeComponent Function ResetAttributes
struct Z_Construct_UFunction_UAttributeComponent_ResetAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeComponent_ResetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeComponent, nullptr, "ResetAttributes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeComponent_ResetAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributeComponent_ResetAttributes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAttributeComponent_ResetAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeComponent_ResetAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributeComponent::execResetAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAttributes();
	P_NATIVE_END;
}
// End Class UAttributeComponent Function ResetAttributes

// Begin Class UAttributeComponent
void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
{
	UClass* Class = UAttributeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseAttribute", &UAttributeComponent::execDecreaseAttribute },
		{ "DisplayAttributesDebug", &UAttributeComponent::execDisplayAttributesDebug },
		{ "GetAttribute", &UAttributeComponent::execGetAttribute },
		{ "GetAvailablePoints", &UAttributeComponent::execGetAvailablePoints },
		{ "GetMaxAttribute", &UAttributeComponent::execGetMaxAttribute },
		{ "IncreaseAttribute", &UAttributeComponent::execIncreaseAttribute },
		{ "ResetAttributes", &UAttributeComponent::execResetAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
{
	return UAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AttributeComponent.h" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vie_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePoints_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointsPerAttribute_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vie;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailablePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointsPerAttribute;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeComponent_DecreaseAttribute, "DecreaseAttribute" }, // 1081064319
		{ &Z_Construct_UFunction_UAttributeComponent_DisplayAttributesDebug, "DisplayAttributesDebug" }, // 961669689
		{ &Z_Construct_UFunction_UAttributeComponent_GetAttribute, "GetAttribute" }, // 1066448720
		{ &Z_Construct_UFunction_UAttributeComponent_GetAvailablePoints, "GetAvailablePoints" }, // 1399366707
		{ &Z_Construct_UFunction_UAttributeComponent_GetMaxAttribute, "GetMaxAttribute" }, // 1901902115
		{ &Z_Construct_UFunction_UAttributeComponent_IncreaseAttribute, "IncreaseAttribute" }, // 3583125562
		{ &Z_Construct_UFunction_UAttributeComponent_ResetAttributes, "ResetAttributes" }, // 3979373892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Vie = { "Vie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Vie), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vie_MetaData), NewProp_Vie_MetaData) }; // 1093161627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Mana), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 1093161627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Intelligence), Z_Construct_UScriptStruct_FAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) }; // 1093161627
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AvailablePoints = { "AvailablePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, AvailablePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePoints_MetaData), NewProp_AvailablePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxPointsPerAttribute = { "MaxPointsPerAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, MaxPointsPerAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointsPerAttribute_MetaData), NewProp_MaxPointsPerAttribute_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, OnAttributeChanged), Z_Construct_UDelegateFunction_Diablo_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 3843262782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Vie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_AvailablePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxPointsPerAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_OnAttributeChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
	&UAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
}
template<> DIABLO_API UClass* StaticClass<UAttributeComponent>()
{
	return UAttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
UAttributeComponent::~UAttributeComponent() {}
// End Class UAttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttributeType_StaticEnum, TEXT("EAttributeType"), &Z_Registration_Info_UEnum_EAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191604887U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttribute::StaticStruct, Z_Construct_UScriptStruct_FAttribute_Statics::NewStructOps, TEXT("Attribute"), &Z_Registration_Info_UScriptStruct_Attribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttribute), 1093161627U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 2516314029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_2228113493(TEXT("/Script/Diablo"),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_AttributeComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
