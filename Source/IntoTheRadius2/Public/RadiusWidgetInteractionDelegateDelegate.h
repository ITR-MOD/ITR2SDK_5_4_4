#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "RadiusWidgetInteractionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRadiusWidgetInteractionDelegate, bool, bIsActivated, EVRHand, Hand);

