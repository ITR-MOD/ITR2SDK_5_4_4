#pragma once
#include "CoreMinimal.h"
#include "ELevelLoadedEventStep.generated.h"

UENUM(BlueprintType)
enum class ELevelLoadedEventStep : uint8 {
    WorldReady,
    PlayerReady,
    SpawnersReady,
    ShadersReady,
};

