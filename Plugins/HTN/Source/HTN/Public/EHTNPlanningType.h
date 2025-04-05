#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanningType.generated.h"

UENUM(BlueprintType)
enum class EHTNPlanningType : uint8 {
    Normal,
    TryToAdjustCurrentPlan,
};

