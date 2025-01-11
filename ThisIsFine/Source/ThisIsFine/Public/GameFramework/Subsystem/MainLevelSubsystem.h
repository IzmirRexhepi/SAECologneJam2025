// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MainLevelSubsystem.generated.h"

class ACollectableObject;
/**
 *
 */
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

private:
	TArray<ACollectableObject*> CollectableObjects = {};
};
