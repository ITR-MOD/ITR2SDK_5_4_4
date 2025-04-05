#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusTimeData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FRadiusTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveDateTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 GameRealTimeTicks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 GameRealTicks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LastTideRealTicks;
    
    INTOTHERADIUS2_API FRadiusTimeData();
};

