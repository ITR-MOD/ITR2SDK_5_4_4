#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnSleepDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSleepDelegate, FVector, Location, int32, Seconds);

