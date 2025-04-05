#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusNpcGameData.h"
#include "RadiusNpcSaveInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusNpcSaveInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusNpcSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestoreFromSave(const FRadiusNpcGameData& SaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNPCHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FillSaveData(FRadiusNpcGameData& SaveData);
    
};

