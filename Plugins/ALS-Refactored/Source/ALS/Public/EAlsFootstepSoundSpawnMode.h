#pragma once
#include "CoreMinimal.h"
#include "EAlsFootstepSoundSpawnMode.generated.h"

UENUM(BlueprintType)
enum class EAlsFootstepSoundSpawnMode : uint8 {
    SpawnAtTraceHitLocation,
    SpawnAttachedToFootBone,
};

