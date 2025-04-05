#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "AlsAnimationInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsAnimationInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FAlsAnimationInstanceProxy();
};

