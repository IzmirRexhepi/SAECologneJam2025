// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleFireSpread.generated.h"

class AFireActor;
class UNiagaraComponent;

UCLASS()
class THISISFINE_API ASimpleFireSpread : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess="true"))
	TSubclassOf<AFireActor> FireActorClass;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess="true"))
	float FireSystemDiameter = 10.0f;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess="true"))
	float FireSpreadFrequency = 1;

public:
	// Sets default values for this actor's properties
	ASimpleFireSpread();

	UFUNCTION(BlueprintCallable)
	void StartFireSpread(FVector StartLocation);
	void TickFireSpread();
	void StopFireSpread();

protected:

	int FireSpreadCount = 0;
	FTimerHandle SpreadTimerHandle;

	void SpawnFireActor(FVector StartLocation);
};
