#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_Trigger.h"
#include "RadiusCondition_TriggerCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_TriggerCheck : public URadiusCondition_Trigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassedCheck;
    
    URadiusCondition_TriggerCheck();

};

