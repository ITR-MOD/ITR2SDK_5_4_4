#pragma once
#include "CoreMinimal.h"
#include "OnPlayerHeightOffsetChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerHeightOffsetChanged, float, PlayerHeightOffset);

