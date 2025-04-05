#pragma once
#include "CoreMinimal.h"
#include "ETidePhase.generated.h"

UENUM(BlueprintType)
enum class ETidePhase : uint8 {
    None,
    Green,
    Yellow,
    Red,
    Black,
    Tide,
};

