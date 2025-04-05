#include "GameConfig.h"

UGameConfig::UGameConfig() {
    this->LevelsLoadingDelay = 2.00f;
    this->CoopSyncTimeSeconds = 20.00f;
    this->bPauseGameInIngameMenuInStandalone = true;
    this->TidePeriodInHours = 72.00f;
    this->TideTimeSkipInHours = 2.00f;
    this->TideAlarmStartSeconds = 1800.00f;
    this->DayStartAt = 8;
    this->NightStartAt = 21;
    this->bSpawnLevelItemsImmediately = false;
    this->SpawnLevelItemsNumPercent = 0.03f;
    this->SpawnDistanceForLoot = 1000.00f;
    this->SpawnDistanceForArtefactNests = 5000.00f;
    this->SpawnDistanceForMonsters = 10000.00f;
    this->SpawnDistanceForAnomalies = 20000.00f;
    this->MultiplePlayersSpawnShiftRadius = 200.00f;
    this->MaxGuestsInGame = 1;
    this->DetectorRange = 3000.00f;
    this->TimeToResetShop = 15.00f;
    this->DefaultItemRespawnTime = 1.00f;
    this->ShopVisitsToRemoveNewItemLabel = 3;
    this->ItemInfoMaxNum = 0;
}

float UGameConfig::GetTidePeriodInHours(const UObject* WorldContextObject) const {
    return 0.0f;
}

FGameplayTag UGameConfig::GetCurrentLevelTag(const UObject* WorldContextObject) const {
    return FGameplayTag{};
}

FGameplayTag UGameConfig::FindTagByLevel(const FString& MapName) const {
    return FGameplayTag{};
}

bool UGameConfig::FindMarkerConfig(const FGameplayTag MarkerTag, FMarkerConfig& MarkerConfig) const {
    return false;
}


