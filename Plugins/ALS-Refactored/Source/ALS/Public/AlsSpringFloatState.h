#pragma once
#include "CoreMinimal.h"
#include "AlsSpringFloatState.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsSpringFloatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStateValid;
    
    FAlsSpringFloatState();
};

