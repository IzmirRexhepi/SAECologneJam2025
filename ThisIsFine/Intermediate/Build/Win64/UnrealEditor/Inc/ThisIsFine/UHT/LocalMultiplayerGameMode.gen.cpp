// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/LocalMultiplayerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMultiplayerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerGameMode();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Class ALocalMultiplayerGameMode
void ALocalMultiplayerGameMode::StaticRegisterNativesALocalMultiplayerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocalMultiplayerGameMode);
UClass* Z_Construct_UClass_ALocalMultiplayerGameMode_NoRegister()
{
	return ALocalMultiplayerGameMode::StaticClass();
}
struct Z_Construct_UClass_ALocalMultiplayerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LocalMultiplayerGameMode.h" },
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocalMultiplayerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::ClassParams = {
	&ALocalMultiplayerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocalMultiplayerGameMode()
{
	if (!Z_Registration_Info_UClass_ALocalMultiplayerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocalMultiplayerGameMode.OuterSingleton, Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocalMultiplayerGameMode.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<ALocalMultiplayerGameMode>()
{
	return ALocalMultiplayerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalMultiplayerGameMode);
ALocalMultiplayerGameMode::~ALocalMultiplayerGameMode() {}
// End Class ALocalMultiplayerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocalMultiplayerGameMode, ALocalMultiplayerGameMode::StaticClass, TEXT("ALocalMultiplayerGameMode"), &Z_Registration_Info_UClass_ALocalMultiplayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocalMultiplayerGameMode), 2917387002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_1666494992(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
