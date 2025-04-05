#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AlsAnimNode_CurvesBlend.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsAnimNode_CurvesBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink CurvesPose;
    
    FAlsAnimNode_CurvesBlend();
};

