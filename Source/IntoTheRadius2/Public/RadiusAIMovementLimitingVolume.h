#pragma once
#include "CoreMinimal.h"
#include "RadiusVolume.h"
#include "RadiusAIMovementLimitingVolume.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusAIMovementLimitingVolume : public ARadiusVolume {
    GENERATED_BODY()
public:
    ARadiusAIMovementLimitingVolume(const FObjectInitializer& ObjectInitializer);

};

