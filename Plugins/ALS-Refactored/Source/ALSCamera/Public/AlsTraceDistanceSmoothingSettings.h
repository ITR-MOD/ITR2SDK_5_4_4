#pragma once
#include "CoreMinimal.h"
#include "AlsTraceDistanceSmoothingSettings.generated.h"

USTRUCT(BlueprintType)
struct ALSCAMERA_API FAlsTraceDistanceSmoothingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    FAlsTraceDistanceSmoothingSettings();
};

