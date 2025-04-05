#pragma once
#include "CoreMinimal.h"
#include "ETurningType.generated.h"

UENUM(BlueprintType)
enum class ETurningType : uint8 {
    Smooth,
    Snap,
    Hybrid,
};

