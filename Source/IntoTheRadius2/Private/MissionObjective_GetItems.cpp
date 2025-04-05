#include "MissionObjective_GetItems.h"
#include "Net/UnrealNetwork.h"

UMissionObjective_GetItems::UMissionObjective_GetItems() {
}

void UMissionObjective_GetItems::OnInventoryChanged(const FString& PlayerContainerUID) {
}

void UMissionObjective_GetItems::GetRequiredObjectiveItems(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems) {
}

void UMissionObjective_GetItems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMissionObjective_GetItems, ItemInstanceIDs);
    DOREPLIFETIME(UMissionObjective_GetItems, ObjectiveItemsTypesToDeliver);
    DOREPLIFETIME(UMissionObjective_GetItems, ObjectiveItemsInstanceIDsToDeliver);
}


