#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EWeaponFireMode.h"
#include "RadiusFirearmComponentInterface.generated.h"

class UActorComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusFirearmComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusFirearmComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRelevantMuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EWeaponFireMode GetCurrentFireMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAmmoInChamberTag(const UActorComponent* InternalBullet, FGameplayTag& GameplayTag);
    
};

