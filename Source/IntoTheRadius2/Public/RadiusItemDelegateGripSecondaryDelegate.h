#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "RadiusItemDelegateGripSecondaryDelegate.generated.h"

class UGripMotionControllerComponent;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRadiusItemDelegateGripSecondary, UGripMotionControllerComponent*, Controller, USceneComponent*, ReleaseComponent, FBPActorGripInformation, GripInfo);

