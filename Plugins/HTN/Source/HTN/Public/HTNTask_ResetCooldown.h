#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHTNResetCooldownAffectedCooldowns.h"
#include "HTNTask.h"
#include "HTNTask_ResetCooldown.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_ResetCooldown : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNResetCooldownAffectedCooldowns AffectedCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UHTNTask_ResetCooldown();

};

