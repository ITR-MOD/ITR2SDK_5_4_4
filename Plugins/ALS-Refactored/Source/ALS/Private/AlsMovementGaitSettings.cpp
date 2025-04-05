#include "AlsMovementGaitSettings.h"

FAlsMovementGaitSettings::FAlsMovementGaitSettings() {
    this->WalkSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->SprintSpeed = 0.00f;
    this->AccelerationAndDecelerationAndGroundFrictionCurve = NULL;
    this->RotationInterpolationSpeedCurve = NULL;
}

