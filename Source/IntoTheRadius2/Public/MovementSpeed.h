#pragma once
#include "CoreMinimal.h"
#include "MovementSpeed.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FMovementSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Combat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonCombat;
    
    FMovementSpeed();
};

