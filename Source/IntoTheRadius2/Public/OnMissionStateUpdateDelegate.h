#pragma once
#include "CoreMinimal.h"
#include "OnMissionStateUpdateDelegate.generated.h"

class UAvailableMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStateUpdate, UAvailableMission*, Mission);

