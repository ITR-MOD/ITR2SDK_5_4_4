#pragma once
#include "CoreMinimal.h"
#include "EHTNDecoratorConditionCheckType.generated.h"

UENUM(BlueprintType)
enum class EHTNDecoratorConditionCheckType : uint8 {
    PlanEnter,
    PlanExit,
    PlanRecheck,
    Execution,
};

