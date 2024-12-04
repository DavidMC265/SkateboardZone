// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/SkaterSimGameMode.h"
#include "UI/MainHUDWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameMode/SkatePlayerStart.h"
#include "Character/SkateBoardCharacter.h"
#include "Blueprint/UserWidget.h"

void ASkaterSimGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (MainUIWidget)
    {
       WidgetInstance = CreateWidget<UMainHUDWidget>(GetWorld(), MainUIWidget);

        if (WidgetInstance)
        {
            WidgetInstance->AddToViewport();
        }        
    }
}


void ASkaterSimGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void ASkaterSimGameMode::HandlePlayerRespawn()
{
    if (PlayerDefeatedWidget)
    {
       DefatedInstanceWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerDefeatedWidget);

        if (DefatedInstanceWidget)
        {
            DefatedInstanceWidget->AddToViewport(5);
        }        
    }
}

void ASkaterSimGameMode::HandlePlayerWin()
{
    if (PlayerWinWidget)
    {
       WinInstanceWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerWinWidget);

        if (WinInstanceWidget)
        {
            WinInstanceWidget->AddToViewport(10);
            GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
        }        
    }
}

void ASkaterSimGameMode::SpawnPlayer()
{
    AActor* PlayerStartActor = UGameplayStatics::GetActorOfClass(
        GetWorld(), 
        ASkatePlayerStart::StaticClass()
    );

    FVector SpawnLocation = PlayerStartActor->GetActorLocation(); 
    FRotator SpawnRotation = PlayerStartActor->GetActorRotation();

    ASkateBoardCharacter* SpawnedPlayer = GetWorld()->SpawnActor<ASkateBoardCharacter>(
        SkateboardCharacterSubClass, 
        SpawnLocation, 
        SpawnRotation
    );

    if (SpawnedPlayer)
    {
        APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
        if (PlayerController)
        {
            PlayerController->Possess(SpawnedPlayer);
        }
    }

}
