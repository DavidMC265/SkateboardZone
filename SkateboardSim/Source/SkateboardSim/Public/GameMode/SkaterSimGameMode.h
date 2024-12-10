#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SkaterSimGameMode.generated.h"


class UMainHUDWidget;
class ASkateBoardCharacter;
class UUserWidget;

UCLASS()
class SKATEBOARDSIM_API ASkaterSimGameMode : public AGameMode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Player")
	TSubclassOf<ASkateBoardCharacter> SkateboardCharacterSubClass;

	UPROPERTY(EditAnywhere)
	float CountDownTimerValue = {59.f};

protected: 
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UMainHUDWidget* WidgetInstance;

	void HandlePlayerRespawn();

	void HandlePlayerWin();

	UPROPERTY(EditAnywhere, Category = "Player")
	float PlayerRespawnDelay { 5.f };

	UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UUserWidget> PlayerDefeatedWidget;

	UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UUserWidget> PlayerWinWidget;

	UUserWidget* DefatedInstanceWidget;

	UUserWidget* WinInstanceWidget;

	UFUNCTION(BlueprintCallable)
	void SpawnPlayer();

};
