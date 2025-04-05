#pragma once
#include "CoreMinimal.h"
#include "OnDistanceGripChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDistanceGripChanged, bool, bIsDistanceLerping);

