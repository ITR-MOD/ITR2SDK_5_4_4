#pragma once
#include "CoreMinimal.h"
#include "BallLightningAnomalyIsHidden.generated.h"

USTRUCT(BlueprintType)
struct FBallLightningAnomalyIsHidden {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstant;
    
    INTOTHERADIUS2_API FBallLightningAnomalyIsHidden();
};

