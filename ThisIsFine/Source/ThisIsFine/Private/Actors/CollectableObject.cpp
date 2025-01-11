// Fill out your copyright notice in the Description page of Project Settings.


#include "ThisIsFine/Public/Actors/CollectableObject.h"

#include "Components/BoxComponent.h"
#include "ThisIsFine/Public/GameFramework/Subsystem/MainLevelSubsystem.h"


// Sets default values
ACollectableObject::ACollectableObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(this->Root);

	this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	this->Mesh->SetupAttachment(this->Root);

	this->BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	this->BoxCollider->SetupAttachment(this->Root);
}

ACollectableObject* ACollectableObject::StartInteraction(const int PlayersRemainingHands)
{
	if (!CollectInfo.bIsObjectCollectable) return nullptr;

	if (PlayersRemainingHands < CollectInfo.NumberOfHandsNeeded) return nullptr;

	return this;
}

auto ACollectableObject::SetCollectableState(const bool NewState) -> void
{
	CollectInfo.bIsObjectCollectable = NewState;
}

// Called when the game starts or when spawned
void ACollectableObject::BeginPlay()
{
	Super::BeginPlay();

	UMainLevelSubsystem* MainLevelSubsystem = GetWorld()->GetSubsystem<UMainLevelSubsystem>();
	if (MainLevelSubsystem)
		MainLevelSubsystem->RegisterCollectableObject(this);
}

// Called every frame
void ACollectableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

