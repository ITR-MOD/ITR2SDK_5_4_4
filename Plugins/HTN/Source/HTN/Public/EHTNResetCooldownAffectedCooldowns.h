#pragma once
#include "CoreMinimal.h"
#include "EHTNResetCooldownAffectedCooldowns.generated.h"

UENUM()
enum class EHTNResetCooldownAffectedCooldowns : int32 {
    CooldownsWithGameplayTag,
    CooldownsWithoutGameplayTag,
    AllCooldowns,
};

