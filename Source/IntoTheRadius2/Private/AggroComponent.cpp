#include "AggroComponent.h"

UAggroComponent::UAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameConfigSubsystem = NULL;
    this->Config = NULL;
    this->Owner = NULL;
}

void UAggroComponent::StartAggroReduction() {
}

void UAggroComponent::ReduceAggro() {
}

bool UAggroComponent::IsReducingAggroNow() const {
    return false;
}

void UAggroComponent::HandleAggroReduction() {
}

float UAggroComponent::GetAggroLevel() const {
    return 0.0f;
}

void UAggroComponent::AddAggroSetup(const FName StimuliTag, const float AggroModifier) {
}


