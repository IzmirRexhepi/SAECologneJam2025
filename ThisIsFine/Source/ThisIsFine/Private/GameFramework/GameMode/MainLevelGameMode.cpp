// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisIsFine/Public/GameFramework/GameMode/MainLevelGameMode.h"

#include "ThisIsFine/Public/GameFramework/Subsystem/MainLevelSubsystem.h"
#include "UI/CollectableObjectList.h"

void AMainLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UMainLevelSubsystem* MainLevelSubsystem = GetWorld()->GetSubsystem<UMainLevelSubsystem>();

	if (MainLevelSubsystem)
	{
		MainLevelSubsystem->OnStartLevelFinished.AddDynamic(this, &AMainLevelGameMode::DelayedBeginPlay);
		MainLevelSubsystem->StartLevel(NumberOfCollectableObjects);

	}
}

void AMainLevelGameMode::DelayedBeginPlay()
{
	if (CollectableObjectList)
	{
		CollectableObjectList->OwnInitialize();
	}
}
