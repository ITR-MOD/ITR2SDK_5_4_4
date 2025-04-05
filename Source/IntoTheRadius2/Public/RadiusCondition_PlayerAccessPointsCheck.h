#pragma once
#include "CoreMinimal.h"
#include "RadiusCondition_IntCheck.h"
#include "RadiusCondition_PlayerAccessPointsCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_PlayerAccessPointsCheck : public URadiusCondition_IntCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessPointsThreshold;
    
    URadiusCondition_PlayerAccessPointsCheck();

};

