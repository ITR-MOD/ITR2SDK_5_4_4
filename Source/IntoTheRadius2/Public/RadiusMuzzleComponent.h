#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RadiusComponentInterface.h"
#include "RadiusMuzzleComponentInterface.h"
#include "RadiusWeaponComponentInterface.h"
#include "WeaponStaticData.h"
#include "RadiusMuzzleComponent.generated.h"

class UActorComponent;
class UCurveFloat;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusMuzzleComponent : public USceneComponent, public IRadiusComponentInterface, public IRadiusWeaponComponentInterface, public IRadiusMuzzleComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundDryShot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* ParticleComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UCurveFloat*> SpeedDropCurves;
    
public:
    URadiusMuzzleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShootBullet(FGameplayTag BulletTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayParticleFX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOwnerWeaponStaticData(FWeaponStaticData& WeaponStaticData);
    

    // Fix for true pure virtual functions not being implemented
};

