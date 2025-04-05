#pragma once
#include "CoreMinimal.h"
#include "EHTNSubPlanNodeAbortedReaction.generated.h"

UENUM(BlueprintType)
enum class EHTNSubPlanNodeAbortedReaction : uint8 {
    AbortSubPlanExecution,
    WaitForSubPlanToFinish,
};

