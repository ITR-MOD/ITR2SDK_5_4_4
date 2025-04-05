#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "RadiusPhysicsAnimationInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusPhysicsAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusPhysicsAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitReaction(const FHitResult HitResult, const FVector Impulse, const FVector BulletLocation, const bool IsCritical);
    
};

