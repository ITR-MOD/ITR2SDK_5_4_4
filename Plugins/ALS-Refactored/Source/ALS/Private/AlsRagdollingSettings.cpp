#include "AlsRagdollingSettings.h"

FAlsRagdollingSettings::FAlsRagdollingSettings() {
    this->bStartRagdollingOnLand = false;
    this->RagdollingOnLandSpeedThreshold = 0.00f;
    this->bLimitInitialRagdollSpeed = false;
    this->GetUpFrontMontage = NULL;
    this->GetUpBackMontage = NULL;
}

