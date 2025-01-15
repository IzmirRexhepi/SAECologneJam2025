// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/Public/GameFramework/Subsystem/MainLevelSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainLevelSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
THISISFINE_API UClass* Z_Construct_UClass_UMainLevelSubsystem();
THISISFINE_API UClass* Z_Construct_UClass_UMainLevelSubsystem_NoRegister();
THISISFINE_API UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Delegate FOnStartLevelFinished
struct Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/Subsystem/MainLevelSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThisIsFine, nullptr, "OnStartLevelFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThisIsFine_OnStartLevelFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartLevelFinished_DelegateWrapper(const FMulticastScriptDelegate& OnStartLevelFinished)
{
	OnStartLevelFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStartLevelFinished

// Begin Class UMainLevelSubsystem
void UMainLevelSubsystem::StaticRegisterNativesUMainLevelSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainLevelSubsystem);
UClass* Z_Construct_UClass_UMainLevelSubsystem_NoRegister()
{
	return UMainLevelSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMainLevelSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/Subsystem/MainLevelSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameFramework/Subsystem/MainLevelSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainLevelSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainLevelSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainLevelSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainLevelSubsystem_Statics::ClassParams = {
	&UMainLevelSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainLevelSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainLevelSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainLevelSubsystem()
{
	if (!Z_Registration_Info_UClass_UMainLevelSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainLevelSubsystem.OuterSingleton, Z_Construct_UClass_UMainLevelSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainLevelSubsystem.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<UMainLevelSubsystem>()
{
	return UMainLevelSubsystem::StaticClass();
}
UMainLevelSubsystem::UMainLevelSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainLevelSubsystem);
UMainLevelSubsystem::~UMainLevelSubsystem() {}
// End Class UMainLevelSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainLevelSubsystem, UMainLevelSubsystem::StaticClass, TEXT("UMainLevelSubsystem"), &Z_Registration_Info_UClass_UMainLevelSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainLevelSubsystem), 1145120729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_1919997797(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
