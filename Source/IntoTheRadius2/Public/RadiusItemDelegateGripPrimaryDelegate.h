#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "RadiusItemDelegateGripPrimaryDelegate.generated.h"

class UGripMotionControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRadiusItemDelegateGripPrimary, UGripMotionControllerComponent*, Controller, FBPActorGripInformation, GripInfo);

