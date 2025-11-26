// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diablo/DungeonRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonRoom() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIABLO_API UClass* Z_Construct_UClass_ADungeonRoom();
DIABLO_API UClass* Z_Construct_UClass_ADungeonRoom_NoRegister();
DIABLO_API UEnum* Z_Construct_UEnum_Diablo_ERoomType();
DIABLO_API UScriptStruct* Z_Construct_UScriptStruct_FDoorInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Diablo();
// End Cross Module References

// Begin Enum ERoomType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoomType;
static UEnum* ERoomType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERoomType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Diablo_ERoomType, (UObject*)Z_Construct_UPackage__Script_Diablo(), TEXT("ERoomType"));
	}
	return Z_Registration_Info_UEnum_ERoomType.OuterSingleton;
}
template<> DIABLO_API UEnum* StaticEnum<ERoomType>()
{
	return ERoomType_StaticEnum();
}
struct Z_Construct_UEnum_Diablo_ERoomType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boss.DisplayName", "Boss" },
		{ "Boss.Name", "ERoomType::Boss" },
		{ "End.DisplayName", "End" },
		{ "End.Name", "ERoomType::End" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "ERoomType::Normal" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "ERoomType::Start" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoomType::Normal", (int64)ERoomType::Normal },
		{ "ERoomType::Start", (int64)ERoomType::Start },
		{ "ERoomType::End", (int64)ERoomType::End },
		{ "ERoomType::Boss", (int64)ERoomType::Boss },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Diablo_ERoomType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Diablo,
	nullptr,
	"ERoomType",
	"ERoomType",
	Z_Construct_UEnum_Diablo_ERoomType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Diablo_ERoomType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Diablo_ERoomType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Diablo_ERoomType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Diablo_ERoomType()
{
	if (!Z_Registration_Info_UEnum_ERoomType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoomType.InnerSingleton, Z_Construct_UEnum_Diablo_ERoomType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERoomType.InnerSingleton;
}
// End Enum ERoomType

// Begin ScriptStruct FDoorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoorInfo;
class UScriptStruct* FDoorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorInfo, (UObject*)Z_Construct_UPackage__Script_Diablo(), TEXT("DoorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DoorInfo.OuterSingleton;
}
template<> DIABLO_API UScriptStruct* StaticStruct<FDoorInfo>()
{
	return FDoorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorLocation_MetaData[] = {
		{ "Category", "DoorInfo" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorRotation_MetaData[] = {
		{ "Category", "DoorInfo" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoorExists_MetaData[] = {
		{ "Category", "DoorInfo" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorRotation;
	static void NewProp_bDoorExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoorExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_DoorLocation = { "DoorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorInfo, DoorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorLocation_MetaData), NewProp_DoorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_DoorRotation = { "DoorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorInfo, DoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorRotation_MetaData), NewProp_DoorRotation_MetaData) };
void Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_bDoorExists_SetBit(void* Obj)
{
	((FDoorInfo*)Obj)->bDoorExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_bDoorExists = { "bDoorExists", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDoorInfo), &Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_bDoorExists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoorExists_MetaData), NewProp_bDoorExists_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_DoorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_DoorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorInfo_Statics::NewProp_bDoorExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
	nullptr,
	&NewStructOps,
	"DoorInfo",
	Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::PropPointers),
	sizeof(FDoorInfo),
	alignof(FDoorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton, Z_Construct_UScriptStruct_FDoorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoorInfo.InnerSingleton;
}
// End ScriptStruct FDoorInfo

// Begin Class ADungeonRoom
void ADungeonRoom::StaticRegisterNativesADungeonRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonRoom);
UClass* Z_Construct_UClass_ADungeonRoom_NoRegister()
{
	return ADungeonRoom::StaticClass();
}
struct Z_Construct_UClass_ADungeonRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonRoom.h" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomBounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallPrefab_MetaData[] = {
		{ "Category", "Dungeon|Prefabs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprints des murs et portes\n" },
#endif
		{ "ModuleRelativePath", "DungeonRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprints des murs et portes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorPrefab_MetaData[] = {
		{ "Category", "Dungeon|Prefabs" },
		{ "ModuleRelativePath", "DungeonRoom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomBounds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WallPrefab;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DoorPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, RoomType), Z_Construct_UEnum_Diablo_ERoomType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) }; // 3507165643
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, RoomSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSize_MetaData), NewProp_RoomSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomWidth = { "RoomWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, RoomWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomWidth_MetaData), NewProp_RoomWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomHeight = { "RoomHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, RoomHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomHeight_MetaData), NewProp_RoomHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorInfo, METADATA_PARAMS(0, nullptr) }; // 3233290855
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 3233290855
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomBounds = { "RoomBounds", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, RoomBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomBounds_MetaData), NewProp_RoomBounds_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_WallPrefab = { "WallPrefab", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, WallPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallPrefab_MetaData), NewProp_WallPrefab_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeonRoom_Statics::NewProp_DoorPrefab = { "DoorPrefab", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonRoom, DoorPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorPrefab_MetaData), NewProp_DoorPrefab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_RoomBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_WallPrefab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonRoom_Statics::NewProp_DoorPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonRoom_Statics::ClassParams = {
	&ADungeonRoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRoom_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonRoom()
{
	if (!Z_Registration_Info_UClass_ADungeonRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonRoom.OuterSingleton, Z_Construct_UClass_ADungeonRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonRoom.OuterSingleton;
}
template<> DIABLO_API UClass* StaticClass<ADungeonRoom>()
{
	return ADungeonRoom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonRoom);
ADungeonRoom::~ADungeonRoom() {}
// End Class ADungeonRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERoomType_StaticEnum, TEXT("ERoomType"), &Z_Registration_Info_UEnum_ERoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3507165643U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDoorInfo::StaticStruct, Z_Construct_UScriptStruct_FDoorInfo_Statics::NewStructOps, TEXT("DoorInfo"), &Z_Registration_Info_UScriptStruct_DoorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorInfo), 3233290855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonRoom, ADungeonRoom::StaticClass, TEXT("ADungeonRoom"), &Z_Registration_Info_UClass_ADungeonRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonRoom), 1092173103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_4091934326(TEXT("/Script/Diablo"),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonRoom_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
