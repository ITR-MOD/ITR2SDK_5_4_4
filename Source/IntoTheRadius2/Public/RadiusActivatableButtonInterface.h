#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusActivatableButtonInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusActivatableButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusActivatableButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwapActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

