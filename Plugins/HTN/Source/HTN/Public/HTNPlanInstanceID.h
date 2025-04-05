#pragma once
#include "CoreMinimal.h"
#include "HTNPlanInstanceID.generated.h"

USTRUCT(BlueprintType)
struct HTN_API FHTNPlanInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    FHTNPlanInstanceID();
};
FORCEINLINE uint32 GetTypeHash(const FHTNPlanInstanceID) { return 0; }

