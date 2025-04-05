#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNExtension.h"
#include "HTNExtension_SubNetworkDynamic.generated.h"

class UHTN;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_SubNetworkDynamic : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UHTN*> GameplayTagToDynamicHTN;
    
public:
    UHTNExtension_SubNetworkDynamic();

    UFUNCTION(BlueprintCallable)
    bool SetDynamicHTN(FGameplayTag InjectTag, UHTN* HTN, bool bForceReplanIfChangedNodesInCurrentPlan, bool bForceReplanIfChangedDuringPlanning, bool bForceAbortCurrentPlanIfForcingReplan);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamicHTNs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTN* GetDynamicHTN(FGameplayTag InjectTag) const;
    
};

