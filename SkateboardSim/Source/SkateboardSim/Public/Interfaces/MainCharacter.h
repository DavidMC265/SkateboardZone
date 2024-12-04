// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainCharacter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMainCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SKATEBOARDSIM_API IMainCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void GrantPoints(int Amount) = 0;

	virtual void OnObstacleHit() = 0;

	virtual void OnWaypointCollected() = 0;

	virtual void SetPlayerDead(bool IsPlayerDead) = 0;

	virtual bool GetPlayerDead() = false;
};
