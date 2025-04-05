#pragma once
#include "CoreMinimal.h"
#include "AmmoStaticData.h"
#include "RadiusFirearmProjectileInfo.h"
#include "RadiusShrapnelProjectileInfo.generated.h"

class URadiusShrapnelProjectileInfo;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusShrapnelProjectileInfo : public URadiusFirearmProjectileInfo {
    GENERATED_BODY()
public:
    URadiusShrapnelProjectileInfo();

    UFUNCTION(BlueprintCallable)
    URadiusShrapnelProjectileInfo* Initialize(const FAmmoStaticData& InAmmoData, const float InBaseDamage, const float InAccuracyInternal, const float InAccuracyMultiplier, const float InOffset, const float InTraceDistance);
    
    UFUNCTION(BlueprintCallable)
    static URadiusShrapnelProjectileInfo* CreateInfo(const FAmmoStaticData& AmmoData, const float BaseDamage, const float AccuracyInternal, const float AccuracyMultiplier, const float Offset, const float TraceDistance);
    
};

