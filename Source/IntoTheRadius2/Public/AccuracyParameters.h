#pragma once
#include "CoreMinimal.h"
#include "AccuracyParameters.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAccuracyParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyDurabilityCoefficient;
    
    FAccuracyParameters();
};

