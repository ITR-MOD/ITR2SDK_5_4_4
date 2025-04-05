#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusInfoWidgetInterface.generated.h"

class URadiusDataComponent;

UINTERFACE(Blueprintable)
class URadiusInfoWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusInfoWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Enable(URadiusDataComponent* DataComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Disable();
    
};

