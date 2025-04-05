#pragma once
#include "CoreMinimal.h"
#include "EPossibleLeanDirections.generated.h"

UENUM(BlueprintType)
enum class EPossibleLeanDirections : uint8 {
    None,
    Left,
    Right,
    Both,
};

