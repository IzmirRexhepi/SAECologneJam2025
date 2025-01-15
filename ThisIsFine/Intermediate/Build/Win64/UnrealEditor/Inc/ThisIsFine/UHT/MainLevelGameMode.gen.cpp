// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/Public/GameFramework/GameMode/MainLevelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainLevelGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THISISFINE_API UClass* Z_Construct_UClass_AMainLevelGameMode();
THISISFINE_API UClass* Z_Construct_UClass_AMainLevelGameMode_NoRegister();
THISISFINE_API UClass* Z_Construct_UClass_UCollectableObjectList_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Class AMainLevelGameMode Function DelayedBeginPlay
struct Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameMode/MainLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainLevelGameMode, nullptr, "DelayedBeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainLevelGameMode::execDelayedBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayedBeginPlay();
	P_NATIVE_END;
}
// End Class AMainLevelGameMode Function DelayedBeginPlay

// Begin Class AMainLevelGameMode Function SetCollectableObjectList
struct Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics
{
	struct MainLevelGameMode_eventSetCollectableObjectList_Parms
	{
		UCollectableObjectList* CollectableObjectListToSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameMode/MainLevelGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectListToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableObjectListToSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::NewProp_CollectableObjectListToSet = { "CollectableObjectListToSet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainLevelGameMode_eventSetCollectableObjectList_Parms, CollectableObjectListToSet), Z_Construct_UClass_UCollectableObjectList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectListToSet_MetaData), NewProp_CollectableObjectListToSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::NewProp_CollectableObjectListToSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainLevelGameMode, nullptr, "SetCollectableObjectList", nullptr, nullptr, Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::MainLevelGameMode_eventSetCollectableObjectList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::MainLevelGameMode_eventSetCollectableObjectList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainLevelGameMode::execSetCollectableObjectList)
{
	P_GET_OBJECT(UCollectableObjectList,Z_Param_CollectableObjectListToSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollectableObjectList(Z_Param_CollectableObjectListToSet);
	P_NATIVE_END;
}
// End Class AMainLevelGameMode Function SetCollectableObjectList

// Begin Class AMainLevelGameMode
void AMainLevelGameMode::StaticRegisterNativesAMainLevelGameMode()
{
	UClass* Class = AMainLevelGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DelayedBeginPlay", &AMainLevelGameMode::execDelayedBeginPlay },
		{ "SetCollectableObjectList", &AMainLevelGameMode::execSetCollectableObjectList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainLevelGameMode);
UClass* Z_Construct_UClass_AMainLevelGameMode_NoRegister()
{
	return AMainLevelGameMode::StaticClass();
}
struct Z_Construct_UClass_AMainLevelGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameMode/MainLevelGameMode.h" },
		{ "ModuleRelativePath", "Public/GameFramework/GameMode/MainLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCollectableObjects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Main Level Game Mode" },
		{ "ModuleRelativePath", "Public/GameFramework/GameMode/MainLevelGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Main Level Game Mode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/GameMode/MainLevelGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCollectableObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableObjectList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainLevelGameMode_DelayedBeginPlay, "DelayedBeginPlay" }, // 3848664342
		{ &Z_Construct_UFunction_AMainLevelGameMode_SetCollectableObjectList, "SetCollectableObjectList" }, // 733298897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainLevelGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainLevelGameMode_Statics::NewProp_NumberOfCollectableObjects = { "NumberOfCollectableObjects", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainLevelGameMode, NumberOfCollectableObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfCollectableObjects_MetaData), NewProp_NumberOfCollectableObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainLevelGameMode_Statics::NewProp_CollectableObjectList = { "CollectableObjectList", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainLevelGameMode, CollectableObjectList), Z_Construct_UClass_UCollectableObjectList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectList_MetaData), NewProp_CollectableObjectList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainLevelGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelGameMode_Statics::NewProp_NumberOfCollectableObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelGameMode_Statics::NewProp_CollectableObjectList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainLevelGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainLevelGameMode_Statics::ClassParams = {
	&AMainLevelGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainLevelGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainLevelGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainLevelGameMode()
{
	if (!Z_Registration_Info_UClass_AMainLevelGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainLevelGameMode.OuterSingleton, Z_Construct_UClass_AMainLevelGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainLevelGameMode.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<AMainLevelGameMode>()
{
	return AMainLevelGameMode::StaticClass();
}
AMainLevelGameMode::AMainLevelGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainLevelGameMode);
AMainLevelGameMode::~AMainLevelGameMode() {}
// End Class AMainLevelGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainLevelGameMode, AMainLevelGameMode::StaticClass, TEXT("AMainLevelGameMode"), &Z_Registration_Info_UClass_AMainLevelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainLevelGameMode), 43461632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_649315246(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
