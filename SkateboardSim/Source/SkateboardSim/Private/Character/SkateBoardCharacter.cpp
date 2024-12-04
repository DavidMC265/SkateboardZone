
#include "Character/SkateBoardCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Stats/StatsComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Interfaces/MainCharacter.h"
#include "GameMode/SkaterSimGameMode.h"
#include "UI/MainHUDWidget.h"
#include "GameMode/SkatePlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "Stats/EStat.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Sound/SoundBase.h"

ASkateBoardCharacter::ASkateBoardCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	SkateboardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Skateboard Static Mesh"));
	SkateboardMesh-> SetupAttachment(GetMesh());

	StatsComp= CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Comp"));
}

void ASkateBoardCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASkateBoardCharacter::JumpAction);
	PlayerInputComponent->BindAction("SpeedBoost", IE_Pressed, this, &ASkateBoardCharacter::StartSpeedBoost);
    PlayerInputComponent->BindAction("SpeedBoost", IE_Released, this, &ASkateBoardCharacter::StopSpeedBoost);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASkateBoardCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASkateBoardCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ASkateBoardCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ASkateBoardCharacter::LookUp);
}

void ASkateBoardCharacter::BeginPlay()
{
	Super::BeginPlay();

    AGameMode* GameMode = Cast<AGameMode>(GetWorld()->GetAuthGameMode());

    if (GameMode)
    {
        MainGameMode = Cast<ASkaterSimGameMode>(GameMode);
		if(MainGameMode)
		{
			MainGameMode->WidgetInstance->SetPointsText(StatsComp->Stats[EStat::CurrentPoints]);
		}
    }
}

void ASkateBoardCharacter::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction( FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
	}
}

void ASkateBoardCharacter::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction( FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, Value);
	}
}

void ASkateBoardCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ASkateBoardCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ASkateBoardCharacter::JumpAction()
{
	Jump();

	if(JumpAnimMontage)
	{
		PlayAnimMontage(JumpAnimMontage);
	}
}
void ASkateBoardCharacter::StartSpeedBoost()
{
	if(SpeedUpAnimation)
	{
		PlayAnimMontage(SpeedUpAnimation);
	}

	GetCharacterMovement()->MaxWalkSpeed = 1200.0f; // Set to boosted speed
}

void ASkateBoardCharacter::StopSpeedBoost()
{
    GetCharacterMovement()->MaxWalkSpeed = 600.0f; // Reset to default speed
}


void ASkateBoardCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASkateBoardCharacter::GrantPoints(int Amount)
{
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 
			15.f, 
			FColor::Blue, 
			FString::Printf(TEXT("Ive picked up some points!!"))
		);
	}
	
	StatsComp->Stats[EStat::CurrentPoints] += Amount;

	MainGameMode->WidgetInstance->SetPointsText(StatsComp->Stats[EStat::CurrentPoints]);

	if(PointsSoundEffect)
	{
		UGameplayStatics::PlaySound2D(
			this, 
			PointsSoundEffect, 
			1, 1, 0, 
			nullptr, nullptr, true
		);
	}

}

void ASkateBoardCharacter::OnObstacleHit()
{
	if(FallingAnimMontage)
	{
		PlayAnimMontage(FallingAnimMontage);
	}

	DisableInput(GetController<APlayerController>());

	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle, 
		this, 
		&ASkateBoardCharacter::Respawn, 
		MainGameMode->PlayerRespawnDelay, 
		false
	);
}

void ASkateBoardCharacter::Respawn()
{
	Destroy();
	MainGameMode->HandlePlayerRespawn();
}

