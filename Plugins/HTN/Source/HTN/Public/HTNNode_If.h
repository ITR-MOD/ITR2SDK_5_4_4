#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeIfPlanAdjustmentMode.h"
#include "HTNNode_TwoBranches.h"
#include "HTNNode_If.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_If : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanConditionsInterruptTrueBranch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanConditionsInterruptFalseBranch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNNodeIfPlanAdjustmentMode PlanAdjustmentMode;
    
    UHTNNode_If();

};

