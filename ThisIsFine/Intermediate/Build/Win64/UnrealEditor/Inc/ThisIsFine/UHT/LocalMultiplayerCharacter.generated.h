// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalMultiplayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef THISISFINE_LocalMultiplayerCharacter_generated_h
#error "LocalMultiplayerCharacter.generated.h already included, missing '#pragma once' in LocalMultiplayerCharacter.h"
#endif
#define THISISFINE_LocalMultiplayerCharacter_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_10_DELEGATE \
THISISFINE_API void FOnCharacterDeath_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDeath, APlayerController* PlayerController);


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocalMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_ALocalMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ALocalMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(ALocalMultiplayerCharacter)


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALocalMultiplayerCharacter(ALocalMultiplayerCharacter&&); \
	ALocalMultiplayerCharacter(const ALocalMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocalMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocalMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocalMultiplayerCharacter) \
	NO_API virtual ~ALocalMultiplayerCharacter();


#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_12_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class ALocalMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_LocalMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
