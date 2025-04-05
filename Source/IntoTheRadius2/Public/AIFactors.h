#pragma once
#include "CoreMinimal.h"
#include "AIFactors.generated.h"

class UAIFactor;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAIFactors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIFactor*> AIFactors;
    
    FAIFactors();
};

