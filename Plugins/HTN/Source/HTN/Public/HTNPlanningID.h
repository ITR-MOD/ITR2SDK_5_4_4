#pragma once
#include "CoreMinimal.h"
#include "HTNPlanningID.generated.h"

USTRUCT(BlueprintType)
struct HTN_API FHTNPlanningID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    FHTNPlanningID();
};

