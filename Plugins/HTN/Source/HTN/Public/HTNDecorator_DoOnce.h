#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNDecorator.h"
#include "HTNDecorator_DoOnce.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNDecorator_DoOnce : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockEvenIfExecutionAborted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAbortPlanInstantly: 1;
    
    UHTNDecorator_DoOnce();

};

