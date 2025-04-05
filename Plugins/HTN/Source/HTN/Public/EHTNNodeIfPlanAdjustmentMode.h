#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeIfPlanAdjustmentMode.generated.h"

UENUM(BlueprintType)
enum class EHTNNodeIfPlanAdjustmentMode : uint8 {
    NoAdjustmentAllowed,
    TrySwitchToTrueBranch,
    TrySwitchToFalseBranch,
    TrySwitchToOtherBranch,
};

