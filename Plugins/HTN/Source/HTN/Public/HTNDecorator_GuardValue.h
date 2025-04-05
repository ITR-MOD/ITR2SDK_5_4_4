#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_BlackboardBase.h"
#include "WorldstateSetValueContainer.h"
#include "HTNDecorator_GuardValue.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNDecorator_GuardValue : public UHTNDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldstateSetValueContainer Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetValueOnEnterPlan: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestoreValueOnExitPlan: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestoreValueOnAbort: 1;
    
public:
    UHTNDecorator_GuardValue();

};

