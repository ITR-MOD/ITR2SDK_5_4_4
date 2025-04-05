#pragma once
#include "CoreMinimal.h"
#include "ERadiusItemContainerType.generated.h"

UENUM(BlueprintType)
enum class ERadiusItemContainerType : uint8 {
    Virtual,
    Holster,
    Item,
};

