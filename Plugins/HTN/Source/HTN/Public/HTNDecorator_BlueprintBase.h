#pragma once
#include "CoreMinimal.h"
#include "EHTNDecoratorConditionCheckType.h"
#include "EHTNNodeResult.h"
#include "EHTNPlanExecutionFinishedResult.h"
#include "HTNDecorator.h"
#include "HTNReplanParameters.h"
#include "HTNDecorator_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNDecorator_BlueprintBase : public UHTNDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UHTNDecorator_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExit(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionStarted(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionFinished(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, EHTNPlanExecutionFinishedResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanEnter(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 ReceiveModifyStepCost(int32 OriginalCost, AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn, EHTNNodeResult NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PerformConditionCheck(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn, EHTNDecoratorConditionCheckType CheckType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BP_Replan(const FHTNReplanParameters& Params) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_NotifyEventBasedCondition(bool bRawConditionValue, bool bCanAbortPlanInstantly);
    
};

