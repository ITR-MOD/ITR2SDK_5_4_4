#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusInternalBulletInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusInternalBulletInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusInternalBulletInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBulletAmmo(FGameplayTag AmmoTypeID, bool bIsShell);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBulletInvisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsShell();
    
};

