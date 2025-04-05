#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmmoStaticData.h"
#include "RadiusPooledObjectInterface.h"
#include "RadiusProjectileInterface.h"
#include "RadiusProjectile.generated.h"

class URadiusProjectileInfo;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusProjectile : public AActor, public IRadiusProjectileInterface, public IRadiusPooledObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDisposeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDisposeTime;
    
public:
    ARadiusProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Dispose();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void Launch() override PURE_VIRTUAL(Launch,);
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithData(const FAmmoStaticData& InAmmoStaticData, const float InVelocity, const float DamageModifier, const bool bForceTracer, AActor* NewOwner, const TArray<AActor*>& InActorsToIgnore) override PURE_VIRTUAL(InitializeWithData,);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(URadiusProjectileInfo* ProjectileInfo) override PURE_VIRTUAL(Initialize,);
    
};

