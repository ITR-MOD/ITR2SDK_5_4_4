#include "RadiusEventsSubsystem.h"

URadiusEventsSubsystem::URadiusEventsSubsystem() {
}

void URadiusEventsSubsystem::FireSwitchLoadingScreen(bool bShow) const {
}

void URadiusEventsSubsystem::FireOnTutorialStarted(const FString& TutorialTag) const {
}

void URadiusEventsSubsystem::FireOnTutorialFinished(const FString& TutorialID, int32 CompletedStepsNum, int32 Seconds, bool IsTutorialSkipped) const {
}

void URadiusEventsSubsystem::FireOnStartLoadLevel(const FGameplayTag LevelTag) const {
}

void URadiusEventsSubsystem::FireOnSplashScreenShown() const {
}

void URadiusEventsSubsystem::FireOnSleep(const FVector Location, const int32 Seconds) const {
}

void URadiusEventsSubsystem::FireOnSettingsChanged() const {
}

void URadiusEventsSubsystem::FireOnReplicatorCreated() const {
}

void URadiusEventsSubsystem::FireOnPlayerTakeAction(const FGameplayTag Action) const {
}

void URadiusEventsSubsystem::FireOnPlayerRunning() const {
}

void URadiusEventsSubsystem::FireOnPlayerKill(const FGameplayTag NPCTag, AActor* Weapon, const FVector NPCLocation, const int32 DistanceToNPC) const {
}

void URadiusEventsSubsystem::FireOnPlayerInventoryChanged(const FString& PlayerUID) const {
}

void URadiusEventsSubsystem::FireOnPlayerDisconnected(const FString& UniqueNetIdString) const {
}

void URadiusEventsSubsystem::FireOnPlayerDeathPointsChanged() const {
}

void URadiusEventsSubsystem::FireOnPlayerConnected(const FString& UniqueNetIdString) const {
}

void URadiusEventsSubsystem::FireOnMissionStarted(UAvailableMission* Mission) const {
}

void URadiusEventsSubsystem::FireOnMissionListUpdate() const {
}

void URadiusEventsSubsystem::FireOnMissionFinished(UAvailableMission* Mission, TEnumAsByte<EMissionCompleteState> State, int32 CurrentObjectiveIndex) const {
}

void URadiusEventsSubsystem::FireOnMainMenuLoaded() const {
}

void URadiusEventsSubsystem::FireOnLoadLevelStep(const ELevelLoadedEventStep Step) const {
}

void URadiusEventsSubsystem::FireOnItemSecondaryGripped(const FString& ItemContainerID) const {
}

void URadiusEventsSubsystem::FireOnItemChangeParent(const FString& ContainerID) const {
}

void URadiusEventsSubsystem::FireOnItemAction(const FGameplayTag Action) const {
}

void URadiusEventsSubsystem::FireOnIngameMenuOpened() const {
}

void URadiusEventsSubsystem::FireOnIngameMenuClosed() const {
}

void URadiusEventsSubsystem::FireOnHostGame() const {
}

void URadiusEventsSubsystem::FireOnGlobalTriggersChange() const {
}

void URadiusEventsSubsystem::FireOnGameStart() const {
}

void URadiusEventsSubsystem::FireOnGameDataSaved() const {
}

void URadiusEventsSubsystem::FireOnGameDataLoaded() const {
}

void URadiusEventsSubsystem::FireOnFirstPlayerEnteredShop() const {
}

void URadiusEventsSubsystem::FireOnFinishLoadLevel() const {
}

void URadiusEventsSubsystem::FireOnDifficultyOptionChanged(const FGameplayTag& OptionTag, const FGameplayTag& ValueTag) const {
}

void URadiusEventsSubsystem::FireOnCoopVersionsMismatch() const {
}

void URadiusEventsSubsystem::FireOnCommonGameDataSaved() const {
}

void URadiusEventsSubsystem::FireOnCommonGameDataLoaded() const {
}

void URadiusEventsSubsystem::FireOnArtefactNestSpawned(AActor* Nest) const {
}

void URadiusEventsSubsystem::FireOnArtefactNestDestroyed(AActor* Nest) const {
}

void URadiusEventsSubsystem::FireOnAccessLvlPointsChanged(const int32 NewLvlPoints) const {
}

void URadiusEventsSubsystem::FireOnAccessLevelChanged(const int32 NewLevel) const {
}


