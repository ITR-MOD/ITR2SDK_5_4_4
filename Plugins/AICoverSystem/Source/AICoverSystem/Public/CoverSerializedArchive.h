#pragma once
#include "CoreMinimal.h"
#include "CoverSerializedArchive.generated.h"

USTRUCT(BlueprintType)
struct FCoverSerializedArchive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteData;
    
public:
    AICOVERSYSTEM_API FCoverSerializedArchive();
};

