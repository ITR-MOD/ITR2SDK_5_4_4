#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanExecutionFinishedResult.generated.h"

UENUM(BlueprintType)
enum class EHTNPlanExecutionFinishedResult : uint8 {
    Succeeded,
    FailedOrAborted,
};

