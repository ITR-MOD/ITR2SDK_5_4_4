#pragma once
#include "CoreMinimal.h"
#include "ERadiusItemInfoDisplayType.generated.h"

UENUM(BlueprintType)
enum class ERadiusItemInfoDisplayType : uint8 {
    None,
    Hand,
    Shop,
    Both,
};

