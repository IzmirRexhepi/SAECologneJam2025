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
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerGameMode();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerGameMode_NoRegister();
THISISFINE_API UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Delegate FOnGameOver
struct Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThisIsFine, nullptr, "OnGameOver__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameOver_DelegateWrapper(const FMulticastScriptDelegate& OnGameOver)
{
	OnGameOver.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameOver

// Begin Class ALocalMultiplayerGameMode Function GameOver
struct Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to trigger GameOver event\n" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to trigger GameOver event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalMultiplayerGameMode, nullptr, "GameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALocalMultiplayerGameMode::execGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameOver();
	P_NATIVE_END;
}
// End Class ALocalMultiplayerGameMode Function GameOver

// Begin Class ALocalMultiplayerGameMode Function HandleCharacterDeath
struct Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics
{
	struct LocalMultiplayerGameMode_eventHandleCharacterDeath_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle character death\n" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle character death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalMultiplayerGameMode_eventHandleCharacterDeath_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalMultiplayerGameMode, nullptr, "HandleCharacterDeath", nullptr, nullptr, Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::LocalMultiplayerGameMode_eventHandleCharacterDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::LocalMultiplayerGameMode_eventHandleCharacterDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALocalMultiplayerGameMode::execHandleCharacterDeath)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCharacterDeath(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class ALocalMultiplayerGameMode Function HandleCharacterDeath

// Begin Class ALocalMultiplayerGameMode
void ALocalMultiplayerGameMode::StaticRegisterNativesALocalMultiplayerGameMode()
{
	UClass* Class = ALocalMultiplayerGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GameOver", &ALocalMultiplayerGameMode::execGameOver },
		{ "HandleCharacterDeath", &ALocalMultiplayerGameMode::execHandleCharacterDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LocalMultiplayerGameMode.h" },
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameOver_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast game Over\n" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast game Over" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameOver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALocalMultiplayerGameMode_GameOver, "GameOver" }, // 308728411
		{ &Z_Construct_UFunction_ALocalMultiplayerGameMode_HandleCharacterDeath, "HandleCharacterDeath" }, // 1609378900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocalMultiplayerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::NewProp_OnGameOver = { "OnGameOver", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerGameMode, OnGameOver), Z_Construct_UDelegateFunction_ThisIsFine_OnGameOver__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameOver_MetaData), NewProp_OnGameOver_MetaData) }; // 2217071974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::NewProp_OnGameOver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_ALocalMultiplayerGameMode, ALocalMultiplayerGameMode::StaticClass, TEXT("ALocalMultiplayerGameMode"), &Z_Registration_Info_UClass_ALocalMultiplayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocalMultiplayerGameMode), 855471300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_2561736242(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
