// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MainLevelSubsystem.generated.h"

class ACollectableObject;
/**
 *
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartLevelFinished);

UCLASS()
class THISISFINE_API UMainLevelSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RegisterCollectableObject(ACollectableObject* CollectableObject);
	void StartLevel(int NumberOfCollectableObjects);

	FORCEINLINE TArray<ACollectableObject*> GetCollectableObjects() const { return CollectableObjects; }
	FORCEINLINE TArray<ACollectableObject*> GetCollectableObjectsToCollect() const { return CollectableObjectsToCollect; }

	FOnStartLevelFinished OnStartLevelFinished;

private:
	TArray<ACollectableObject*> CollectableObjects = {};
	TArray<ACollectableObject*> CollectableObjectsToCollect = {};
	TArray<int> CollectableObjectsIndexes = {};

	void FunctionToAvoidLambda();
};
