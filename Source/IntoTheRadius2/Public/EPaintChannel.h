#pragma once
#include "CoreMinimal.h"
#include "EPaintChannel.generated.h"

UENUM(BlueprintType)
enum class EPaintChannel : uint8 {
    None,
    R,
    G,
    B = 4,
    A = 8,
    RGBA = 15,
};

