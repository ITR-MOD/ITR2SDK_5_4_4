#pragma once
#include "CoreMinimal.h"
#include "AggroInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAggroInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceAggroTimerFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReducePointsPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreAggroReductionDelayTime;
    
    FAggroInfo();
};

