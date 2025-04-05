#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "AmmoStaticData.h"
#include "FLWidgets.generated.h"

class ARadiusItemBase;
class UHierarchicalInstancedStaticMeshComponent;
class UObject;
class URadiusDataComponent;
class URadiusItemDynamicData;
class URadiusItemStackComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLWidgets : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLWidgets();

    UFUNCTION(BlueprintCallable)
    static void UpdateAllBullets(UObject* Mag, UHierarchicalInstancedStaticMeshComponent* Bullets, URadiusItemStackComponent* StackComponent, USkeletalMeshComponent* SkeletalMeshComponent, URadiusDataComponent* DataComponent, bool IsInAmmoBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemListsEquals(TArray<FGameplayTag> A, TArray<FGameplayTag> B);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetDifferentElementsBetweenLists(const TArray<FGameplayTag>& A, const TArray<FGameplayTag>& B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetChamberedAmmoData(const UObject* WorldContextObject, URadiusItemDynamicData* WeaponDynamicData, FAmmoStaticData& AmmoStaticData, bool& HasChamberedData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GeneratePlayerBasketItems(const UObject* WorldContextObject, const FString& PlayerContainerUID, TArray<ARadiusItemBase*>& LOCPlayerBasket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertItemsToTags(TArray<ARadiusItemBase*> Items, TArray<FGameplayTag>& OutTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CalculatePriceByTags(const UObject* WorldContextObject, const TArray<FGameplayTag>& ItemTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CalculatePrice(const UObject* WorldContextObject, TArray<ARadiusItemBase*> Items, int32& Price);
    
};

