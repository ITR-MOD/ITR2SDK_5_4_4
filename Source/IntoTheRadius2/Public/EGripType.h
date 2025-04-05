#pragma once
#include "CoreMinimal.h"
#include "EGripType.generated.h"

UENUM(BlueprintType)
enum class EGripType : uint8 {
    None,
    Normal,
    Trigger,
    Secondary = 4,
    NormalOrTrigger = 3,
    NormalOrSecondary = 5,
    TriggerOrSecondary,
    NormalOrTriggerOrSecondary,
};

