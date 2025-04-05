#pragma once
#include "CoreMinimal.h"
#include "GroupSpawnData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FGroupSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetOnTide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SpawnerIds;
    
    INTOTHERADIUS2_API FGroupSpawnData();
};

