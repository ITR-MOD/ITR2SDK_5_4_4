#pragma once
#include "CoreMinimal.h"
#include "ERadiusHmdDeviceType.generated.h"

UENUM(BlueprintType)
enum class ERadiusHmdDeviceType : uint8 {
    Unknown,
    PIE,
    ValveIndex = 10,
    Oculus = 30,
    OculusRiftS,
    Pico = 50,
};

