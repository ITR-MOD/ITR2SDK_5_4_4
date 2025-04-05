#pragma once
#include "CoreMinimal.h"
#include "OnHolsterComponentInitializedDelegate.generated.h"

class URadiusHolsterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHolsterComponentInitialized, URadiusHolsterComponent*, HolsterComponent);

