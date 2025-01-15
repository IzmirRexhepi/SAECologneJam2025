// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CollectableObjectEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THISISFINE_CollectableObjectEntry_generated_h
#error "CollectableObjectEntry.generated.h already included, missing '#pragma once' in CollectableObjectEntry.h"
#endif
#define THISISFINE_CollectableObjectEntry_generated_h

#define FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectableObjectEntry(); \
	friend struct Z_Construct_UClass_UCollectableObjectEntry_Statics; \
public: \
	DECLARE_CLASS(UCollectableObjectEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThisIsFine"), NO_API) \
	DECLARE_SERIALIZER(UCollectableObjectEntry) \
	virtual UObject* _getUObject() const override { return const_cast<UCollectableObjectEntry*>(this); }


#define FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectableObjectEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCollectableObjectEntry(UCollectableObjectEntry&&); \
	UCollectableObjectEntry(const UCollectableObjectEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectableObjectEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectableObjectEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectableObjectEntry) \
	NO_API virtual ~UCollectableObjectEntry();


#define FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_15_PROLOG
#define FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_18_INCLASS_NO_PURE_DECLS \
	FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THISISFINE_API UClass* StaticClass<class UCollectableObjectEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThisIsFine_Source_ThisIsFine_Public_UI_CollectableObjectEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
