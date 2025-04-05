#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_IntCheck.h"
#include "RadiusCondition_MissionAmountCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_MissionAmountCheck : public URadiusCondition_IntCheck {
    GENERATED_BODY()
public:
    URadiusCondition_MissionAmountCheck();

};

