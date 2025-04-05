#pragma once
#include "CoreMinimal.h"
#include "EQualityType.generated.h"

UENUM(BlueprintType)
enum class EQualityType : uint8 {
    Low,
    Medium,
    High,
    Custom,
    Quest3,
};

