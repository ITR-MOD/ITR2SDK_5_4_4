#pragma once
#include "CoreMinimal.h"
#include "EHandAnimState.generated.h"

UENUM(BlueprintType)
enum class EHandAnimState : uint8 {
    Animated,
    Dynamic,
    Frozen,
    Custom,
};

