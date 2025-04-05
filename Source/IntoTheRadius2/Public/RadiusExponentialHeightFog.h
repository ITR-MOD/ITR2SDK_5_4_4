#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusExponentialHeightFog.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusExponentialHeightFog : public AActor {
    GENERATED_BODY()
public:
    ARadiusExponentialHeightFog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetDensity() const;
    
};

