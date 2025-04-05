#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNDecorator.h"
#include "HTNDecorator_Cooldown.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNDecorator_Cooldown : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockEvenIfExecutionAborted: 1;
    
    UHTNDecorator_Cooldown();

};

