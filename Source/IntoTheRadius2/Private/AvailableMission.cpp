#include "AvailableMission.h"
#include "Net/UnrealNetwork.h"

UAvailableMission::UAvailableMission() {
    this->bIsActivated = false;
    this->StartTimeInRealMinutes = -1.00f;
    this->ReadyToUnlock = true;
    this->LegacyConfig = NULL;
    this->CurrentObjectiveIndex = 0;
}

void UAvailableMission::SetMissionUnlocked() {
}

void UAvailableMission::OnRep_Objectives(TArray<URadiusMissionObjectiveBase*> PreviousObjectives) {
}

void UAvailableMission::OnRep_CurrentObjectiveIndex() {
}

void UAvailableMission::OnRep_bIsActivated() {
}

void UAvailableMission::OnObjectiveCompleted() {
}

void UAvailableMission::OnInventoryChanged(const FString& PlayerContainerUID) {
}

bool UAvailableMission::IsTopPriority() {
    return false;
}

bool UAvailableMission::IsLastObjective() {
    return false;
}

TMap<FGameplayTag, FIntPoint> UAvailableMission::GetTargetItems(bool& bHasItems) {
    return TMap<FGameplayTag, FIntPoint>();
}

void UAvailableMission::GetRequiredMissionItemsInCurrentStep(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems) {
}

bool UAvailableMission::GetRequiredItemsInInventory(TArray<FGameplayTag>& TagItems, TArray<FString>& UidItems) {
    return false;
}

EMissionUIState UAvailableMission::GetMissionUIState() {
    return EMissionUIState::Locked;
}

FText UAvailableMission::GetMissionLocationName() {
    return FText::GetEmpty();
}

TMap<FGameplayTag, FIntPoint> UAvailableMission::GetMissionItemStats(bool& bHasRequiredItems) {
    return TMap<FGameplayTag, FIntPoint>();
}

USingleMissionConfig* UAvailableMission::GetMissionConfig(bool bSkipLegacy) {
    return NULL;
}

EMissionObjectiveType UAvailableMission::GetCurrentObjectiveType() const {
    return EMissionObjectiveType::None;
}

int32 UAvailableMission::GetCurrentObjectiveIndex() const {
    return 0;
}

URadiusMissionObjectiveBase* UAvailableMission::GetCurrentObjective() const {
    return NULL;
}

void UAvailableMission::GetAllRequiredMissionItems(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems) {
}

void UAvailableMission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAvailableMission, MissionId);
    DOREPLIFETIME(UAvailableMission, Objectives);
    DOREPLIFETIME(UAvailableMission, bIsActivated);
    DOREPLIFETIME(UAvailableMission, CurrentObjectiveIndex);
}


