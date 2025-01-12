// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LocalMultiplayerGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameOver);

UCLASS()
class THISISFINE_API ALocalMultiplayerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALocalMultiplayerGameMode();
	
	// Broadcast game Over
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGameOver OnGameOver;

	// Function to trigger GameOver event
	UFUNCTION(BlueprintCallable, Category = "GameMode")
	void GameOver();

	// Function to handle character death
	UFUNCTION(BlueprintCallable, Category = "GameMode")
	void HandleCharacterDeath(APlayerController* PlayerController);

	// Called to bind to the character's death event
	void BindToCharacterDeath(class ALocalMultiplayerCharacter* Player);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
