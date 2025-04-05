#pragma once
#include "CoreMinimal.h"
#include "EMissionCompleteState.h"
#include "MissionEndedDelegateDelegate.generated.h"

class UAvailableMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEndedDelegate, UAvailableMission*, Mission, TEnumAsByte<EMissionCompleteState>, State, int32, CurrentObjectiveIndex);

