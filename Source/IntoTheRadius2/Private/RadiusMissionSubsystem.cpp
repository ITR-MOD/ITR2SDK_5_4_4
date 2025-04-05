#include "RadiusMissionSubsystem.h"

URadiusMissionSubsystem::URadiusMissionSubsystem() {
}

void URadiusMissionSubsystem::StartMission(UAvailableMission* Mission) {
}

void URadiusMissionSubsystem::RerollMissions(bool bIsFullReroll) {
}

bool URadiusMissionSubsystem::IsMissionItem(const FString& ItemUid, const FGameplayTag ItemType) {
    return false;
}

bool URadiusMissionSubsystem::HasActiveMission() const {
    return false;
}

USingleMissionConfig* URadiusMissionSubsystem::GetMissionConfigByTag(FGameplayTag MissionId) {
    return NULL;
}

TArray<UAvailableMission*> URadiusMissionSubsystem::GetInactiveMissionsWithCategory(const FGameplayTag& CategoryTag) const {
    return TArray<UAvailableMission*>();
}

TArray<UAvailableMission*> URadiusMissionSubsystem::GetAvailableMissions(const bool bActiveMissions, const bool bInactiveMissions) const {
    return TArray<UAvailableMission*>();
}

TArray<UAvailableMission*> URadiusMissionSubsystem::GetActiveMissions() const {
    return TArray<UAvailableMission*>();
}

void URadiusMissionSubsystem::FinishMission(UAvailableMission* Mission) {
}

UAvailableMission* URadiusMissionSubsystem::FindAvailableMission(const FGameplayTag MissionId) const {
    return NULL;
}

void URadiusMissionSubsystem::FillMissions() {
}

void URadiusMissionSubsystem::CancelMission(UAvailableMission* Mission) {
}


