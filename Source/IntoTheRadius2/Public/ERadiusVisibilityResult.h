#pragma once
#include "CoreMinimal.h"
#include "ERadiusVisibilityResult.generated.h"

UENUM(BlueprintType)
enum class ERadiusVisibilityResult : uint8 {
    Visible,
    NotVisible,
    Pending,
    PartiallyVisible,
    FullyVisible,
};

