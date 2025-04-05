#include "RadiusCommonGameData.h"

URadiusCommonGameData::URadiusCommonGameData() {
    this->IsFirstGameStart = true;
    this->LastProfile = 1;
    this->bTutorialFinished = false;
    this->TotalSeconds = 0.00f;
}

void URadiusCommonGameData::UpdateVisitedCoopGames(const FBlueprintSessionResult& SessionInfo) {
}

void URadiusCommonGameData::SetTutorialFinished() {
}

void URadiusCommonGameData::SetPlayerVoiceVolume(const FString& playerName, float NewVolume) {
}

void URadiusCommonGameData::SetPlayerVoiceMuted(const FString& playerName, bool bIsMuted) {
}

void URadiusCommonGameData::SetLastProfile(const int32 ProfileNum) {
}

void URadiusCommonGameData::SetFirstStartDisable() {
}

bool URadiusCommonGameData::IsFirstStart() const {
    return false;
}

bool URadiusCommonGameData::HadVisitedCoopGame(const FBlueprintSessionResult& SessionInfo) const {
    return false;
}

float URadiusCommonGameData::GetTotalPlayTimeInSeconds() const {
    return 0.0f;
}

float URadiusCommonGameData::GetPlayerVoiceVolume(const FString& playerName) {
    return 0.0f;
}

bool URadiusCommonGameData::GetIsPlayerVoiceMuted(const FString& playerName) {
    return false;
}

void URadiusCommonGameData::ForgetVisitedCoopGame(const FVisitedCoopGame& GameInfo) {
}

void URadiusCommonGameData::FindGameInSessions(const FVisitedCoopGame& CoopGame, const TArray<FBlueprintSessionResult>& FoundSessions, bool& bFound, FBlueprintSessionResult& SessionInfo) {
}

void URadiusCommonGameData::AddTimeStampIfNeeded() {
}


