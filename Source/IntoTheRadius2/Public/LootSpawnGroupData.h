#pragma once
#include "CoreMinimal.h"
#include "LootSpawnGroupData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FLootSpawnGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnedPoints;
    
    INTOTHERADIUS2_API FLootSpawnGroupData();
};

