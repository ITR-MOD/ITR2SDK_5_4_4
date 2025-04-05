#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/HitResult.h"
#include "RadiusProjectileImpactsComponentInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusProjectileImpactsComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusProjectileImpactsComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Impact(const FHitResult HitResult, const float Distance, const bool IsCritical, const float ImpactScale);
    
};

