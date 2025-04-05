#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusDifficultySettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusDifficultySettingsSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URadiusDifficultySettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void Set(const FGameplayTag& OptionTag, const FGameplayTag& ValueTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToTide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPlayersOnMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLootAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemsSellPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemsDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemsDroppedOnDeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIronMan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFriendlyFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemySpotTimeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemySpotDistanceModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyHearingDistModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBulletTracers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnomaliesDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnomaliesAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcSellPrice(float BasePrice) const;
    
};

