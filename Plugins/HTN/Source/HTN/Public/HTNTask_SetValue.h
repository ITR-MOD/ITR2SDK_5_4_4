#pragma once
#include "CoreMinimal.h"
#include "HTNTask_BlackboardBase.h"
#include "WorldstateSetValueContainer.h"
#include "HTNTask_SetValue.generated.h"

UCLASS(Blueprintable)
class HTN_API UHTNTask_SetValue : public UHTNTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldstateSetValueContainer Value;
    
public:
    UHTNTask_SetValue();

};

