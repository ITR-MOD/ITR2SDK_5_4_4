#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHTNResetDoOnceAffectedDecorators.h"
#include "HTNTask.h"
#include "HTNTask_ResetDoOnce.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_ResetDoOnce : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNResetDoOnceAffectedDecorators AffectedDecorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UHTNTask_ResetDoOnce();

};

