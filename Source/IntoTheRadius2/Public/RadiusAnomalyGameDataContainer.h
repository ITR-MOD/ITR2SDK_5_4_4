#pragma once
#include "CoreMinimal.h"
#include "RadiusAnomalyGameData.h"
#include "RadiusAnomalyGameDataContainer.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FRadiusAnomalyGameDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusAnomalyGameData> AnomalySaveData;
    
    INTOTHERADIUS2_API FRadiusAnomalyGameDataContainer();
};

