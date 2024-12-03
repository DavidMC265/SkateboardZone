
#include "Obstacle.h"
#include "Components/BoxComponent.h"

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
}

void AObstacle::OnPointsOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Points granted to player!!"));
}
