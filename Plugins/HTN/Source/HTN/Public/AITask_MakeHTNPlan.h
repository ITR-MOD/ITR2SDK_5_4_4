#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "HTNPlanInstanceID.h"
#include "HTNPlanningID.h"
#include "AITask_MakeHTNPlan.generated.h"

class UHTN;
class UHTNComponent;

UCLASS(Blueprintable)
class HTN_API UAITask_MakeHTNPlan : public UAITask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHTNPlanningID PlanningID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHTNComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHTNPlanInstanceID PlanInstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHTN* TopLevelHTN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsWaitingForNodeToMakePlanExpansions: 1;
    
public:
    UAITask_MakeHTNPlan();

};

