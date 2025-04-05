#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpawnerGenerateInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USpawnerGenerateInterface : public UInterface {
    GENERATED_BODY()
};

class ISpawnerGenerateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Generate();
    
};

