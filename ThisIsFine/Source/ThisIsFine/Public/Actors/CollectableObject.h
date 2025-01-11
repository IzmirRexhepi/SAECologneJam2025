// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectableObject.generated.h"

class UBoxComponent;

USTRUCT(Blueprintable)
struct FCollectInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString CollectableObjectName;

	UPROPERTY(EditAnywhere)
	UTexture2D* CollectableImage;

	UPROPERTY(EditAnywhere)
	int NumberOfHandsNeeded;

	UPROPERTY(EditAnywhere)
	USoundCue* CollectSound;

	UPROPERTY(EditAnywhere)
	bool bIsObjectCollectable;
};

UCLASS()
class THISISFINE_API ACollectableObject : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Collectable Object", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;

	UPROPERTY(EditDefaultsOnly, Category = "Collectable Object", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, Category = "Collectable Object", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxCollider;

public:
	// Sets default values for this actor's properties
	ACollectableObject();

	ACollectableObject* StartInteraction(const int PlayersRemainingHands);

	auto SetCollectableState(const bool NewState) -> void;

	FORCEINLINE auto GetCollectableImage() const -> UTexture2D* { return CollectInfo.CollectableImage; }
	FORCEINLINE auto GetCollectableObjectName() const -> FString { return CollectInfo.CollectableObjectName; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Collectable Object", meta = (AllowPrivateAccess = "true"))
	FCollectInfo CollectInfo;
};
