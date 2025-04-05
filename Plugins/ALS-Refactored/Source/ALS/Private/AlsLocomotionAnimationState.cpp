#include "AlsLocomotionAnimationState.h"

FAlsLocomotionAnimationState::FAlsLocomotionAnimationState() {
    this->bHasInput = false;
    this->InputYawAngle = 0.00f;
    this->Speed = 0.00f;
    this->VelocityYawAngle = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->MaxBrakingDeceleration = 0.00f;
    this->WalkableFloorZ = 0.00f;
    this->bMoving = false;
    this->bMovingSmooth = false;
    this->TargetYawAngle = 0.00f;
    this->YawSpeed = 0.00f;
    this->Scale = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
}

