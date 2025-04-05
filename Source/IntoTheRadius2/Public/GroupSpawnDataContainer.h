#pragma once
#include "CoreMinimal.h"
#include "GroupSpawnData.h"
#include "GroupSpawnDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FGroupSpawnDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGroupSpawnData> SpawnData;
    
    INTOTHERADIUS2_API FGroupSpawnDataContainer();
};

