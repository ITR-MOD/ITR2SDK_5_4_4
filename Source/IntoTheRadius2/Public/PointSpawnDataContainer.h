#pragma once
#include "CoreMinimal.h"
#include "PointSpawnData.h"
#include "PointSpawnDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FPointSpawnDataContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointSpawnData> PointData;
    
public:
    INTOTHERADIUS2_API FPointSpawnDataContainer();
};

