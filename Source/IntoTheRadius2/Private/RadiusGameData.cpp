#include "RadiusGameData.h"

URadiusGameData::URadiusGameData() {
    this->SaveBuildRevision = 0;
    this->ProfileNr = 0;
    this->bSinglePlayer = true;
    this->bIronman = false;
    this->bLoadingFromSave = true;
    this->Money = 0;
    this->Ash = 0;
    this->AccessLevel = 0;
    this->AccessLvlPoints = 0;
    this->NewItemLabelCounters.AddDefaulted(6);
    this->UID = 0;
}

float URadiusGameData::GetRealPlaytimeMinutes() const {
    return 0.0f;
}

float URadiusGameData::GetPlaytimeMinutes() const {
    return 0.0f;
}

int32 URadiusGameData::GetPlayerDataIndex(const APlayerState* PlayerState) {
    return 0;
}

TMap<FGameplayTag, FGameplayTag> URadiusGameData::GetDifficultySettings() const {
    return TMap<FGameplayTag, FGameplayTag>();
}

void URadiusGameData::ClearDynamicDatas(const UObject* WorldContextObject) {
}


