#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "RadiusPooledObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusPooledObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusPooledObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPushToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopFromPool(const FTransform Transform);
    
};

