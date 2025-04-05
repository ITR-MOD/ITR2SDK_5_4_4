#pragma once
#include "CoreMinimal.h"
#include "HTNStandaloneNode.h"
#include "HTNTask.generated.h"

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNTask : public UHTNStandaloneNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowTaskNameOnCurrentPlanVisualization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProcessSubmittedPlanStepsInOrder: 1;
    
    UHTNTask();

};

