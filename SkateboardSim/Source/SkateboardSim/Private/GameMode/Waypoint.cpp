// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint/Waypoint.h"
#include "Components/BoxComponent.h"
#include "Interfaces/MainCharacter.h"
#include "GameFramework/Character.h"
#include "Waypoint/WaypointManager.h"
#include "Kismet/GameplayStatics.h"

AWaypoint::AWaypoint()
{
	PrimaryActorTick.bCanEverTick = true;
	
	WaypointMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Waypoint Static Mesh"));
	RootComponent = WaypointMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	CollisionBox-> SetupAttachment(WaypointMesh);

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AWaypoint::OnOverlap);
}

void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
}

void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWaypoint::OnOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
    if (bHasExecuted) { return; }
    bHasExecuted = true;

    if (!OtherActor->Implements<UMainCharacter>()) { return; }

    IMainCharacter* MainCharacter = Cast<IMainCharacter>(OtherActor);

    if (MainCharacter)
    {
        if (MainCharacter->GetPlayerDead()) { return; }
        ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);

        if (PlayerCharacter)
        {
            MainCharacter->OnWaypointCollected();
            Destroy();

            AActor* Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AWaypointManager::StaticClass());
            AWaypointManager* ManagerActor = Cast<AWaypointManager>(Actor);

            if (ManagerActor)
            {
                ManagerActor->SpawnWaypoint();
            }
        }
    }
}
