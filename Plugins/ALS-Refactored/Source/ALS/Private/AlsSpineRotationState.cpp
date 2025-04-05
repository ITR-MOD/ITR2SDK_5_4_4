#include "AlsSpineRotationState.h"

FAlsSpineRotationState::FAlsSpineRotationState() {
    this->bSpineRotationAllowed = false;
    this->SpineAmount = 0.00f;
    this->StartYawAngle = 0.00f;
    this->TargetYawAngle = 0.00f;
    this->CurrentYawAngle = 0.00f;
    this->YawAngle = 0.00f;
}

