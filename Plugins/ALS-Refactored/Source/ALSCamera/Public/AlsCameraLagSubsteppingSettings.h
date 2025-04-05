#pragma once
#include "CoreMinimal.h"
#include "AlsCameraLagSubsteppingSettings.generated.h"

USTRUCT(BlueprintType)
struct ALSCAMERA_API FAlsCameraLagSubsteppingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagSubstepDeltaTime;
    
    FAlsCameraLagSubsteppingSettings();
};

