#pragma once
#include "CoreMinimal.h"
#include "EHTNDecoratorDistanceCheckMode.generated.h"

UENUM()
enum class EHTNDecoratorDistanceCheckMode : int32 {
    Distance3D,
    Distance2D,
    DistanceSignedZ,
    DistanceAbsoluteZ,
    Capsule,
};

