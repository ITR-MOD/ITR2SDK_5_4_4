#pragma once
#include "CoreMinimal.h"
#include "EHTNNodePreferPlanAdjustmentMode.generated.h"

UENUM(BlueprintType)
enum class EHTNNodePreferPlanAdjustmentMode : uint8 {
    NoAdjustmentAllowed,
    TrySwitchToHigherPriorityBranch,
    TrySwitchToLowerPriorityBranch,
    TrySwitchToOtherBranch,
};

