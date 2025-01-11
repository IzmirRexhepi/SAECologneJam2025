// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalMultiplayerGameMode.h"
#include "LocalMultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "LocalCustomPlayerState.h"

ALocalMultiplayerGameMode::ALocalMultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/BP_LocalMultiplayerCharacter1"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/

	PlayerStateClass = ALocalCustomPlayerState::StaticClass();
}