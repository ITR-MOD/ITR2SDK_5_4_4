#include "RadiusDifficultySettingsSubsystem.h"

URadiusDifficultySettingsSubsystem::URadiusDifficultySettingsSubsystem() {
}

void URadiusDifficultySettingsSubsystem::Set(const FGameplayTag& OptionTag, const FGameplayTag& ValueTag) {
}

float URadiusDifficultySettingsSubsystem::GetTimeToTide() const {
    return 0.0f;
}

bool URadiusDifficultySettingsSubsystem::GetShowSubtitles() const {
    return false;
}

bool URadiusDifficultySettingsSubsystem::GetShowPlayersOnMap() const {
    return false;
}

float URadiusDifficultySettingsSubsystem::GetMissionRewards() const {
    return 0.0f;
}

FGameplayTag URadiusDifficultySettingsSubsystem::GetLootAmount() const {
    return FGameplayTag{};
}

float URadiusDifficultySettingsSubsystem::GetItemsSellPrice() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetItemsDurability() const {
    return 0.0f;
}

FGameplayTag URadiusDifficultySettingsSubsystem::GetItemsDroppedOnDeath() const {
    return FGameplayTag{};
}

bool URadiusDifficultySettingsSubsystem::GetIronMan() const {
    return false;
}

float URadiusDifficultySettingsSubsystem::GetHunger() const {
    return 0.0f;
}

bool URadiusDifficultySettingsSubsystem::GetFriendlyFire() const {
    return false;
}

float URadiusDifficultySettingsSubsystem::GetEnemySpotTimeModifier() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetEnemySpotDistanceModifier() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetEnemyHearingDistModifier() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetEnemyHealth() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetEnemyDamageModifier() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetEnemyAmount() const {
    return 0.0f;
}

FGameplayTag URadiusDifficultySettingsSubsystem::GetBulletTracers() const {
    return FGameplayTag{};
}

float URadiusDifficultySettingsSubsystem::GetAnomaliesDamage() const {
    return 0.0f;
}

float URadiusDifficultySettingsSubsystem::GetAnomaliesAmount() const {
    return 0.0f;
}

int32 URadiusDifficultySettingsSubsystem::CalcSellPrice(float BasePrice) const {
    return 0;
}


