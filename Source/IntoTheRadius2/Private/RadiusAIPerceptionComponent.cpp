#include "RadiusAIPerceptionComponent.h"

URadiusAIPerceptionComponent::URadiusAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameConfigSubsystem = NULL;
    this->Config = NULL;
    this->Owner = NULL;
    this->AIPerceptionSystem = NULL;
    this->BodyActor = NULL;
    this->StimulusTarget = NULL;
    this->PriorBestTarget = NULL;
}

void URadiusAIPerceptionComponent::SetAllSensesEnabled(const bool bActive) {
}

bool URadiusAIPerceptionComponent::IsTargetVisible(const AActor* Target) const {
    return false;
}

TMap<AActor*, FTargetInfo> URadiusAIPerceptionComponent::GetTargets() {
    return TMap<AActor*, FTargetInfo>();
}

AActor* URadiusAIPerceptionComponent::GetBestStimulusTarget() {
    return NULL;
}

void URadiusAIPerceptionComponent::ForgetPriorityStimulus() {
}


