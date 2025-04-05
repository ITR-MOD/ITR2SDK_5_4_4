#pragma once
#include "CoreMinimal.h"
#include "ERadiusPlatformType.generated.h"

UENUM(BlueprintType)
enum class ERadiusPlatformType : uint8 {
    Unknown,
    Steam = 2,
    Quest,
    Pico,
};

