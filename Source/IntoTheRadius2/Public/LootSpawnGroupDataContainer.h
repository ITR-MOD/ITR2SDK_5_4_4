#pragma once
#include "CoreMinimal.h"
#include "LootSpawnGroupData.h"
#include "LootSpawnGroupDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FLootSpawnGroupDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootSpawnGroupData> SpawnData;
    
    INTOTHERADIUS2_API FLootSpawnGroupDataContainer();
};

