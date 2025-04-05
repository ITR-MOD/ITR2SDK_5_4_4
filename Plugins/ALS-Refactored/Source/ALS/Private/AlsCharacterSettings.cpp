#include "AlsCharacterSettings.h"

UAlsCharacterSettings::UAlsCharacterSettings() {
    this->MovingSpeedThreshold = 50.00f;
    this->bSprintHasPriorityOverAiming = false;
    this->bRotateToVelocityWhenSprinting = false;
    this->InAirRotationMode = EAlsInAirRotationMode::RotateToVelocityOnJump;
    this->bAllowAimingWhenInAir = true;
    this->bInheritMovementBaseRotationInVelocityDirectionRotationMode = false;
    this->bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode = true;
}


