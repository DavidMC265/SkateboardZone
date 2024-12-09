// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaypointManager.generated.h"

class AWaypoint;

UCLASS()
class SKATEBOARDSIM_API AWaypointManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AWaypointManager();

	void SpawnWaypoint();

	TArray<AActor*> OutActors;

	UPROPERTY(EditAnywhere, Category = "Player")
	TSubclassOf<AWaypoint> WaypointSubClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
