// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainLevelGameMode.generated.h"

class UCollectableObjectList;
/**
 *
 */
UCLASS()
class THISISFINE_API AMainLevelGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Main Level Game Mode", meta = (AllowPrivateAccess = "true"))
	int NumberOfCollectableObjects = 5;

	virtual void BeginPlay() override;
protected:
	UFUNCTION(BlueprintCallable, meta = (BlueprintProtected = "true"))
	void DelayedBeginPlay();

private:
	UCollectableObjectList* CollectableObjectList;

};
