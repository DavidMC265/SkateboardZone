// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Stats/EStat.h"
#include "Interfaces/MainCharacter.h"
#include "SkateBoardCharacter.generated.h"

UCLASS()
class SKATEBOARDSIM_API ASkateBoardCharacter : public ACharacter, public IMainCharacter
{
	GENERATED_BODY()

	class ASkaterSimGameMode* MainGameMode;

	UPROPERTY(EditAnywhere, Category = "AnimMontages")
	class UAnimMontage* FallingAnimMontage;

	UPROPERTY(EditAnywhere, Category = "Sound Effects")
	class USoundBase* PointsSoundEffect;

public:
	ASkateBoardCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStatsComponent* StatsComp;

	virtual void GrantPoints(int Amount) override;

	virtual void OnObstacleHit() override;

protected:
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void StartSpeedBoost();
    void StopSpeedBoost();

private:
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, Category = "Skateboard Mesh")
	class UStaticMeshComponent* SkateboardMesh;

	UFUNCTION()
	void Respawn();

	FTimerHandle TimerHandle;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	int CurrentPoints { 0 };

};
