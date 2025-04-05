#pragma once
#include "CoreMinimal.h"
#include "BrainComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "EHTNFindExtensionResult.h"
#include "HTNPlanInstanceID.h"
#include "HTNReplanParameters.h"
#include "OnHTNPlanExecutionFinishedBPDelegate.h"
#include "OnHTNPlanExecutionStartedBPDelegate.h"
#include "Templates/SubclassOf.h"
#include "HTNComponent.generated.h"

class UAITask_MakeHTNPlan;
class UHTN;
class UHTNExtension;
class UHTNPlanInstance;
class UObject;
class UWorldStateProxy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HTN_API UHTNComponent : public UBrainComponent, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlanLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNestedSubPlanDepth;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHTNPlanExecutionStartedBP PlanExecutionStartedBPEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHTNPlanExecutionFinishedBP PlanExecutionFinishedBPEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* CurrentHTNAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* PendingHTNAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHTNPlanInstance* RootPlanInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FHTNPlanInstanceID, UHTNPlanInstance*> SubPlanInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldStateProxy* PlanningWorldStateProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldStateProxy* BlackboardProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UHTNExtension>, UHTNExtension*> Extensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAITask_MakeHTNPlan*> PlanningTasksPool;
    
public:
    UHTNComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopHTN(bool bDisregardLatentAbort);
    
    UFUNCTION(BlueprintCallable)
    void StartHTN(UHTN* Asset);
    
    UFUNCTION(BlueprintCallable)
    bool SetDynamicHTN(FGameplayTag InjectTag, UHTN* HTN, bool bForceReplanIfChangedNodesInCurrentPlan, bool bForceReplanIfChangedDuringPlanning, bool bForceAbortCurrentPlanIfForcingReplan);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveExtensionByClass(TSubclassOf<UHTNExtension> ExtensionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForAbortingTasks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoppingHTN() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlanning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbortingPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeferredStop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeferredAbort() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveTasks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivePlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldStateProxy* GetWorldStateProxy(bool bForPlanning) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTN* GetDynamicHTN(FGameplayTag InjectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTN* GetCurrentHTN() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownEndTime(const UObject* CooldownOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldStateProxy* GetBlackboardProxy() const;
    
    UFUNCTION(BlueprintCallable)
    UHTNExtension* FindOrAddExtensionByClass(TSubclassOf<UHTNExtension> ExtensionClass);
    
    UFUNCTION(BlueprintCallable)
    void CancelActivePlanning();
    
    UFUNCTION(BlueprintCallable)
    void BP_Replan(const FHTNReplanParameters& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UHTNExtension* BP_FindExtensionByClass(EHTNFindExtensionResult& OutResult, TSubclassOf<UHTNExtension> ExtensionClass) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownDuration(const UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration);
    

    // Fix for true pure virtual functions not being implemented
};

