// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diablo/DungeonGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIABLO_API UClass* Z_Construct_UClass_ADungeonGenerator();
DIABLO_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
DIABLO_API UClass* Z_Construct_UClass_ADungeonRoom_NoRegister();
DIABLO_API UScriptStruct* Z_Construct_UScriptStruct_FRoomPrefab();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Diablo();
// End Cross Module References

// Begin ScriptStruct FRoomPrefab
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomPrefab;
class UScriptStruct* FRoomPrefab::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomPrefab.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomPrefab.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomPrefab, (UObject*)Z_Construct_UPackage__Script_Diablo(), TEXT("RoomPrefab"));
	}
	return Z_Registration_Info_UScriptStruct_RoomPrefab.OuterSingleton;
}
template<> DIABLO_API UScriptStruct* StaticStruct<FRoomPrefab>()
{
	return FRoomPrefab::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRoomPrefab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomClass_MetaData[] = {
		{ "Category", "Dungeon|Prefab" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefabSize_MetaData[] = {
		{ "Category", "Dungeon|Prefab" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWeight_MetaData[] = {
		{ "Category", "Dungeon|Prefab" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrefabSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomPrefab>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomPrefab, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADungeonRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomClass_MetaData), NewProp_RoomClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_PrefabSize = { "PrefabSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomPrefab, PrefabSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefabSize_MetaData), NewProp_PrefabSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_SpawnWeight = { "SpawnWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomPrefab, SpawnWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnWeight_MetaData), NewProp_SpawnWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomPrefab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_RoomClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_PrefabSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewProp_SpawnWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomPrefab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomPrefab_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
	nullptr,
	&NewStructOps,
	"RoomPrefab",
	Z_Construct_UScriptStruct_FRoomPrefab_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomPrefab_Statics::PropPointers),
	sizeof(FRoomPrefab),
	alignof(FRoomPrefab),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomPrefab_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomPrefab_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoomPrefab()
{
	if (!Z_Registration_Info_UScriptStruct_RoomPrefab.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomPrefab.InnerSingleton, Z_Construct_UScriptStruct_FRoomPrefab_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RoomPrefab.InnerSingleton;
}
// End ScriptStruct FRoomPrefab

// Begin Class ADungeonGenerator Function ClearDungeon
struct Z_Construct_UFunction_ADungeonGenerator_ClearDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ClearDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ClearDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ClearDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ClearDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_ClearDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ClearDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execClearDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDungeon();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function ClearDungeon

// Begin Class ADungeonGenerator Function GenerateDungeon
struct Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GenerateDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGenerateDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateDungeon();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GenerateDungeon

// Begin Class ADungeonGenerator
void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
{
	UClass* Class = ADungeonGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearDungeon", &ADungeonGenerator::execClearDungeon },
		{ "GenerateDungeon", &ADungeonGenerator::execGenerateDungeon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGenerator);
UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
{
	return ADungeonGenerator::StaticClass();
}
struct Z_Construct_UClass_ADungeonGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonGenerator.h" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomPrefabs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomCount_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSpacing_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemiesPerRoom_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreasureSpawnChance_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateOnPlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenerationInterval_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedRooms_MetaData[] = {
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRoom_MetaData[] = {
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRoom_MetaData[] = {
		{ "ModuleRelativePath", "DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPrefabs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomPrefabs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnemiesPerRoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TreasureSpawnChance;
	static void NewProp_bAutoGenerateOnPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateOnPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenerationInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedRooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartRoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndRoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_ClearDungeon, "ClearDungeon" }, // 2844046499
		{ &Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon, "GenerateDungeon" }, // 3990917537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs_Inner = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomPrefab, METADATA_PARAMS(0, nullptr) }; // 2857484487
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RoomPrefabs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomPrefabs_MetaData), NewProp_RoomPrefabs_MetaData) }; // 2857484487
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonWidth = { "DungeonWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DungeonWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonWidth_MetaData), NewProp_DungeonWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonHeight = { "DungeonHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DungeonHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonHeight_MetaData), NewProp_DungeonHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomCount = { "RoomCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RoomCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomCount_MetaData), NewProp_RoomCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomSpacing = { "RoomSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RoomSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSpacing_MetaData), NewProp_RoomSpacing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxEnemiesPerRoom = { "MaxEnemiesPerRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, MaxEnemiesPerRoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnemiesPerRoom_MetaData), NewProp_MaxEnemiesPerRoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TreasureSpawnChance = { "TreasureSpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, TreasureSpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreasureSpawnChance_MetaData), NewProp_TreasureSpawnChance_MetaData) };
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoGenerateOnPlay_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bAutoGenerateOnPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoGenerateOnPlay = { "bAutoGenerateOnPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoGenerateOnPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoGenerateOnPlay_MetaData), NewProp_bAutoGenerateOnPlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RegenerationInterval = { "RegenerationInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, RegenerationInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenerationInterval_MetaData), NewProp_RegenerationInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GeneratedRooms_Inner = { "GeneratedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADungeonRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GeneratedRooms = { "GeneratedRooms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, GeneratedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedRooms_MetaData), NewProp_GeneratedRooms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_StartRoom = { "StartRoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, StartRoom), Z_Construct_UClass_ADungeonRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRoom_MetaData), NewProp_StartRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_EndRoom = { "EndRoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, EndRoom), Z_Construct_UClass_ADungeonRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRoom_MetaData), NewProp_EndRoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomPrefabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxEnemiesPerRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TreasureSpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoGenerateOnPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RegenerationInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GeneratedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GeneratedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_StartRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_EndRoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
	&ADungeonGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGenerator()
{
	if (!Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton;
}
template<> DIABLO_API UClass* StaticClass<ADungeonGenerator>()
{
	return ADungeonGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
ADungeonGenerator::~ADungeonGenerator() {}
// End Class ADungeonGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoomPrefab::StaticStruct, Z_Construct_UScriptStruct_FRoomPrefab_Statics::NewStructOps, TEXT("RoomPrefab"), &Z_Registration_Info_UScriptStruct_RoomPrefab, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomPrefab), 2857484487U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 1481663424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_4207136436(TEXT("/Script/Diablo"),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_DungeonGenerator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
