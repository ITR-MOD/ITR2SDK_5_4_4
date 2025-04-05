#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_ORCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_ORCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URadiusCondition*> ORConditions;
    
    URadiusCondition_ORCheck();

};

