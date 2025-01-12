// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalMultiplayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "LocalMultiplayerGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALocalMultiplayerCharacter::ALocalMultiplayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	SlotAmount = 2;
	isDead = false;
}

// Called when the game starts or when spawned
void ALocalMultiplayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	ALocalMultiplayerGameMode* CustomGameMode = Cast< ALocalMultiplayerGameMode>(GameMode);
	if (CustomGameMode) {
		BindCharacterGameOver();
	}
}

// Called every frame
void ALocalMultiplayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALocalMultiplayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ALocalMultiplayerCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ALocalMultiplayerCharacter::Look);

		//Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ALocalMultiplayerCharacter::Interact);

		//Punching
		EnhancedInputComponent->BindAction(PunchAction, ETriggerEvent::Started, this, &ALocalMultiplayerCharacter::Punch);

	}

}

void ALocalMultiplayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ALocalMultiplayerCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ALocalMultiplayerCharacter::Interact(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{

		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Slotamount %d"), SlotAmount));

	}
}

void ALocalMultiplayerCharacter::Punch(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("Punch"));
		Die(GetController<APlayerController>());
	}
}


void ALocalMultiplayerCharacter::Die(APlayerController* PlayerController) {
	isDead = true;

	//Enable ragdoll physics.
	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
	GetMesh()->SetSimulatePhysics(true);

	//Block player input & delete the capsule component
	PlayerController->DisableInput(PlayerController);
	GetCapsuleComponent()->DestroyComponent();
	CameraBoom->bDoCollisionTest = false;

	// Log for debugging
	UE_LOG(LogTemp, Warning, TEXT("Character has died"));

	// Broadcast the OnCharacterDeath event
	OnPlayerDeath.Broadcast(PlayerController);
}

void ALocalMultiplayerCharacter::HandleGameOver() {
	UE_LOG(LogTemp, Error, TEXT("Handle Game Over"));
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s detected game is over"), *PlayerController->GetName());
	}
}

void ALocalMultiplayerCharacter::BindCharacterGameOver() {

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	ALocalMultiplayerGameMode* CustomGameMode = Cast<ALocalMultiplayerGameMode>(GameMode);
	if (CustomGameMode) {
		CustomGameMode->OnGameOver.AddDynamic(this, &ALocalMultiplayerCharacter::HandleGameOver);
	}
}

