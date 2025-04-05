#pragma once
#include "CoreMinimal.h"
#include "BodyTurningConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FBodyTurningConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBodyTurningToleranceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerBodyTurningToleranceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBodyTurningSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerBodyTurningSpeed;
    
    FBodyTurningConfig();
};

