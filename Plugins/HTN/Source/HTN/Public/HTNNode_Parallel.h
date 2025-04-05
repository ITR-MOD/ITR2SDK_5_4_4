#pragma once
#include "CoreMinimal.h"
#include "HTNNode_TwoBranches.h"
#include "HTNNode_Parallel.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_Parallel : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitForSecondaryBranchToComplete: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoopSecondaryBranchUntilPrimaryBranchCompletes: 1;
    
    UHTNNode_Parallel();

};

