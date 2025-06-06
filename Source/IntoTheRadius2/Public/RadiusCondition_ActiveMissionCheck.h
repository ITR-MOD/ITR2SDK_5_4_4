#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_Trigger.h"
#include "RadiusCondition_ActiveMissionCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_ActiveMissionCheck : public URadiusCondition_Trigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    URadiusCondition_ActiveMissionCheck();

};

