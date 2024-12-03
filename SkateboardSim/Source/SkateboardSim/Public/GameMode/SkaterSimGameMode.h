// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SkaterSimGameMode.generated.h"

/**
 * 
 */
class UMainHUDWidget;
class ASkateBoardCharacter;
class UUserWidget;

UCLASS()
class SKATEBOARDSIM_API ASkaterSimGameMode : public AGameMode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Player")
	TSubclassOf<ASkateBoardCharacter> SkateboardCharacterSubClass;

protected: 
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UMainHUDWidget> MainUIWidget;

	UMainHUDWidget* WidgetInstance;

	void HandlePlayerRespawn();

	UPROPERTY(EditAnywhere, Category = "Player")
	float PlayerRespawnDelay { 5.f };

	UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UUserWidget> PlayerDefeatedWidget;

	UUserWidget* DefatedInstanceWidget;

	UFUNCTION(BlueprintCallable)
	void SpawnPlayer();

};
