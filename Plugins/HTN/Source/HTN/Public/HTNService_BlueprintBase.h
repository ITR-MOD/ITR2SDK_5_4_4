#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeResult.h"
#include "EHTNPlanExecutionFinishedResult.h"
#include "HTNReplanParameters.h"
#include "HTNService.h"
#include "HTNService_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class HTN_API UHTNService_BlueprintBase : public UHTNService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UHTNService_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionStarted(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnPlanExecutionFinished(AActor* Owner, AAIController* OwnerController, APawn* ControlledPawn, EHTNPlanExecutionFinishedResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* Owner, AAIController* OwnerAsController, APawn* ControlledPawn, EHTNNodeResult NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BP_Replan(const FHTNReplanParameters& Params) const;
    
};

