#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlsFootState.h"
#include "AlsFeetState.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsFeetState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootPlantedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeetCrossingAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlsFootState Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlsFootState Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxPelvisOffsetZ;
    
    FAlsFeetState();
};

