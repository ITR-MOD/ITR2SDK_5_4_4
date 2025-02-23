#pragma once
#include "CoreMinimal.h"
#include "EAlsMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EAlsMovementDirection : uint8 {
    Forward,
    Backward,
    Left,
    Right,
};

