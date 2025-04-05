#include "AlsLocomotionState.h"

FAlsLocomotionState::FAlsLocomotionState() {
    this->bHasInput = false;
    this->InputYawAngle = 0.00f;
    this->bHasSpeed = false;
    this->Speed = 0.00f;
    this->VelocityYawAngle = 0.00f;
    this->bMoving = false;
    this->bRotationTowardsLastInputDirectionBlocked = false;
    this->TargetYawAngle = 0.00f;
    this->ViewRelativeTargetYawAngle = 0.00f;
    this->SmoothTargetYawAngle = 0.00f;
    this->PreviousYawAngle = 0.00f;
    this->YawSpeed = 0.00f;
}

