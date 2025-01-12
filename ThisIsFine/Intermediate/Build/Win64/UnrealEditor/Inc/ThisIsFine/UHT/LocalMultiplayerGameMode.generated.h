// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalMultiplayerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef THISISFINE_LocalMultiplayerGameMode_generated_h
#error "LocalMultiplayerGameMode.generated.h already included, missing '#pragma once' in LocalMultiplayerGameMode.h"
#endif
#define THISISFINE_LocalMultiplayerGameMode_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_9_DELEGATE \
THISISFINE_API void FOnGameOver_DelegateWrapper(const FMulticastScriptDelegate& OnGameOver);


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCharacterDeath); \
	DECLARE_FUNCTION(execGameOver);


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocalMultiplayerGameMode(); \
	friend struct Z_Construct_UClass_ALocalMultiplayerGameMode_Statics; \
public: \
	DECLARE_CLASS(ALocalMultiplayerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(ALocalMultiplayerGameMode)


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALocalMultiplayerGameMode(ALocalMultiplayerGameMode&&); \
	ALocalMultiplayerGameMode(const ALocalMultiplayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocalMultiplayerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocalMultiplayerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocalMultiplayerGameMode) \
	NO_API virtual ~ALocalMultiplayerGameMode();


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_11_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class ALocalMultiplayerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
