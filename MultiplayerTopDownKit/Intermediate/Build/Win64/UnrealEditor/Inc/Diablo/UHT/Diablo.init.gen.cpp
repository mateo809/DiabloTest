// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiablo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Diablo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Diablo()
	{
		if (!Z_Registration_Info_UPackage__Script_Diablo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Diablo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFBBF6F60,
				0xEF5091D7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Diablo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Diablo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Diablo(Z_Construct_UPackage__Script_Diablo, TEXT("/Script/Diablo"), Z_Registration_Info_UPackage__Script_Diablo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFBBF6F60, 0xEF5091D7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
