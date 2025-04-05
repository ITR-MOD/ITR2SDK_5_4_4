#pragma once
#include "CoreMinimal.h"
#include "EAlsFootstepParticleEffectSpawnMode.generated.h"

UENUM(BlueprintType)
enum class EAlsFootstepParticleEffectSpawnMode : uint8 {
    SpawnAtTraceHitLocation,
    SpawnAttachedToFootBone,
};

