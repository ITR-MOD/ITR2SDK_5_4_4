#include "AlsGroundedSettings.h"

FAlsGroundedSettings::FAlsGroundedSettings() {
    this->AnimatedWalkSpeed = 0.00f;
    this->AnimatedRunSpeed = 0.00f;
    this->AnimatedSprintSpeed = 0.00f;
    this->AnimatedCrouchSpeed = 0.00f;
    this->StrideBlendAmountWalkCurve = NULL;
    this->StrideBlendAmountRunCurve = NULL;
    this->RotationYawOffsetForwardCurve = NULL;
    this->RotationYawOffsetBackwardCurve = NULL;
    this->RotationYawOffsetLeftCurve = NULL;
    this->RotationYawOffsetRightCurve = NULL;
    this->VelocityBlendInterpolationSpeed = 0.00f;
    this->PivotActivationSpeedThreshold = 0.00f;
}

