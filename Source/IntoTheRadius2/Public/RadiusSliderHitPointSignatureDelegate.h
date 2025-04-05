#pragma once
#include "CoreMinimal.h"
#include "RadiusSliderHitPointSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiusSliderHitPointSignature, float, SliderProgressPoint);

