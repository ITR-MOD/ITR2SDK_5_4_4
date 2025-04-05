#pragma once
#include "CoreMinimal.h"
#include "EWeaponDysfunction.generated.h"

UENUM(BlueprintType)
enum class EWeaponDysfunction : uint8 {
    None,
    Jammed,
    LoadFailure,
    Misfired,
};

