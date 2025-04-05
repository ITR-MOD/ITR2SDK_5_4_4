#pragma once
#include "CoreMinimal.h"
#include "SpawnGroupConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSpawnGroupConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActivatedNum;
    
    FSpawnGroupConfig();
};

