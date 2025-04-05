#pragma once
#include "CoreMinimal.h"
#include "ENPCLeanState.generated.h"

UENUM(BlueprintType)
enum class ENPCLeanState : uint8 {
    None,
    Straight,
    Left,
    Right,
};

