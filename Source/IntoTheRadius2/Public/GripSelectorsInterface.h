#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VRBPDatatypes.h"
#include "GripSelectorsInterface.generated.h"

UINTERFACE(Blueprintable)
class UGripSelectorsInterface : public UInterface {
    GENERATED_BODY()
};

class IGripSelectorsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSelector(EVRHand Hand, bool Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSelector(EVRHand Hand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAllSelectors();
    
};

