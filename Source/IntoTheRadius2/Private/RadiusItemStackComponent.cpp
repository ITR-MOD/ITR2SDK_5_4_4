#include "RadiusItemStackComponent.h"
#include "Net/UnrealNetwork.h"

URadiusItemStackComponent::URadiusItemStackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExtractedItem = NULL;
}

void URadiusItemStackComponent::OnRep_ExtractedItem() {
}


void URadiusItemStackComponent::OnDataUnlinked(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusItemStackComponent::OnDataLinked() {
}

void URadiusItemStackComponent::FireOnStackChanged() {
}

void URadiusItemStackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusItemStackComponent, ExtractedItem);
}


