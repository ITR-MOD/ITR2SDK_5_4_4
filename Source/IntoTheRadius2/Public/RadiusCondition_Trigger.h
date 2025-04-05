#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusCondition.h"
#include "RadiusCondition_Trigger.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_Trigger : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerTag;
    
    URadiusCondition_Trigger();

};

