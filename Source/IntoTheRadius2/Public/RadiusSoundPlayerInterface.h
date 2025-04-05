#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusSoundPlayerInterface.generated.h"

class USoundBase;

UINTERFACE(Blueprintable)
class URadiusSoundPlayerInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusSoundPlayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySound(const USoundBase* Sound);
    
};

