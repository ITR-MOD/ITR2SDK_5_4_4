#pragma once
#include "CoreMinimal.h"
#include "CoverPartitionHash.generated.h"

USTRUCT(BlueprintType)
struct AICOVERSYSTEM_API FCoverPartitionHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Z;
    
public:
    FCoverPartitionHash();
};
FORCEINLINE uint32 GetTypeHash(const FCoverPartitionHash) { return 0; }

