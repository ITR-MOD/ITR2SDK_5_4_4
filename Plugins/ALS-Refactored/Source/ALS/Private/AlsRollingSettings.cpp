#include "AlsRollingSettings.h"

FAlsRollingSettings::FAlsRollingSettings() {
    this->Montage = NULL;
    this->bCrouchOnStart = false;
    this->bRotateToInputOnStart = false;
    this->RotationInterpolationSpeed = 0.00f;
    this->bStartRollingOnLand = false;
    this->RollingOnLandSpeedThreshold = 0.00f;
    this->bInterruptRollingWhenInAir = false;
}

