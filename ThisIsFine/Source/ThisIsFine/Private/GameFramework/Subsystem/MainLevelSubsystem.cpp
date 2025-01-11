// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisIsFine/Public/GameFramework/Subsystem/MainLevelSubsystem.h"

#include "ThisIsFine/Public/Actors/CollectableObject.h"

bool UMainLevelSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	const TSoftObjectPtr<UWorld> TargetLevel = TSoftObjectPtr<UWorld>(FSoftObjectPath(TEXT("/Game/LevelDesign/Marcel.Marcel")));

	if (const UWorld* World = Cast<UWorld>(Outer))
	{
		if (TargetLevel.IsValid() && TargetLevel.Get() == World)
		{
			UE_LOG(LogTemp, Error, TEXT("MainLevel Subsystem Created!!!"))
			return true;
		}
	}

	return false;
}

void UMainLevelSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CollectableObjects.Empty();
	CollectableObjects.Reserve(13);
}

void UMainLevelSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UMainLevelSubsystem::RegisterCollectableObject(ACollectableObject* CollectableObject)
{
	CollectableObjects.Add(CollectableObject);
	CollectableObject->SetCollectableState(false);
}

void UMainLevelSubsystem::StartLevel(const int NumberOfCollectableObjects)
{
	// Get Random Number of Collectable Objects
	TArray<int> CollectableObjectsIndexes;

	int SaveExit = 0;

	do
	{
		if (SaveExit > 1000)
		{
			UE_LOG(LogTemp, Error, TEXT("Could not find enough collectable objects"))
			break;
		}

		const int RandomIndex = FMath::RandRange(0, CollectableObjects.Num() - 1);

		if (CollectableObjectsIndexes.Contains(RandomIndex))
		{
			SaveExit++;
			continue;
		}

		CollectableObjectsIndexes.Add(RandomIndex);

		if (CollectableObjectsIndexes.Num() >= NumberOfCollectableObjects)
			break;
	}
	while (true);

	for (const auto CollectableObjectsIndex : CollectableObjectsIndexes)
		CollectableObjects[CollectableObjectsIndex]->SetCollectableState(true);
}
