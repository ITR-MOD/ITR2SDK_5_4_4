#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanInstanceFinishReaction.h"
#include "EHTNSubPlanNodeAbortedReaction.h"
#include "HTNTask.h"
#include "HTNTask_SubPlan.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_SubPlan : public UHTNTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlanDuringOuterPlanPlanning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlanDuringExecution: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipPlanningOnFirstExecutionIfPlanAlreadyAvailable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNPlanInstanceFinishReaction OnSubPlanSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNPlanInstanceFinishReaction OnSubPlanFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNSubPlanNodeAbortedReaction OnThisNodeAborted;
    
public:
    UHTNTask_SubPlan();

};

