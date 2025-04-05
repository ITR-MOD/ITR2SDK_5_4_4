#pragma once
#include "CoreMinimal.h"
#include "LootSpawnPointData.h"
#include "LootSpawnPointDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FLootSpawnPointDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootSpawnPointData> PointData;
    
    INTOTHERADIUS2_API FLootSpawnPointDataContainer();
};

