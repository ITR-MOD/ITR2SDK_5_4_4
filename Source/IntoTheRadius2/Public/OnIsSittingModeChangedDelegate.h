#pragma once
#include "CoreMinimal.h"
#include "OnIsSittingModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsSittingModeChanged, bool, bIsSittingMode);

