// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "LocalCustomPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class THISISFINE_API ALocalCustomPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	// Array to store player-specific data (e.g., player scores, items, etc.)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player State")
    //TArray<int32> PlayerScores;
	int32 PlayerScores;

	UPROPERTY(BlueprintReadWrite, Category = "Player Stats")
    int32 SlotsLeft;
};
