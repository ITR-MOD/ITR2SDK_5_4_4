#pragma once
#include "CoreMinimal.h"
#include "OnPlayerHealthChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerHealthChange, const AActor*, PlayerActor, const float, CurrentHealth, const float, ChangeDelta);

