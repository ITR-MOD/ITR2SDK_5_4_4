#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_IntCheck.generated.h"

class UMathCondition_Int;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_IntCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMathCondition_Int* ValueCheck;
    
    URadiusCondition_IntCheck();

};

