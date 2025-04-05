#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MinMaxFloat.h"
#include "MinMaxInt.h"
#include "SpawnPointConfig.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSpawnPointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SpawnConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxInt SpawnLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat SpawnDelay;
    
    FSpawnPointConfig();
};

