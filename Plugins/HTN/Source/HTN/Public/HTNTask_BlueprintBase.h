#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "EHTNNodeResult.h"
#include "EHTNPlanExecutionFinishedResult.h"
#include "HTNReplanParameters.h"
#include "HTNTask.h"
#include "HTNTask_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;
class UAITask_MakeHTNPlan;

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNTask_BlueprintBase : public UHTNTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAITask_MakeHTNPlan* OutPlanningTask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntervalCountdown TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UHTNTask_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SubmitPlanStep(int32 Cost, const FString& Description) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPlanningFailureReason(const FString& FailureReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveRecheckPlan(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionStarted(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionFinished(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, EHTNPlanExecutionFinishedResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnFinished(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, EHTNNodeResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecute(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDescribePlanStepToVisualLog(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, FName VisLogCategoryName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCreatePlanSteps(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbort(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskAborting() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BP_Replan(const FHTNReplanParameters& Params) const;
    
};

