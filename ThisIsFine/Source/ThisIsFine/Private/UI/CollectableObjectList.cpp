// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisIsFine/Public/UI/CollectableObjectList.h"

#include "Components/VerticalBox.h"
#include "GameFramework/Subsystem/MainLevelSubsystem.h"
#include "UI/CollectableObjectEntry.h"

void UCollectableObjectList::OwnInitialize()
{
	const UMainLevelSubsystem* MainLevelSubsystem = GetWorld()->GetSubsystem<UMainLevelSubsystem>();
	if (!MainLevelSubsystem) return;

	auto CollectableObjectList = MainLevelSubsystem->GetCollectableObjectsToCollect();

	// print the number of collectable objects
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Number of Collectable Objects: %d"), CollectableObjectList.Num()));

	for (const auto& CollectableObject : CollectableObjectList)
	{
		UCollectableObjectEntry* CollectableObjectEntry = CreateWidget<UCollectableObjectEntry>(this, CollectableObjectEntryClass);

		CollectableObjectEntry->InitializeFromCollectableObject(CollectableObject);

		CollectableObjectsList->AddChild(CollectableObjectEntry);
	}
}

void UCollectableObjectList::NativeConstruct()
{
	Super::NativeConstruct();
}
