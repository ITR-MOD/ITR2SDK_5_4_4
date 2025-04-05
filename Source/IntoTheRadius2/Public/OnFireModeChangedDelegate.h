#pragma once
#include "CoreMinimal.h"
#include "EWeaponFireMode.h"
#include "OnFireModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFireModeChanged, EWeaponFireMode, FireMode);

