#pragma once
#include "CoreMinimal.h"
#include "EMoneyChangeReason.generated.h"

UENUM(BlueprintType)
enum EMoneyChangeReason {
    None,
    MissionFinish,
    Buy,
    Sell,
    Heal,
    Ash,
};

