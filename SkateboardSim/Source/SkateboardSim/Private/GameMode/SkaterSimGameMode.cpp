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
        
        // WidgetInstance->SetPointsText(0);
    }
}
void ASkaterSimGameMode::HandlePlayerRespawn()
{
    if (PlayerDefeatedWidget)
    {
       DefatedInstanceWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerDefeatedWidget);

        if (DefatedInstanceWidget)
        {
            GEngine->AddOnScreenDebugMessage(
			    -1, 
			    15.f, 
			    FColor::Blue, 
			    FString::Printf(TEXT("Player DefearedWidgetPlayed!"))
		    );

            DefatedInstanceWidget->AddToViewport(5);
        }        
    }

    GEngine->AddOnScreenDebugMessage(
			-1, 
			15.f, 
			FColor::Orange, 
			FString::Printf(TEXT("Player is About to respawn!"))
		);
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
