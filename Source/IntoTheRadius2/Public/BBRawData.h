#pragma once
#include "CoreMinimal.h"
#include "BBRawData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct INTOTHERADIUS2_API FBBRawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawBBValue;
    
    FBBRawData();
};

