#pragma once
#include "CoreMinimal.h"
#include "ERadiusSpawnerType.generated.h"

UENUM(BlueprintType)
enum class ERadiusSpawnerType : uint8 {
    Monster,
    Loot,
    Anomaly,
    ArtefactNest,
    MAX,
};

