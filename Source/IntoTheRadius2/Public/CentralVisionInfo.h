#pragma once
#include "CoreMinimal.h"
#include "SightShapeInfo.h"
#include "CentralVisionInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FCentralVisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo Idle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo Combat;
    
    FCentralVisionInfo();
};

