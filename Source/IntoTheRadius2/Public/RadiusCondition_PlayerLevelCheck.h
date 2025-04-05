#pragma once
#include "CoreMinimal.h"
#include "MinMaxInt.h"
#include "RadiusCondition.h"
#include "RadiusCondition_PlayerLevelCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_PlayerLevelCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxInt PlayerLevelRange;
    
    URadiusCondition_PlayerLevelCheck();

};

