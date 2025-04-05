#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnInitializedDelegate.h"
#include "RadiusInitializeComponentInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusInitializeComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusInitializeComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnbindFromOnInitialized(const FOnInitialized& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindToOnInitializedOrFireEvent(const FOnInitialized& Event);
    
};

