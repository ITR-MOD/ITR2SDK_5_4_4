#pragma once
#include "CoreMinimal.h"
#include "ERadiusControllerType.generated.h"

UENUM(BlueprintType)
enum class ERadiusControllerType : uint8 {
    Unknown,
    Index = 10,
    Rift = 30,
    RiftS,
    NativeRift = 40,
    NativeRiftS,
    PicoNeo3 = 60,
    Pico4,
};

