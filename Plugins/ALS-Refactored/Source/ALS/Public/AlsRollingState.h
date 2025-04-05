#pragma once
#include "CoreMinimal.h"
#include "AlsRollingState.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsRollingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetYawAngle;
    
    FAlsRollingState();
};

