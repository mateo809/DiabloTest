// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diablo/RandomSpawnerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomSpawnerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DIABLO_API UClass* Z_Construct_UClass_URandomSpawnerComponent();
DIABLO_API UClass* Z_Construct_UClass_URandomSpawnerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Diablo();
// End Cross Module References

// Begin Class URandomSpawnerComponent Function SpawnRandom
struct Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RandomSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomSpawnerComponent, nullptr, "SpawnRandom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URandomSpawnerComponent::execSpawnRandom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRandom();
	P_NATIVE_END;
}
// End Class URandomSpawnerComponent Function SpawnRandom

// Begin Class URandomSpawnerComponent
void URandomSpawnerComponent::StaticRegisterNativesURandomSpawnerComponent()
{
	UClass* Class = URandomSpawnerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnRandom", &URandomSpawnerComponent::execSpawnRandom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomSpawnerComponent);
UClass* Z_Construct_UClass_URandomSpawnerComponent_NoRegister()
{
	return URandomSpawnerComponent::StaticClass();
}
struct Z_Construct_UClass_URandomSpawnerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RandomSpawnerComponent.h" },
		{ "ModuleRelativePath", "RandomSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RandomSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RandomSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnerClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "RandomSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChestClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemySpawnerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomSpawnerComponent_SpawnRandom, "SpawnRandom" }, // 3730678004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomSpawnerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomSpawnerComponent, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_ChestClass = { "ChestClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomSpawnerComponent, ChestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestClass_MetaData), NewProp_ChestClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_EnemySpawnerClass = { "EnemySpawnerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomSpawnerComponent, EnemySpawnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawnerClass_MetaData), NewProp_EnemySpawnerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomSpawnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_ChestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomSpawnerComponent_Statics::NewProp_EnemySpawnerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomSpawnerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URandomSpawnerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Diablo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomSpawnerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomSpawnerComponent_Statics::ClassParams = {
	&URandomSpawnerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URandomSpawnerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URandomSpawnerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URandomSpawnerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URandomSpawnerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URandomSpawnerComponent()
{
	if (!Z_Registration_Info_UClass_URandomSpawnerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomSpawnerComponent.OuterSingleton, Z_Construct_UClass_URandomSpawnerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URandomSpawnerComponent.OuterSingleton;
}
template<> DIABLO_API UClass* StaticClass<URandomSpawnerComponent>()
{
	return URandomSpawnerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URandomSpawnerComponent);
URandomSpawnerComponent::~URandomSpawnerComponent() {}
// End Class URandomSpawnerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URandomSpawnerComponent, URandomSpawnerComponent::StaticClass, TEXT("URandomSpawnerComponent"), &Z_Registration_Info_UClass_URandomSpawnerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomSpawnerComponent), 3954744335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_2779343795(TEXT("/Script/Diablo"),
	Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_Documents_GitHub_DiabloTest_MultiplayerTopDownKit_Source_Diablo_RandomSpawnerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
