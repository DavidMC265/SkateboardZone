
#include "Obstacles/Obstacle.h"
#include "Components/BoxComponent.h"
#include "Interfaces/MainCharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


AObstacle::AObstacle()
{
	PrimaryActorTick.bCanEverTick = true;

	ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Obstacle Static Mesh"));
	RootComponent = ObstacleMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	CollisionBox-> SetupAttachment(ObstacleMesh);

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OnOverlap);

	PointsCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Points Box Component"));
	PointsCollisionBox-> SetupAttachment(ObstacleMesh);

	PointsCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OnPointsOverlap);
}

void AObstacle::BeginPlay()
{
	Super::BeginPlay();
}

void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AObstacle::OnOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if(!OtherActor->Implements<UMainCharacter>()) { return; }

	ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);

    if (PlayerCharacter)
    {
        bool bIsJumping = PlayerCharacter->GetCharacterMovement()->IsFalling();
		if(bIsJumping) { return; }
	}

	IMainCharacter* MainCharacter = Cast<IMainCharacter>(OtherActor);
	if(MainCharacter)
	{
		if(MainCharacter->GetPlayerDead()) { return; }

		MainCharacter->SetPlayerDead(true);
		MainCharacter->OnObstacleHit();
	}
}

void AObstacle::OnPointsOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if(!OtherActor->Implements<UMainCharacter>()) { return; }

	IMainCharacter* MainCharacter = Cast<IMainCharacter>(OtherActor);

	if(MainCharacter)
	{
		if(MainCharacter->GetPlayerDead()) { return; }

		ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);

        if (PlayerCharacter)
        {
            bool bIsJumping = PlayerCharacter->GetCharacterMovement()->IsFalling();

			if(bIsJumping)
			{
				int32 RandomInt = FMath::RandRange(6, 10);
				MainCharacter->GrantPoints(RandomInt);
			}
		}
	}
}
