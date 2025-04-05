#pragma once
#include "CoreMinimal.h"
#include "EHTNLockFlags.generated.h"

UENUM(BlueprintType)
enum class EHTNLockFlags : uint8 {
    None,
    LockTick,
    LockAbortPlan,
    LockOnTaskFinished = 4,
};

