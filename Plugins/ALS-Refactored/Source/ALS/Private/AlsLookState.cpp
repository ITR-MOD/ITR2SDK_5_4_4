#include "AlsLookState.h"

FAlsLookState::FAlsLookState() {
    this->bReinitializationRequired = false;
    this->WorldYawAngle = 0.00f;
    this->YawAngle = 0.00f;
    this->PitchAngle = 0.00f;
    this->YawForwardAmount = 0.00f;
    this->YawLeftAmount = 0.00f;
    this->YawRightAmount = 0.00f;
}

