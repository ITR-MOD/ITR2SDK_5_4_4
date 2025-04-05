#pragma once
#include "CoreMinimal.h"
#include "RadiusCollisionActorPair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRadiusCollisionActorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor2;
    
    INTOTHERADIUS2_API FRadiusCollisionActorPair();
};

