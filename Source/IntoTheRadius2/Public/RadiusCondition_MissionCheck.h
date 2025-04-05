#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_Trigger.h"
#include "RadiusCondition_MissionCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_MissionCheck : public URadiusCondition_Trigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
    URadiusCondition_MissionCheck();

};

