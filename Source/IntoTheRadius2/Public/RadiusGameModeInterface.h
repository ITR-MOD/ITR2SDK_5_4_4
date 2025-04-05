#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusGameModeInterface.generated.h"

class AController;

UINTERFACE(Blueprintable)
class URadiusGameModeInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusGameModeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespawnPlayer(AController* Controller);
    
};

