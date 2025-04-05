#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AmmoStaticData.h"
#include "RadiusProjectileInterface.generated.h"

class AActor;
class URadiusProjectileInfo;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class URadiusProjectileInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusProjectileInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void Launch() PURE_VIRTUAL(Launch,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InitializeWithData(const FAmmoStaticData& InAmmoStaticData, const float InVelocity, const float DamageModifier, const bool bForceTracer, AActor* Owner, const TArray<AActor*>& InActorsToIgnore) PURE_VIRTUAL(InitializeWithData,);
    
    UFUNCTION(BlueprintCallable)
    virtual void Initialize(URadiusProjectileInfo* ProjectileInfo) PURE_VIRTUAL(Initialize,);
    
};

