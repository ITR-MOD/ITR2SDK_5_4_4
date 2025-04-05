#pragma once
#include "CoreMinimal.h"
#include "MissionStartedDelegateDelegate.generated.h"

class UAvailableMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionStartedDelegate, UAvailableMission*, Mission);

