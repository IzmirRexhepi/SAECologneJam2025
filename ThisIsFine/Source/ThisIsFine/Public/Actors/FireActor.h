// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireActor.generated.h"

class UNiagaraComponent;

UCLASS()
class THISISFINE_API AFireActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess="true"))
	USceneComponent* Root;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
	UNiagaraComponent* FireEffect;

public:
	// Sets default values for this actor's properties
	AFireActor();

};
