// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/LocalCustomPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalCustomPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
THISISFINE_API UClass* Z_Construct_UClass_ALocalCustomPlayerState();
THISISFINE_API UClass* Z_Construct_UClass_ALocalCustomPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Class ALocalCustomPlayerState
void ALocalCustomPlayerState::StaticRegisterNativesALocalCustomPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocalCustomPlayerState);
UClass* Z_Construct_UClass_ALocalCustomPlayerState_NoRegister()
{
	return ALocalCustomPlayerState::StaticClass();
}
struct Z_Construct_UClass_ALocalCustomPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LocalCustomPlayerState.h" },
		{ "ModuleRelativePath", "LocalCustomPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScores_MetaData[] = {
		{ "Category", "Player State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array to store player-specific data (e.g., player scores, items, etc.)\n" },
#endif
		{ "ModuleRelativePath", "LocalCustomPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array to store player-specific data (e.g., player scores, items, etc.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsLeft_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "LocalCustomPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerScores;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocalCustomPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_PlayerScores_Inner = { "PlayerScores", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_PlayerScores = { "PlayerScores", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalCustomPlayerState, PlayerScores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScores_MetaData), NewProp_PlayerScores_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_SlotsLeft = { "SlotsLeft", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalCustomPlayerState, SlotsLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsLeft_MetaData), NewProp_SlotsLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocalCustomPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_PlayerScores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_PlayerScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalCustomPlayerState_Statics::NewProp_SlotsLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalCustomPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALocalCustomPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalCustomPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocalCustomPlayerState_Statics::ClassParams = {
	&ALocalCustomPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALocalCustomPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocalCustomPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalCustomPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocalCustomPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocalCustomPlayerState()
{
	if (!Z_Registration_Info_UClass_ALocalCustomPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocalCustomPlayerState.OuterSingleton, Z_Construct_UClass_ALocalCustomPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocalCustomPlayerState.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<ALocalCustomPlayerState>()
{
	return ALocalCustomPlayerState::StaticClass();
}
ALocalCustomPlayerState::ALocalCustomPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalCustomPlayerState);
ALocalCustomPlayerState::~ALocalCustomPlayerState() {}
// End Class ALocalCustomPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalCustomPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocalCustomPlayerState, ALocalCustomPlayerState::StaticClass, TEXT("ALocalCustomPlayerState"), &Z_Registration_Info_UClass_ALocalCustomPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocalCustomPlayerState), 2282632004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalCustomPlayerState_h_3438767750(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalCustomPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalCustomPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
