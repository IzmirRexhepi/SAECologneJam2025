// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/SimpleFireSpread.h"
#include "Actors/FireActor.h"



// Sets default values
ASimpleFireSpread::ASimpleFireSpread()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASimpleFireSpread::StartFireSpread(FVector StartLocation)
{
	this->SetActorLocation(StartLocation);
	SpawnFireActor(StartLocation);

	GetWorld()->GetTimerManager().SetTimer(SpreadTimerHandle, this, &ASimpleFireSpread::TickFireSpread, 1/FireSpreadFrequency, true);
}

void ASimpleFireSpread::TickFireSpread()
{
	const auto ScaledFireSystemDiameter = FireSpreadCount * FireSystemDiameter;
	const auto Alpha = (FireSystemDiameter * 360)/(2 * PI * ScaledFireSystemDiameter);

	const FVector StartFireSpreadLocation = FVector(ScaledFireSystemDiameter, 0, 0);

	float RotationInRadians = 0.0f;
	FQuat Rotation = FQuat::Identity;

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("FireSpreadCount: %d"), FireSpreadCount));

	for (float CurrentAngle = 0.0f; CurrentAngle < 360.0f; CurrentAngle += Alpha)
	{
		RotationInRadians = FMath::DegreesToRadians(CurrentAngle);
		Rotation = FQuat(FVector(0, 0, 1), RotationInRadians);

		FVector RotateVector = Rotation.RotateVector(StartFireSpreadLocation);
		// Draw Debug Sphere to show the spread of the fire
		SpawnFireActor(GetActorLocation() + RotateVector);
	}

	FireSpreadCount++;
}

void ASimpleFireSpread::StopFireSpread()
{
	GetWorld()->GetTimerManager().ClearTimer(SpreadTimerHandle);
}

void ASimpleFireSpread::SpawnFireActor(FVector StartLocation)
{
	GetWorld()->SpawnActor(this->FireActorClass, &StartLocation);
}
