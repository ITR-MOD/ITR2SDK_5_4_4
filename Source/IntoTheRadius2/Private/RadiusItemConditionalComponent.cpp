#include "RadiusItemConditionalComponent.h"

URadiusItemConditionalComponent::URadiusItemConditionalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URadiusItemConditionalComponent::OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusItemConditionalComponent::OnDataLinked() {
}

void URadiusItemConditionalComponent::OnAdditionalTagChanged(const FGameplayTag Tag, const bool bAdded) {
}

bool URadiusItemConditionalComponent::CheckCondition_Implementation() {
    return false;
}


