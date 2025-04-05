#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition.h"
#include "RadiusCondition_MinimumPlayerLevelCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_MinimumPlayerLevelCheck : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPlayerLevel;
    
    URadiusCondition_MinimumPlayerLevelCheck();

};

