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

	UPROPERTY(EditAnywhere, Category = "AnimMontages")
	class UAnimMontage* JumpAnimMontage;

	UPROPERTY(EditAnywhere, Category = "AnimMontages")
	class UAnimMontage* SpeedUpAnimation;

	UPROPERTY(EditAnywhere, Category = "Sound Effects")
	class USoundBase* PointsSoundEffect;

	UPROPERTY(EditAnywhere, Category = "Sound Effects")
	class USoundBase* WaypointSoundEffect;

	UPROPERTY(VisibleAnywhere)
	bool IsDead = false;

	UPROPERTY(EditAnywhere)
	double SlowDownSpeedRate { 10.f };

public:
	ASkateBoardCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStatsComponent* StatsComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUIComponent* UIComp;

	virtual void GrantPoints(int Amount) override;

	virtual void OnObstacleHit() override;

	virtual void OnWaypointCollected() override;

	virtual void SetPlayerDead(bool IsPlayerDead);

	virtual bool GetPlayerDead();


protected:
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void JumpAction();
	void StartSpeedBoost();
    void StopSpeedBoost();
	void StartSlowDown();
    void StopSlowDown();

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

	bool bIsSlowingDown { false };

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	int CurrentPoints { 0 };
};
