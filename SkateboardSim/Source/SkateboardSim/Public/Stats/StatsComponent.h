#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Stats/EStat.h"
#include "StatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SKATEBOARDSIM_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UStatsComponent();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int CurrentPointsTotal { 0 };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int WaypointsCollected { 0 };

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
