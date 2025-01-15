// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/Public/UI/CollectableObjectEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableObjectEntry() {}

// Begin Cross Module References
THISISFINE_API UClass* Z_Construct_UClass_UCollectableObjectEntry();
THISISFINE_API UClass* Z_Construct_UClass_UCollectableObjectEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Class UCollectableObjectEntry
void UCollectableObjectEntry::StaticRegisterNativesUCollectableObjectEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectableObjectEntry);
UClass* Z_Construct_UClass_UCollectableObjectEntry_NoRegister()
{
	return UCollectableObjectEntry::StaticClass();
}
struct Z_Construct_UClass_UCollectableObjectEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/CollectableObjectEntry.h" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableObjectName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableObjectEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectableObjectEntry_Statics::NewProp_CollectableObjectName = { "CollectableObjectName", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollectableObjectEntry, CollectableObjectName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectName_MetaData), NewProp_CollectableObjectName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectableObjectEntry_Statics::NewProp_CollectableImage = { "CollectableImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollectableObjectEntry, CollectableImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableImage_MetaData), NewProp_CollectableImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectableObjectEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableObjectEntry_Statics::NewProp_CollectableObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableObjectEntry_Statics::NewProp_CollectableImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollectableObjectEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCollectableObjectEntry_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UCollectableObjectEntry, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectableObjectEntry_Statics::ClassParams = {
	&UCollectableObjectEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollectableObjectEntry_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectEntry_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectableObjectEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollectableObjectEntry()
{
	if (!Z_Registration_Info_UClass_UCollectableObjectEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectableObjectEntry.OuterSingleton, Z_Construct_UClass_UCollectableObjectEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollectableObjectEntry.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<UCollectableObjectEntry>()
{
	return UCollectableObjectEntry::StaticClass();
}
UCollectableObjectEntry::UCollectableObjectEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableObjectEntry);
UCollectableObjectEntry::~UCollectableObjectEntry() {}
// End Class UCollectableObjectEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollectableObjectEntry, UCollectableObjectEntry::StaticClass, TEXT("UCollectableObjectEntry"), &Z_Registration_Info_UClass_UCollectableObjectEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectableObjectEntry), 670572415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_2168326363(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
