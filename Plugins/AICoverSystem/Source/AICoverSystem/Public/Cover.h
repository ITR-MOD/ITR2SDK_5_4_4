#pragma once
#include "CoreMinimal.h"
#include "CoverData.h"
#include "CoverHandle.h"
#include "Cover.generated.h"

USTRUCT(BlueprintType)
struct AICOVERSYSTEM_API FCover {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverData Data;
    
    FCover();
};

