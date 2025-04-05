#pragma once
#include "CoreMinimal.h"
#include "LootToSpawn.h"
#include "LootSpawnPointData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FLootSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootToSpawn> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDisabled;
    
    INTOTHERADIUS2_API FLootSpawnPointData();
};

