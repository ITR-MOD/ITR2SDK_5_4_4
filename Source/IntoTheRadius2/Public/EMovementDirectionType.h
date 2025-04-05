#pragma once
#include "CoreMinimal.h"
#include "EMovementDirectionType.generated.h"

UENUM(BlueprintType)
enum class EMovementDirectionType : uint8 {
    Controller,
    Camera,
    Hybrid,
};

