// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisIsFine_init() {}
	THISISFINE_API UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature();
	THISISFINE_API UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ThisIsFine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ThisIsFine()
	{
		if (!Z_Registration_Info_UPackage__Script_ThisIsFine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ThisIsFine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1C66B528,
				0x9F642863,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ThisIsFine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ThisIsFine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ThisIsFine(Z_Construct_UPackage__Script_ThisIsFine, TEXT("/Script/ThisIsFine"), Z_Registration_Info_UPackage__Script_ThisIsFine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C66B528, 0x9F642863));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
