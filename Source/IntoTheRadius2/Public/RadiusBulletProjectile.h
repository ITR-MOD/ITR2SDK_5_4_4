#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "RadiusProjectile.h"
#include "RadiusBulletProjectile.generated.h"

class URadiusBulletComponent;
class URadiusBulletImpulseComponent;
class URadiusBulletTracerComponent;
class USphereComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusBulletProjectile : public ARadiusProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusBulletTracerComponent* BulletTracerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusBulletComponent* BulletComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusBulletImpulseComponent* BulletImpulseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ParticleScaleInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ParticleScaleOutputRange;
    
public:
    ARadiusBulletProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnImpact(const FHitResult& Hit, const float ShotDistance, const float Scale, const bool IsCritical, const bool IsArmor, const bool bWasPenetrated);

    UFUNCTION(BlueprintCallable)
    void OnHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void BulletComponentRicochet(const FVector& Location, const FVector& Force, const bool IsPenetration);
    
    UFUNCTION(BlueprintCallable)
    void BulletComponentImpact(const FHitResult& Hit, const float ShotDistance, const bool IsCritical, const bool IsArmor);
    
};

