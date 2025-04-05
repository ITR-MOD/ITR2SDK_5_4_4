#include "RadiusStoreItemPointComponent.h"
#include "Net/UnrealNetwork.h"

URadiusStoreItemPointComponent::URadiusStoreItemPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemActorClass = NULL;
    this->TimeToRespawn = -1.00f;
    this->NumberOfRespawns = 10;
    this->AccessLevelNeeded = 0;
    this->CurrentItem = NULL;
}

void URadiusStoreItemPointComponent::UpdateItemLock(int32 Unused) {
}

void URadiusStoreItemPointComponent::RespawnActor() {
}

void URadiusStoreItemPointComponent::ResetRespawn() {
}

void URadiusStoreItemPointComponent::OnRep_CurrentItem() {
}

void URadiusStoreItemPointComponent::ItemTaken(UGripMotionControllerComponent* Controller, FBPActorGripInformation GripInfo) {
}

ARadiusItemBase* URadiusStoreItemPointComponent::GetCurrentItem() const {
    return NULL;
}

void URadiusStoreItemPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusStoreItemPointComponent, CurrentItem);
}


