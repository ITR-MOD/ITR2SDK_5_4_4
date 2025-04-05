#pragma once
#include "CoreMinimal.h"
#include "ENPCState.generated.h"

UENUM(BlueprintType)
enum class ENPCState : uint8 {
    None,
    Idle,
    Suspicious,
    Alarmed,
    Combat,
};

