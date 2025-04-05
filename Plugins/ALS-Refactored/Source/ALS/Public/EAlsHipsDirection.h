#pragma once
#include "CoreMinimal.h"
#include "EAlsHipsDirection.generated.h"

UENUM(BlueprintType)
enum class EAlsHipsDirection : uint8 {
    Forward,
    Backward,
    LeftForward,
    LeftBackward,
    RightForward,
    RightBackward,
};

