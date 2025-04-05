#pragma once
#include "CoreMinimal.h"
#include "RadiusCollisionIgnorePair.generated.h"

USTRUCT(BlueprintType)
struct FRadiusCollisionIgnorePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName2;
    
    INTOTHERADIUS2_API FRadiusCollisionIgnorePair();
};

