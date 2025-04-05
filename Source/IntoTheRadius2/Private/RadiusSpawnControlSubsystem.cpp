#include "RadiusSpawnControlSubsystem.h"

URadiusSpawnControlSubsystem::URadiusSpawnControlSubsystem() {
}

void URadiusSpawnControlSubsystem::Update() {
}

void URadiusSpawnControlSubsystem::OnTideEvent() {
}

void URadiusSpawnControlSubsystem::OnMissionFinished(UAvailableMission* Mission, TEnumAsByte<EMissionCompleteState> State, int32 CurrentObjectiveIndex) {
}

void URadiusSpawnControlSubsystem::OnLoadLevel(FGameplayTag LevelTag) {
}

void URadiusSpawnControlSubsystem::OnLevelLoaded() {
}

void URadiusSpawnControlSubsystem::OnGlobalTriggersChange() {
}

void URadiusSpawnControlSubsystem::OnAccessLevelOrPointsChanged(int32 LevelOrPoints) {
}

void URadiusSpawnControlSubsystem::KillAllActors(const FString& SpawnerId) {
}

bool URadiusSpawnControlSubsystem::GetRandomSpawnLocation(UObject* WorldContextObject, const FVector Origin, const float Radius, const bool bOnGround, FVector& RandomLocation, int32 Attempts) {
    return false;
}

void URadiusSpawnControlSubsystem::DebugAnomalySpawnBlockVolumes(UObject* WorldContextObject, const bool RecollectVolumes) {
}

void URadiusSpawnControlSubsystem::CheckSpawnersInitializationsAndGenerate() {
}


