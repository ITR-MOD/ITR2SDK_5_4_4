#pragma once
#include "CoreMinimal.h"
#include "EMissionUIState.generated.h"

UENUM(BlueprintType)
enum class EMissionUIState : uint8 {
    Locked,
    ReadyToUnlock,
    AlreadyUnlocked,
};

