// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThisIsFine/LocalMultiplayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMultiplayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerCharacter();
THISISFINE_API UClass* Z_Construct_UClass_ALocalMultiplayerCharacter_NoRegister();
THISISFINE_API UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ThisIsFine();
// End Cross Module References

// Begin Delegate FOnCharacterDeath
struct Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics
{
	struct _Script_ThisIsFine_eventOnCharacterDeath_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ThisIsFine_eventOnCharacterDeath_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThisIsFine, nullptr, "OnCharacterDeath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::_Script_ThisIsFine_eventOnCharacterDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::_Script_ThisIsFine_eventOnCharacterDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCharacterDeath_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDeath, APlayerController* PlayerController)
{
	struct _Script_ThisIsFine_eventOnCharacterDeath_Parms
	{
		APlayerController* PlayerController;
	};
	_Script_ThisIsFine_eventOnCharacterDeath_Parms Parms;
	Parms.PlayerController=PlayerController;
	OnCharacterDeath.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCharacterDeath

// Begin Class ALocalMultiplayerCharacter
void ALocalMultiplayerCharacter::StaticRegisterNativesALocalMultiplayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocalMultiplayerCharacter);
UClass* Z_Construct_UClass_ALocalMultiplayerCharacter_NoRegister()
{
	return ALocalMultiplayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ALocalMultiplayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LocalMultiplayerCharacter.h" },
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Punch Input Action */" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Punch Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlots_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inventory\n" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotAmount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDeath_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate to broadcast death\n" },
#endif
		{ "ModuleRelativePath", "LocalMultiplayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to broadcast death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotAmount;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocalMultiplayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_PunchAction = { "PunchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, PunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchAction_MetaData), NewProp_PunchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
void Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((ALocalMultiplayerCharacter*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALocalMultiplayerCharacter), &Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_ItemSlots_Inner = { "ItemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_ItemSlots = { "ItemSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, ItemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlots_MetaData), NewProp_ItemSlots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_SlotAmount = { "SlotAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, SlotAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotAmount_MetaData), NewProp_SlotAmount_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_OnPlayerDeath = { "OnPlayerDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalMultiplayerCharacter, OnPlayerDeath), Z_Construct_UDelegateFunction_ThisIsFine_OnCharacterDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDeath_MetaData), NewProp_OnPlayerDeath_MetaData) }; // 543157485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_PunchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_ItemSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_ItemSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_SlotAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::NewProp_OnPlayerDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ThisIsFine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::ClassParams = {
	&ALocalMultiplayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocalMultiplayerCharacter()
{
	if (!Z_Registration_Info_UClass_ALocalMultiplayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocalMultiplayerCharacter.OuterSingleton, Z_Construct_UClass_ALocalMultiplayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocalMultiplayerCharacter.OuterSingleton;
}
template<> THISISFINE_API UClass* StaticClass<ALocalMultiplayerCharacter>()
{
	return ALocalMultiplayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalMultiplayerCharacter);
ALocalMultiplayerCharacter::~ALocalMultiplayerCharacter() {}
// End Class ALocalMultiplayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocalMultiplayerCharacter, ALocalMultiplayerCharacter::StaticClass, TEXT("ALocalMultiplayerCharacter"), &Z_Registration_Info_UClass_ALocalMultiplayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocalMultiplayerCharacter), 3722076062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_122343464(TEXT("/Script/ThisIsFine"),
	Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
