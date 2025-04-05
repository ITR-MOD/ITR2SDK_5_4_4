#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArtefactNestInterface.generated.h"

class URadiusArtefactNestSaveData;

UINTERFACE(Blueprintable, MinimalAPI)
class UArtefactNestInterface : public UInterface {
    GENERATED_BODY()
};

class IArtefactNestInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUniqueId(const FString& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadFromData(const URadiusArtefactNestSaveData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasArtefact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetUniqueId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URadiusArtefactNestSaveData* GetSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNestLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateUniqueId();
    
};

