#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "RadiusSpawnerInterface.generated.h"

class URadiusCondition;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusSpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusSpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnGenerated(bool bRecursive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldWaitTideToGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KillAllSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsIndependentFromRelevancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasChildSpawner(const FString& SpawnerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetGroupId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CollectConditions(TArray<URadiusCondition*>& Conditions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckSpawnDistanceRelevance(const FVector Location, bool bRecursive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckConditions();
    
};

