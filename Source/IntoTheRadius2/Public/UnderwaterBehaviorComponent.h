#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnUnderWaterStateDelegate.h"
#include "RadiusDamageCauserInterface.h"
#include "Templates/SubclassOf.h"
#include "UnderwaterBehaviorComponent.generated.h"

class UParticleSystem;
class URadiusDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UUnderwaterBehaviorComponent : public UActorComponent, public IRadiusDamageCauserInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnderWaterState UnderWaterStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* WaterSplashEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideEffectFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterSplashEffectFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadiusDamageType> DamageTypeClass;
    
public:
    UUnderwaterBehaviorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDepth() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

