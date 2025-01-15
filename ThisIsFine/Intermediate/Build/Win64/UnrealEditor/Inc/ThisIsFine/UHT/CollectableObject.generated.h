// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/CollectableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THISISFINE_CollectableObject_generated_h
#error "CollectableObject.generated.h already included, missing '#pragma once' in CollectableObject.h"
#endif
#define THISISFINE_CollectableObject_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectInfo_Statics; \
	THISISFINE_API static class UScriptStruct* StaticStruct();


template<> THISISFINE_API UScriptStruct* StaticStruct<struct FCollectInfo>();

#define FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectableObject(); \
	friend struct Z_Construct_UClass_ACollectableObject_Statics; \
public: \
	DECLARE_CLASS(ACollectableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(ACollectableObject)


#define FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACollectableObject(ACollectableObject&&); \
	ACollectableObject(const ACollectableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectableObject) \
	NO_API virtual ~ACollectableObject();


#define FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_32_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_35_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class ACollectableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_Public_Actors_CollectableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
