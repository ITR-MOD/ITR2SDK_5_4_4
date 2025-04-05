#pragma once
#include "CoreMinimal.h"
#include "RadiusCollisionIgnorePair.h"
#include "RadiusCollisionIgnorePairArray.generated.h"

USTRUCT(BlueprintType)
struct FRadiusCollisionIgnorePairArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusCollisionIgnorePair> PairArray;
    
    INTOTHERADIUS2_API FRadiusCollisionIgnorePairArray();
};

