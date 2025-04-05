#pragma once
#include "CoreMinimal.h"
#include "RadiusSliderFinishedLerpingSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiusSliderFinishedLerpingSignature, float, FinalProgress);

