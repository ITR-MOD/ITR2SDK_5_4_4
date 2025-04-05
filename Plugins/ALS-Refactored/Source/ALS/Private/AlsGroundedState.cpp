#include "AlsGroundedState.h"

FAlsGroundedState::FAlsGroundedState() {
    this->HipsDirection = EAlsHipsDirection::Forward;
    this->HipsDirectionLockAmount = 0.00f;
    this->bPivotActivationRequested = false;
    this->bPivotActive = false;
    this->SprintTime = 0.00f;
    this->SprintAccelerationAmount = 0.00f;
    this->SprintBlockAmount = 0.00f;
    this->WalkRunBlendAmount = 0.00f;
    this->StrideBlendAmount = 0.00f;
    this->StandingPlayRate = 0.00f;
    this->CrouchingPlayRate = 0.00f;
}

