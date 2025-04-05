#pragma once
#include "CoreMinimal.h"
#include "OnItemHolsterAttachChangedDelegate.generated.h"

class ARadiusGrippableActorBase;
class URadiusHolsterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemHolsterAttachChanged, URadiusHolsterComponent*, HolsterComponent, ARadiusGrippableActorBase*, RadiusItem, bool, bHasAttached);

