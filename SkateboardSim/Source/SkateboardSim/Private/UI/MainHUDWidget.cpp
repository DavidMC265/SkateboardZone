// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainHUDWidget.h"
#include "Components/TextBlock.h"

void UMainHUDWidget::SetPointsText(int PointsAmount)
{
    FString PointsString = FString::FromInt(PointsAmount);

    if(PointsText)
    {
        PointsText->SetText(FText::FromString(PointsString));
    }

}