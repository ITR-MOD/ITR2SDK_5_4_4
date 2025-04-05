#pragma once
#include "CoreMinimal.h"
#include "NPCStatsStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FNPCStatsStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHealth;
    
    FNPCStatsStaticData();
};

