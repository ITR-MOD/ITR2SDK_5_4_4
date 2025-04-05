#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanInstanceStatus.generated.h"

UENUM(BlueprintType)
enum class EHTNPlanInstanceStatus : uint8 {
    NotStarted,
    InProgress,
    Succeeded,
    Failed,
};

