#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusShellInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusShellInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusShellInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColorByAmmoType(FGameplayTag GameplayTag);
    
};

