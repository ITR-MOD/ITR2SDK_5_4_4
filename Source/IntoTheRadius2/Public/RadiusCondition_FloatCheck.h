#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_FloatCheck.generated.h"

class UMathCondition_Float;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_FloatCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMathCondition_Float* ValueCheck;
    
    URadiusCondition_FloatCheck();

};

