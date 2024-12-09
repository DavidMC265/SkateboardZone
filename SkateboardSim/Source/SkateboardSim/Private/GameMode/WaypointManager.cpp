// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint/WaypointManager.h"
#include "Waypoint/Waypoint.h"
#include "Waypoint/WaypointSpawnPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

AWaypointManager::AWaypointManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWaypointManager::BeginPlay()
{
	Super::BeginPlay();
	SpawnWaypoint();
}

void AWaypointManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWaypointManager::SpawnWaypoint()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWaypointSpawnPoint::StaticClass(), OutActors);

	if(OutActors.Num() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawning a waypoint!"));

		int32 RandIndex = FMath::RandRange(0, OutActors.Num() - 1);

		AActor* WaypointSpawnPoint = OutActors[RandIndex];

		AActor* SpawnedActor =GetWorld()->SpawnActor<AWaypoint>(
        	WaypointSubClass, 
        	WaypointSpawnPoint->GetActorLocation(), 
        	WaypointSpawnPoint->GetActorRotation()
    	);

		AWaypoint* Waypoint = Cast<AWaypoint>(SpawnedActor);
		
		if(Waypoint)
		{
			Waypoint->bHasExecuted = false;
		}
	}
}
