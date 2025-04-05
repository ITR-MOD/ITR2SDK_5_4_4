#include "RadiusDataComponent.h"
#include "Net/UnrealNetwork.h"

URadiusDataComponent::URadiusDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URadiusDataComponent::OnRep_ItemDynamicDataPtr() {
}

void URadiusDataComponent::OnHolsteredItemChanged(URadiusHolsterComponent* HolsterComponent, ARadiusGrippableActorBase* RadiusItem, bool bHasAttached) {
}

void URadiusDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusDataComponent, ItemDynamicDataPtr);
}


