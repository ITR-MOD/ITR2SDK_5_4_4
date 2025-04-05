#include "RadiusLightComponent.h"

URadiusLightComponent::URadiusLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void URadiusLightComponent::SetLightState(const bool bIsOn) {
}

void URadiusLightComponent::Server_SetLightState_Implementation(const bool bIsOn) {
}

void URadiusLightComponent::OnItemTagChanged(const FGameplayTag Tag, const bool bAdded) {
}

void URadiusLightComponent::OnItemDataUnlink(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusLightComponent::OnItemDataLink() {
}


