#include "RadiusAnalyticsSubsystem.h"

URadiusAnalyticsSubsystem::URadiusAnalyticsSubsystem() {
}

FString URadiusAnalyticsSubsystem::TryGetClientUniqueIdAsString() {
    return TEXT("");
}


bool URadiusAnalyticsSubsystem::IsStandalone() {
    return false;
}

bool URadiusAnalyticsSubsystem::IsServer() {
    return false;
}

bool URadiusAnalyticsSubsystem::IsLocalPlayer(ARadiusPlayerCharacterGameplay* Player) {
    return false;
}

bool URadiusAnalyticsSubsystem::IsInMainMenu() {
    return false;
}

bool URadiusAnalyticsSubsystem::IsCoopSession() {
    return false;
}

bool URadiusAnalyticsSubsystem::IsClient() {
    return false;
}

FString URadiusAnalyticsSubsystem::GetUserLocation() {
    return TEXT("");
}

FString URadiusAnalyticsSubsystem::GetUniqueIdFromPlayerStateAsString(APlayerState* PlayerState) {
    return TEXT("");
}

float URadiusAnalyticsSubsystem::GetRealPlaytimeInMinutes() {
    return 0.0f;
}

int32 URadiusAnalyticsSubsystem::GetPlayerAccessLevel() {
    return 0;
}

FString URadiusAnalyticsSubsystem::GetLocalPlayerUniqueId() {
    return TEXT("");
}

APlayerState* URadiusAnalyticsSubsystem::GetLocalPlayerState() {
    return NULL;
}

URadiusLevelSubsystem* URadiusAnalyticsSubsystem::GetLevelSubsystem() {
    return NULL;
}

FString URadiusAnalyticsSubsystem::GetHostUniqueIdAsString() {
    return TEXT("");
}

FString URadiusAnalyticsSubsystem::GetGPUBrandName() {
    return TEXT("");
}

FString URadiusAnalyticsSubsystem::GetGameUid() {
    return TEXT("");
}

FString URadiusAnalyticsSubsystem::GetGamePurchaseDateString() {
    return TEXT("");
}

UGameInstance* URadiusAnalyticsSubsystem::GetGameInstanceBP() const {
    return NULL;
}

URadiusGameDataSubsystem* URadiusAnalyticsSubsystem::GetGameDataSubsystem() {
    return NULL;
}

bool URadiusAnalyticsSubsystem::GetGameDataReplicator(ARadiusGameDataReplicator*& GameDataReplicator) {
    return false;
}

FString URadiusAnalyticsSubsystem::GetFirstSessionDateString() {
    return TEXT("");
}

URadiusEventsSubsystem* URadiusAnalyticsSubsystem::GetEventsSubsystem() {
    return NULL;
}

URadiusDifficultySettingsSubsystem* URadiusAnalyticsSubsystem::GetDifficultySettingsSubsystem() {
    return NULL;
}

FString URadiusAnalyticsSubsystem::GetCPUVendorName() {
    return TEXT("");
}

FString URadiusAnalyticsSubsystem::GetCPUBrandName() {
    return TEXT("");
}

URadiusConfigurationSubsystem* URadiusAnalyticsSubsystem::GetConfigSubsystem() {
    return NULL;
}

APlayerState* URadiusAnalyticsSubsystem::FindPlayerStateByUniqueNetId(const FString& IdToFind, bool& IsFound) {
    return NULL;
}


