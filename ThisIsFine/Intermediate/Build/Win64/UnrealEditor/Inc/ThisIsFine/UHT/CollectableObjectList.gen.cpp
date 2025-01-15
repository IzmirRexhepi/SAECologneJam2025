// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/Public/UI/CollectableObjectList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableObjectList() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
THISISFINE_API UClass* Z_Construct_UClass_UCollectableObjectList();
THISISFINE_API UClass* Z_Construct_UClass_UCollectableObjectList_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Class UCollectableObjectList
void UCollectableObjectList::StaticRegisterNativesUCollectableObjectList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectableObjectList);
UClass* Z_Construct_UClass_UCollectableObjectList_NoRegister()
{
	return UCollectableObjectList::StaticClass();
}
struct Z_Construct_UClass_UCollectableObjectList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/CollectableObjectList.h" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectsList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectableObjectEntryClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable Object List" },
		{ "ModuleRelativePath", "Public/UI/CollectableObjectList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectableObjectsList;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CollectableObjectEntryClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableObjectList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectableObjectList_Statics::NewProp_CollectableObjectsList = { "CollectableObjectsList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollectableObjectList, CollectableObjectsList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectsList_MetaData), NewProp_CollectableObjectsList_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCollectableObjectList_Statics::NewProp_CollectableObjectEntryClass = { "CollectableObjectEntryClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollectableObjectList, CollectableObjectEntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectableObjectEntryClass_MetaData), NewProp_CollectableObjectEntryClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectableObjectList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableObjectList_Statics::NewProp_CollectableObjectsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableObjectList_Statics::NewProp_CollectableObjectEntryClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollectableObjectList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectableObjectList_Statics::ClassParams = {
	&UCollectableObjectList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollectableObjectList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectList_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableObjectList_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectableObjectList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollectableObjectList()
{
	if (!Z_Registration_Info_UClass_UCollectableObjectList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectableObjectList.OuterSingleton, Z_Construct_UClass_UCollectableObjectList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollectableObjectList.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<UCollectableObjectList>()
{
	return UCollectableObjectList::StaticClass();
}
UCollectableObjectList::UCollectableObjectList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableObjectList);
UCollectableObjectList::~UCollectableObjectList() {}
// End Class UCollectableObjectList

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollectableObjectList, UCollectableObjectList::StaticClass, TEXT("UCollectableObjectList"), &Z_Registration_Info_UClass_UCollectableObjectList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectableObjectList), 2509313274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectList_h_3506735279(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
