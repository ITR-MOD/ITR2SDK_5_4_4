#pragma once
#include "CoreMinimal.h"
#include "MinMaxInt.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FMinMaxInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    INTOTHERADIUS2_API FMinMaxInt();
};

