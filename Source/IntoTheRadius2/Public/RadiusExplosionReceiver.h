#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExplosionReceiverPointInfo.h"
#include "RadiusExplosionReceiver.generated.h"

UINTERFACE(Blueprintable)
class URadiusExplosionReceiver : public UInterface {
    GENERATED_BODY()
};

class IRadiusExplosionReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FExplosionReceiverPointInfo> GetDamagePoints() const;
    
};

