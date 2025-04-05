#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusWeaponComponentInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusWeaponComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusWeaponComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsComponentReadyToShoot() const;
    
};

