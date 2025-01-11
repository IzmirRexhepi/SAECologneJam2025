// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisIsFine/Public/GameFramework/GameMode/MainLevelGameMode.h"

#include "ThisIsFine/Public/GameFramework/Subsystem/MainLevelSubsystem.h"
#include "UI/CollectableObjectList.h"

void AMainLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	UMainLevelSubsystem* MainLevelSubsystem = GetWorld()->GetSubsystem<UMainLevelSubsystem>();

	if (MainLevelSubsystem)
		MainLevelSubsystem->StartLevel(NumberOfCollectableObjects);
}

void AMainLevelGameMode::DelayedBeginPlay()
{
	if (CollectableObjectList)
	{

		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Delayed Begin Play"));

		CollectableObjectList->OwnInitialize();
	}
}
