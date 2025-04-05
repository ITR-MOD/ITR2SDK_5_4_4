#include "AIFactor.h"

UAIFactor::UAIFactor() {
    this->Config = NULL;
    this->GameConfigSubsystem = NULL;
}

float UAIFactor::GetNormalizedScore_Implementation(const AActor* NPCBody, const AActor* Target, const FAIStimulus& Stimulus) {
    return 0.0f;
}

float UAIFactor::CalculateValue_Implementation(const AActor* NPCBody, const AActor* Target, const FAIStimulus& Stimulus) {
    return 0.0f;
}


