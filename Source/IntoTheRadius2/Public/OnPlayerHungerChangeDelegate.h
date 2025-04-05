#pragma once
#include "CoreMinimal.h"
#include "OnPlayerHungerChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerHungerChange, const AActor*, PlayerActor, const float, CurrentHunger, const float, ChangeDelta);

