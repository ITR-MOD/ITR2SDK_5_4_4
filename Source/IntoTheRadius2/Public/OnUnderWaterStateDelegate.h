#pragma once
#include "CoreMinimal.h"
#include "OnUnderWaterStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnderWaterState, bool, IsUnderWater, bool, IsDangerousWater);

