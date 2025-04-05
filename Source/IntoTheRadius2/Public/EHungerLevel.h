#pragma once
#include "CoreMinimal.h"
#include "EHungerLevel.generated.h"

UENUM(BlueprintType)
enum class EHungerLevel : uint8 {
    None,
    Weak,
    Moderate,
    Strong,
};

