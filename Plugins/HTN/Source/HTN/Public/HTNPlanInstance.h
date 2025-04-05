#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHTNPlanInstanceStatus.h"
#include "HTNPlanInstanceConfig.h"
#include "HTNPlanInstanceID.h"
#include "HTNPlanInstance.generated.h"

class UAITask_MakeHTNPlan;
class UHTNComponent;
class UHTNNode;

UCLASS(Blueprintable, DefaultToInstanced)
class HTN_API UHTNPlanInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNPlanInstanceStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNPlanInstanceConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHTNComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNPlanInstanceID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAITask_MakeHTNPlan* CurrentPlanningTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PlanMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHTNNode*> NodeInstances;
    
public:
    UHTNPlanInstance();

};

