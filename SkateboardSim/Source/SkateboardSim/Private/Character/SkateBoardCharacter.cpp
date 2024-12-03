
#include "Character/SkateBoardCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
// #include "StatsComponent.h"
#include "Components/StaticMeshComponent.h"

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
	SkateboardMesh-> SetupAttachment(RootComponent);

	// StatsComponent= CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
}

void ASkateBoardCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASkateBoardCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASkateBoardCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ASkateBoardCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ASkateBoardCharacter::LookUp);
}


void ASkateBoardCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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

void ASkateBoardCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

