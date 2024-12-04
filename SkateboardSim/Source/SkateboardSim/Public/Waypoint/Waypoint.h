// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Waypoint.generated.h"

UCLASS()
class SKATEBOARDSIM_API AWaypoint : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Obstacle Mesh")
	class UStaticMeshComponent* WaypointMesh;

	UPROPERTY(EditAnywhere, Category = "Box Collision")
	class UBoxComponent* CollisionBox;

	UFUNCTION()    
    void OnOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
	
public:	
	// Sets default values for this actor's properties
	AWaypoint();

	bool bHasExecuted { false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
