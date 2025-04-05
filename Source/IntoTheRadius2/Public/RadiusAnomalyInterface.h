#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusAnomalyInterface.generated.h"

class UAnomalySaveData;

UINTERFACE(Blueprintable)
class URadiusAnomalyInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusAnomalyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnomalyUniqueId(const FString& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadFromData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnomalySaveData* GetSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetAnomalyUniqueId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetAnomalyTypeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateAnomalyUniqueId();
    
};

