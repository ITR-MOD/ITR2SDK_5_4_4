#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusDamageCauserInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusDamageCauserInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusDamageCauserInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetDamageCauserTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDamageCauserName() const;
    
};

