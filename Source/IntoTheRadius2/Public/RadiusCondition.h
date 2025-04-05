#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RadiusCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition : public UObject {
    GENERATED_BODY()
public:
    URadiusCondition();

};

