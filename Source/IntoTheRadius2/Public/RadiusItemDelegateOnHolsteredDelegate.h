#pragma once
#include "CoreMinimal.h"
#include "RadiusItemDelegateOnHolsteredDelegate.generated.h"

class URadiusHolsterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiusItemDelegateOnHolstered, URadiusHolsterComponent*, Holster);

