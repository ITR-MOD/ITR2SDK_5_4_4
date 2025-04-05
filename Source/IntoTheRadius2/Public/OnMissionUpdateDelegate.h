#pragma once
#include "CoreMinimal.h"
#include "OnMissionUpdateDelegate.generated.h"

class UAvailableMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionUpdate, UAvailableMission*, Mission);

