#pragma once
#include "CoreMinimal.h"
#include "EWeaponDysfunction.h"
#include "OnDysfunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDysfunction, EWeaponDysfunction, Dysfunction);

