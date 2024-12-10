#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
    FOnGrantedPointsSignature, 
    UUIComponent,               
    FOnGrantedPointsDelegate,     
    int, UpdatedPoints                       
);

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnCollectsWaypointSignature,
	UUIComponent,
	FOnCollectsWaypointDelegate,
	int, Waypoints
);

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(
	FOnWinUpdateSignature,
	UUIComponent, FOnWinDelegate
);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SKATEBOARDSIM_API UUIComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UUIComponent();

	UPROPERTY(BlueprintAssignable)
	FOnGrantedPointsSignature FOnGrantedPointsDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnCollectsWaypointSignature FOnCollectsWaypointDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnWinUpdateSignature FOnWinDelegate;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;		
};
