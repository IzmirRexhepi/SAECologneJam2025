// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Subsystem/MainLevelSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THISISFINE_MainLevelSubsystem_generated_h
#error "MainLevelSubsystem.generated.h already included, missing '#pragma once' in MainLevelSubsystem.h"
#endif
#define THISISFINE_MainLevelSubsystem_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_14_DELEGATE \
THISISFINE_API void FOnStartLevelFinished_DelegateWrapper(const FMulticastScriptDelegate& OnStartLevelFinished);


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainLevelSubsystem(); \
	friend struct Z_Construct_UClass_UMainLevelSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMainLevelSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(UMainLevelSubsystem)


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainLevelSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainLevelSubsystem(UMainLevelSubsystem&&); \
	UMainLevelSubsystem(const UMainLevelSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainLevelSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainLevelSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMainLevelSubsystem) \
	NO_API virtual ~UMainLevelSubsystem();


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_16_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class UMainLevelSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_Subsystem_MainLevelSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
