#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_NotCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_NotCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusCondition* NotCondition;
    
    URadiusCondition_NotCheck();

};

