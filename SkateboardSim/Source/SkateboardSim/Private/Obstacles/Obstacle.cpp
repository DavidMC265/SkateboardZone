
#include "Obstacles/Obstacle.h"
#include "Components/BoxComponent.h"
#include "Interfaces/MainCharacter.h"


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
	UE_LOG(LogTemp, Warning, TEXT("Box Collision collided with"));

	if(!OtherActor->Implements<UMainCharacter>()) { return; }

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 
			15.f, 
			FColor::Red, 
			FString::Printf(TEXT("Box collision killer collided with!"))
		);
	}

	IMainCharacter* MainCharacter = Cast<IMainCharacter>(OtherActor);
	if(MainCharacter)
	{
		MainCharacter->OnObstacleHit();
	}
}

void AObstacle::OnPointsOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if(!OtherActor->Implements<UMainCharacter>()) { return; }

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 
			15.f, 
			FColor::Green, 
			FString::Printf(TEXT("Points Granted to player!"))
		);
	}

	IMainCharacter* MainCharacter = Cast<IMainCharacter>(OtherActor);
	if(MainCharacter)
	{
		int32 RandomInt = FMath::RandRange(6, 10);

		MainCharacter->GrantPoints(RandomInt);
	}
}
