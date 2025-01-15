// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameMode/MainLevelGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCollectableObjectList;
#ifdef THISISFINE_MainLevelGameMode_generated_h
#error "MainLevelGameMode.generated.h already included, missing '#pragma once' in MainLevelGameMode.h"
#endif
#define THISISFINE_MainLevelGameMode_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCollectableObjectList); \
	DECLARE_FUNCTION(execDelayedBeginPlay);


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainLevelGameMode(); \
	friend struct Z_Construct_UClass_AMainLevelGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainLevelGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(AMainLevelGameMode)


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainLevelGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainLevelGameMode(AMainLevelGameMode&&); \
	AMainLevelGameMode(const AMainLevelGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainLevelGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainLevelGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainLevelGameMode) \
	NO_API virtual ~AMainLevelGameMode();


#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_13_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class AMainLevelGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_Public_GameFramework_GameMode_MainLevelGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
