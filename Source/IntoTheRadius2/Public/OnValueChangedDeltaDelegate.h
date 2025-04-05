#pragma once
#include "CoreMinimal.h"
#include "OnValueChangedDeltaDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedDelta, const float, Delta);

