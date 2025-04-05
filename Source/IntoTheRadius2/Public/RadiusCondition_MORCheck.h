#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_MORCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_MORCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URadiusCondition*> Conditions;
    
    URadiusCondition_MORCheck();

};

