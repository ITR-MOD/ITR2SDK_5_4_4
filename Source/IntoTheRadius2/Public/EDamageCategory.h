#pragma once
#include "CoreMinimal.h"
#include "EDamageCategory.generated.h"

UENUM(BlueprintType)
enum class EDamageCategory : uint8 {
    None,
    Physical,
    Explosion,
    Anomaly,
    Distortion,
    Tide,
    Environment = 7,
    Fall,
    Water,
};

