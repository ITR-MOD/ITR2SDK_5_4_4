#pragma once
#include "CoreMinimal.h"
#include "IgnoreCollisionJob.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIgnoreCollisionJob {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    INTOTHERADIUS2_API FIgnoreCollisionJob();
};

