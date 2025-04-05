#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_FloatCheck.h"
#include "RadiusCondition_MoneyCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_MoneyCheck : public URadiusCondition_FloatCheck {
    GENERATED_BODY()
public:
    URadiusCondition_MoneyCheck();

};

