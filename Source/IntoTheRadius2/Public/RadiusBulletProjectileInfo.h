#pragma once
#include "CoreMinimal.h"
#include "AmmoStaticData.h"
#include "RadiusFirearmProjectileInfo.h"
#include "RadiusBulletProjectileInfo.generated.h"

class URadiusBulletProjectileInfo;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusBulletProjectileInfo : public URadiusFirearmProjectileInfo {
    GENERATED_BODY()
public:
    URadiusBulletProjectileInfo();

    UFUNCTION(BlueprintCallable)
    URadiusBulletProjectileInfo* Initialize(const FAmmoStaticData& InAmmoData, const float InVelocity, const float InBaseDamage, const bool InForceTracer);
    
    UFUNCTION(BlueprintCallable)
    static URadiusBulletProjectileInfo* CreateInfo(const FAmmoStaticData& AmmoData, const float Velocity, const float BaseDamage, const bool ForceTracer);
    
};

