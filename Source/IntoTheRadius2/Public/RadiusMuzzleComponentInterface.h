#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RadiusMuzzleComponentInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusMuzzleComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusMuzzleComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShootProjectileWithTransform(FTransform InTransform, FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShootProjectile(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOwningWeapon(AActor* WeaponActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreloadAmmoData(const TSet<FGameplayTag>& AmmoTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSilencerMuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMuzzlePriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBulletStartTransform() const;
    
};

