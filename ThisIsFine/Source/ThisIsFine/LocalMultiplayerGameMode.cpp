// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalMultiplayerGameMode.h"
#include "LocalMultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

ALocalMultiplayerGameMode::ALocalMultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/BP_LocalMultiplayerCharacter1"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/

	//PlayerStateClass = ALocalCustomPlayerState::StaticClass();
}

void ALocalMultiplayerGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Iterate through all player controllers and bind to their character's death event
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PlayerController = It->Get();
		if (PlayerController)
		{
			// Get the player's character
			ALocalMultiplayerCharacter* Character = Cast<ALocalMultiplayerCharacter>(PlayerController->GetPawn());
			if (Character)
			{
				BindToCharacterDeath(Character);
			}
		}
	}
}

void ALocalMultiplayerGameMode::HandleCharacterDeath(APlayerController* PlayerController)
{
	if (PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("GameMode detected death of player: %s"), *PlayerController->GetName());

		GameOver();
	}
}

void ALocalMultiplayerGameMode::BindToCharacterDeath(ALocalMultiplayerCharacter* Player)
{
	if (Player)
	{
		// Bind the GameMode's HandleCharacterDeath to the Character's OnCharacterDeath event
		Player->OnPlayerDeath.AddDynamic(this, &ALocalMultiplayerGameMode::HandleCharacterDeath);
	}
}

void ALocalMultiplayerGameMode::GameOver()
{

	// Iterate through all player controllers
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PlayerController = It->Get();
		if (PlayerController)
		{

			UE_LOG(LogTemp, Warning, TEXT("PlayerController name: %s"), *PlayerController->GetName());

			// Get the player's character
			/*ALocalMultiplayerCharacter* Character = Cast<ALocalMultiplayerCharacter>(PlayerController->GetPawn());
			if (Character)
			{
				
			}*/
		}
	}


	UE_LOG(LogTemp, Warning, TEXT("Game Over triggered"));

	// Broadcast the GameOver event to all listeners
	OnGameOver.Broadcast();
}