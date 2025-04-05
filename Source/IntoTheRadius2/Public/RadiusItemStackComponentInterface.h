#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RadiusItemStackComponentInterface.generated.h"

class AActor;
class URadiusItemDynamicData;
class URadiusItemStackComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusItemStackComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusItemStackComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryExtractNextItem(FGameplayTag& ExtractedItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TakeItemFromOtherStackComponent(URadiusItemStackComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStackFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStackEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTopItemInStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FGameplayTag> GetItemTagsStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCurrentAmmoNumber(int32& Number) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FillStackWithItems(FGameplayTag ItemTag, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanItemBeAddedToStack(URadiusItemDynamicData* ItemToAdd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemToStackByTag(FGameplayTag ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemToStack(AActor* ItemToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortWaitingSpawnedItemReplication();
    
};

