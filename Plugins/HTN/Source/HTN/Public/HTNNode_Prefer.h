#pragma once
#include "CoreMinimal.h"
#include "EHTNNodePreferPlanAdjustmentMode.h"
#include "HTNNode_TwoBranches.h"
#include "HTNNode_Prefer.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNNode_Prefer : public UHTNNode_TwoBranches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNNodePreferPlanAdjustmentMode PlanAdjustmentMode;
    
    UHTNNode_Prefer();

};

