#pragma once
#include "CoreMinimal.h"
#include "AlsViewAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsViewAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookTowardsCameraRotationInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookTowardsInputYawAngleInterpolationSpeed;
    
    FAlsViewAnimationSettings();
};

