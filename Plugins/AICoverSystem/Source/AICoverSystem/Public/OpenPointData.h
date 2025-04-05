#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenPointData.generated.h"

USTRUCT(BlueprintType)
struct AICOVERSYSTEM_API FOpenPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FOpenPointData();
};

