#pragma once
#include "CoreMinimal.h"
#include "MinMaxFloat.h"
#include "SightShapeInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSightShapeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat ZoneDetectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DetectTimeCurve;
    
    FSightShapeInfo();
};

