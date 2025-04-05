#pragma once
#include "CoreMinimal.h"
#include "OnSliderLockChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSliderLockChanged, bool, bSliderLock);

