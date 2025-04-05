#pragma once
#include "CoreMinimal.h"
#include "MinMaxFloat.h"
#include "MinMaxVector.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FMinMaxVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat Z;
    
    INTOTHERADIUS2_API FMinMaxVector();
};

