#include "RadiusGameDataSubsystem.h"

URadiusGameDataSubsystem::URadiusGameDataSubsystem() {
    this->SinglePlayerProfilesNumber = 4;
    this->SinglePlayerManualSavesNumber = 4;
    this->SinglePlayerAutoSavesNumber = 3;
    this->MultiplayerHostProfilesNumber = 4;
    this->MultiplayerGuestSlotsNumber = 4;
    this->MultiplayerManualSavesNumber = 4;
    this->MultiplayerAutoSavesNumber = 3;
    this->MinSinglePlayerProfileNumber = 1;
    this->MinSinglePlayerManualSaveNumber = 1;
    this->MinSinglePlayerAutoSaveNumber = 1;
    this->MinMultiplayerHostProfileNumber = 1;
    this->MinMultiplayerGuestSlotNumber = 1;
    this->MinMultiplayerManualSaveNumber = 1;
    this->MinMultiplayerAutoSaveNumber = 1;
    this->EditorProfileNumber = 42;
    this->PrintLogs = false;
    this->GameData = NULL;
    this->CommonGameData = NULL;
}

void URadiusGameDataSubsystem::UnloadGameData() {
}

bool URadiusGameDataSubsystem::SaveLosslessItem(const FString& ContainerID, FGameplayTag ItemTypeID, const FString& ItemInstanceID) {
    return false;
}

void URadiusGameDataSubsystem::SaveGameData(const int32 ProfileNr, const int32 SaveNr) {
}

void URadiusGameDataSubsystem::SaveCommonGameData() const {
}

URadiusGameData* URadiusGameDataSubsystem::ReadGameData(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer) {
    return NULL;
}

void URadiusGameDataSubsystem::OnFirstGameDataLevelLoaded() {
}

void URadiusGameDataSubsystem::LoadGameData(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer) {
}

void URadiusGameDataSubsystem::LevelUp() {
}

bool URadiusGameDataSubsystem::HasSaves(const int32 ProfileNr, const bool bSinglePlayer) const {
    return false;
}

bool URadiusGameDataSubsystem::HasProfileSavesByParameters(int32 ProfileNum, bool bSinglePlayer, bool bAutosave) const {
    return false;
}

bool URadiusGameDataSubsystem::HasProfileSaves(int32 ProfileNr) const {
    return false;
}

bool URadiusGameDataSubsystem::HasMoney(const int32 Money) const {
    return false;
}

bool URadiusGameDataSubsystem::HasLevelPoints(const int32 LevelPoints) {
    return false;
}

FString URadiusGameDataSubsystem::GetSaveName(const int32 SaveNr, const bool bAutosave) const {
    return TEXT("");
}

bool URadiusGameDataSubsystem::GetSaveInfo(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer, FSaveInfo& SaveInfo) const {
    return false;
}

bool URadiusGameDataSubsystem::GetProfileInfo(const int32 ProfileNr, const bool bSinglePlayer, FProfileInfo& ProfileInfo) const {
    return false;
}

FString URadiusGameDataSubsystem::GetProfileFolderPath(const int32 ProfileNr, const bool bSinglePlayer) const {
    return TEXT("");
}

FString URadiusGameDataSubsystem::GetPaths() {
    return TEXT("");
}

int32 URadiusGameDataSubsystem::GetMinSaveNumber(const bool bSinglePlayer, const bool bAutosave) const {
    return 0;
}

int32 URadiusGameDataSubsystem::GetMinProfileNumber(const bool bSinglePlayer) const {
    return 0;
}

int32 URadiusGameDataSubsystem::GetMaxSaveNumber(const bool bSinglePlayer, const bool bAutosave) const {
    return 0;
}

int32 URadiusGameDataSubsystem::GetMaxProfileNumber(const bool bSinglePlayer) const {
    return 0;
}

int32 URadiusGameDataSubsystem::GetLastProfileNum() {
    return 0;
}

ARadiusGameDataReplicator* URadiusGameDataSubsystem::GetGameDataReplicator() const {
    return NULL;
}

URadiusGameData* URadiusGameDataSubsystem::GetGameData() const {
    return NULL;
}

URadiusCommonGameData* URadiusGameDataSubsystem::GetCommonGameData() const {
    return NULL;
}

FString URadiusGameDataSubsystem::GetAbsoluteDataPath() {
    return TEXT("");
}

void URadiusGameDataSubsystem::DeleteSave(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer) {
}

void URadiusGameDataSubsystem::Debug_PrintGameDataInfo() {
}

bool URadiusGameDataSubsystem::CreateNewGameData(const int32 ProfileNr, const bool bSinglePlayer, const bool bIsTutorialEnabled, const TMap<FGameplayTag, FGameplayTag>& DifficultySettings, const bool bShouldClearProfile) {
    return false;
}

bool URadiusGameDataSubsystem::Continue(const int32 ProfileNr, const bool bSinglePlayer) {
    return false;
}

void URadiusGameDataSubsystem::ClearProfile(const int32 ProfileNr, const bool bSinglePlayer) {
}

bool URadiusGameDataSubsystem::CheckSave(const int32 ProfileNr, const int32 SaveNr, bool bAutosave, bool bSinglePlayer) {
    return false;
}

bool URadiusGameDataSubsystem::CheckProfile(const int32 ProfileNr, const bool bSinglePlayer) const {
    return false;
}

void URadiusGameDataSubsystem::AutoSaveGameDataWithConditions() {
}

void URadiusGameDataSubsystem::AutoSaveGameData(const bool bUpdateActorsTransform) {
}

void URadiusGameDataSubsystem::AddNewMission(UAvailableMission* NewMission) {
}

void URadiusGameDataSubsystem::AddMoney(const int32 DeltaMoney, const FString& AnalyticsString, const TEnumAsByte<EMoneyChangeReason> MoneyChangeReason) {
}

void URadiusGameDataSubsystem::AddLevelPoints(const int32 DeltaLevelPoints) {
}

void URadiusGameDataSubsystem::AddAsh(const int32 DeltaAsh) {
}


