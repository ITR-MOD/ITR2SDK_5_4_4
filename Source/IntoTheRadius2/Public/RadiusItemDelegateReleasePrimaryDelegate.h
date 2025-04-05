#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "RadiusItemDelegateReleasePrimaryDelegate.generated.h"

class UGripMotionControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRadiusItemDelegateReleasePrimary, UGripMotionControllerComponent*, Controller, FBPActorGripInformation, GripInfo, bool, bWasSocketed);

