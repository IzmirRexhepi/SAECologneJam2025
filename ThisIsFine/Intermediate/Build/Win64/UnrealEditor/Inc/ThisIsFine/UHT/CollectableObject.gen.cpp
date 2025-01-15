// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/Public/Actors/CollectableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
THISISFINE_API UClass* Z_Construct_UClass_ACollectableObject();
THISISFINE_API UClass* Z_Construct_UClass_ACollectableObject_NoRegister();
THISISFINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectInfo();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin ScriptStruct FCollectInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectInfo;
class UScriptStruct* FCollectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectInfo, (UObject*)Z_Construct_UPackage__Script_ThisIsFine(), TEXT("CollectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CollectInfo.OuterSingleton;
}
template<> THISISFINE_API UScriptStruct* StaticStruct<FCollectInfo>()
{
	return FCollectInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectName_MetaData[] = {
		{ "Category", "CollectInfo" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableImage_MetaData[] = {
		{ "Category", "CollectInfo" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfHandsNeeded_MetaData[] = {
		{ "Category", "CollectInfo" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectSound_MetaData[] = {
		{ "Category", "CollectInfo" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectCollectable_MetaData[] = {
		{ "Category", "CollectInfo" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CollectableObjectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfHandsNeeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectSound;
	static void NewProp_bIsObjectCollectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectCollectable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectableObjectName = { "CollectableObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectInfo, CollectableObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectName_MetaData), NewProp_CollectableObjectName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectableImage = { "CollectableImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectInfo, CollectableImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableImage_MetaData), NewProp_CollectableImage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_NumberOfHandsNeeded = { "NumberOfHandsNeeded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectInfo, NumberOfHandsNeeded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfHandsNeeded_MetaData), NewProp_NumberOfHandsNeeded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectSound = { "CollectSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectInfo, CollectSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectSound_MetaData), NewProp_CollectSound_MetaData) };
void Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_bIsObjectCollectable_SetBit(void* Obj)
{
	((FCollectInfo*)Obj)->bIsObjectCollectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_bIsObjectCollectable = { "bIsObjectCollectable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCollectInfo), &Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_bIsObjectCollectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectCollectable_MetaData), NewProp_bIsObjectCollectable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectableObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectableImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_NumberOfHandsNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_CollectSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectInfo_Statics::NewProp_bIsObjectCollectable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
	nullptr,
	&NewStructOps,
	"CollectInfo",
	Z_Construct_UScriptStruct_FCollectInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectInfo_Statics::PropPointers),
	sizeof(FCollectInfo),
	alignof(FCollectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CollectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectInfo.InnerSingleton, Z_Construct_UScriptStruct_FCollectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectInfo.InnerSingleton;
}
// End ScriptStruct FCollectInfo

// Begin Class ACollectableObject
void ACollectableObject::StaticRegisterNativesACollectableObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectableObject);
UClass* Z_Construct_UClass_ACollectableObject_NoRegister()
{
	return ACollectableObject::StaticClass();
}
struct Z_Construct_UClass_ACollectableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/CollectableObject.h" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable Object" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable Object" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable Object" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable Object" },
		{ "ModuleRelativePath", "Public/Actors/CollectableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectableObject_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableObject, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectableObject_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableObject, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectableObject_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableObject, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACollectableObject_Statics::NewProp_CollectInfo = { "CollectInfo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableObject, CollectInfo), Z_Construct_UScriptStruct_FCollectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectInfo_MetaData), NewProp_CollectInfo_MetaData) }; // 2625490522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableObject_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableObject_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableObject_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableObject_Statics::NewProp_CollectInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACollectableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectableObject_Statics::ClassParams = {
	&ACollectableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACollectableObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACollectableObject()
{
	if (!Z_Registration_Info_UClass_ACollectableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectableObject.OuterSingleton, Z_Construct_UClass_ACollectableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACollectableObject.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<ACollectableObject>()
{
	return ACollectableObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectableObject);
ACollectableObject::~ACollectableObject() {}
// End Class ACollectableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollectInfo::StaticStruct, Z_Construct_UScriptStruct_FCollectInfo_Statics::NewStructOps, TEXT("CollectInfo"), &Z_Registration_Info_UScriptStruct_CollectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectInfo), 2625490522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACollectableObject, ACollectableObject::StaticClass, TEXT("ACollectableObject"), &Z_Registration_Info_UClass_ACollectableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectableObject), 1203115373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_306747571(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
