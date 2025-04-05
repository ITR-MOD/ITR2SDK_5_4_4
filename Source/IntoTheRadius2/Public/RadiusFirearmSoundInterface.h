#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusFirearmSoundInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusFirearmSoundInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusFirearmSoundInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShootSound(float FireRateBPM, bool bOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShootFailedSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptShootSound();
    
};

