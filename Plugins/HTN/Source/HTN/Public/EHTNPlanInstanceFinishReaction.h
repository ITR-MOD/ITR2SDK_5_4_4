#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanInstanceFinishReaction.generated.h"

UENUM(BlueprintType)
enum class EHTNPlanInstanceFinishReaction : uint8 {
    Succeed,
    Fail,
    Loop,
};

