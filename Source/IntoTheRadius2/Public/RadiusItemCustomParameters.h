#pragma once
#include "CoreMinimal.h"
#include "RadiusItemCustomParameters.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FRadiusItemCustomParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalValue;
    
    FRadiusItemCustomParameters();
};

