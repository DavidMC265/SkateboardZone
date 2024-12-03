// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class SKATEBOARDSIM_API AObstacle : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Obstacle Mesh")
	class UStaticMeshComponent* ObstacleMesh;

	UPROPERTY(EditAnywhere, Category = "Box Collision")
	class UBoxComponent* CollisionBox;

	UPROPERTY(EditAnywhere, Category = "Box Collision")
	class UBoxComponent* PointsCollisionBox;


	UFUNCTION()    
    void OnOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()    
    void OnPointsOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
	
public:	
	AObstacle();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
