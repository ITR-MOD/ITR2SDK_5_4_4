#pragma once
#include "CoreMinimal.h"
#include "DysfucntionMessageGroup.h"
#include "DysfucntionMessageArray.generated.h"

USTRUCT(BlueprintType)
struct FDysfucntionMessageArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDysfucntionMessageGroup> Messages;
    
    INTOTHERADIUS2_API FDysfucntionMessageArray();
};

