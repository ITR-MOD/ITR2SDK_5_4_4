#pragma once
#include "CoreMinimal.h"
#include "EAlsInAirRotationMode.generated.h"

UENUM(BlueprintType)
enum class EAlsInAirRotationMode : uint8 {
    RotateToVelocityOnJump,
    KeepRelativeRotation,
    KeepWorldRotation,
};

