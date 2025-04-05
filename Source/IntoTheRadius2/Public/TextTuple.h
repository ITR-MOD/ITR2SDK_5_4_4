#pragma once
#include "CoreMinimal.h"
#include "TextTuple.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FTextTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Second;
    
    INTOTHERADIUS2_API FTextTuple();
};

