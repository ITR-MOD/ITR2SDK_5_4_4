#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanInstanceFinishReaction.h"
#include "HTNPlanInstanceConfig.generated.h"

class UHTNStandaloneNode;

USTRUCT(BlueprintType)
struct HTN_API FHTNPlanInstanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNPlanInstanceFinishReaction SucceededReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNPlanInstanceFinishReaction FailedReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlanDuringExecution: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipPlanningOnFirstExecutionIfPlanAlreadyAvailable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTNStandaloneNode* RootNodeOverride;
    
    FHTNPlanInstanceConfig();
};

