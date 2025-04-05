#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStaminaChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerStaminaChange, const AActor*, PlayerActor, const float, CurrentStamina, const float, ChangeDelta);

