#pragma once
#include "CoreMinimal.h"
#include "AlsLeanState.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsLeanState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardAmount;
    
    FAlsLeanState();
};

