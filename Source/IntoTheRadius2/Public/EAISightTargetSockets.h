#pragma once
#include "CoreMinimal.h"
#include "EAISightTargetSockets.generated.h"

UENUM(BlueprintType)
enum class EAISightTargetSockets : uint8 {
    None,
    Head,
    HeadFirst,
    HeadSecond,
    LeftHand,
    RightHand,
};

