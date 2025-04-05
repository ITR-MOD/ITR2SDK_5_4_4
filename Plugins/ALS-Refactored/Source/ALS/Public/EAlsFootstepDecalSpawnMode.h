#pragma once
#include "CoreMinimal.h"
#include "EAlsFootstepDecalSpawnMode.generated.h"

UENUM(BlueprintType)
enum class EAlsFootstepDecalSpawnMode : uint8 {
    SpawnAtTraceHitLocation,
    SpawnAttachedToTraceHitComponent,
};

