#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusResourceInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusResourceInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusResourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestExchangeResources();
    
};

