#pragma once
#include "CoreMinimal.h"
#include "EHTNTaskFunction.generated.h"

UENUM(BlueprintType)
enum class EHTNTaskFunction : uint8 {
    None,
    CreatePlanSteps,
    RecheckPlan,
    Execute,
    Abort,
};

