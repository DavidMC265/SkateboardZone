// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SKATEBOARDSIM_API UMainHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PointsText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* WaypointsText;

	void SetPointsText(int PointsAmount);

	void SetWaypointsText(int WaypointsCollected);
	
};
