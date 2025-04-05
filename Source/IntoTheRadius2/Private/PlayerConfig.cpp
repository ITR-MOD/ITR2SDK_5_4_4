#include "PlayerConfig.h"

UPlayerConfig::UPlayerConfig() {
    this->MaxHealth = 100.00f;
    this->HealthSoundThresholdInPercent = 35.00f;
    this->HeartbeatIncreaseThresholdInPercent = 10.00f;
    this->MaxStamina = 100.00f;
    this->SprintStaminaCostPerSecond = 5.00f;
    this->JumpStaminaCost = 10.00f;
    this->StaminaRegenerationRateWhileStandingPerSecond = 10.00f;
    this->StaminaRegenerationRateWhileWalkingPerSecond = 2.00f;
    this->StaminaRegenerationDelayInSeconds = 0.50f;
    this->StaminaRegenerationDelayAfterFullyExhaustedInSeconds = 1.50f;
    this->StaminaBreathingThresholdInPercent = 30.00f;
    this->MaxHunger = 86400.00f;
    this->HungerSpeedStanding = 1.00f;
    this->HungerSpeedWalking = 1.20f;
    this->HungerSpeedSprinting = 1.50f;
    this->HungerSpeedSleeping = 0.80f;
    this->WeakHungerThreshold = 66.60f;
    this->ModerateHungerThreshold = 33.30f;
    this->StrongHungerThreshold = 0.00f;
    this->ZeroHungerLimitingMaxStamina = 0.70f;
    this->StartingMoney = 37;
    this->DefaultWalkSpeed = 350.00f;
    this->DefaultSprintSpeed = 600.00f;
    this->DefaultCrouchSpeed = 90.00f;
    this->JumpZVelocity = 350.00f;
    this->BackwardSpeedMultiplier = 0.75f;
    this->OverweightSlowdownCrouch = true;
    this->OverweightSlowdownWalk = true;
    this->OverweightSlowdownSprint = true;
    this->OverweightSpeedsUpHungerDecrease = true;
    this->OverweightIncreaseStaminaConsumptionForSprint = true;
    this->OverweightIncreaseStaminaConsumptionForJump = true;
    this->UnderwaterDepthA = 20.00f;
    this->UnderwaterDepthB = 120.00f;
    this->OxygenReserveInSeconds = 90.00f;
    this->DamageFromSuffocationInPercent = 5.00f;
    this->OxygenRestorationTimeInSeconds = 3.00f;
    this->MinDamageFromDangerousWaterInPercent = 1.00f;
    this->MaxDamageFromDangerousWaterInPercent = 5.00f;
    this->CurveDangerousWaterDamage = NULL;
    this->UnderwaterMinMovementSlowdownInPercent = 5.00f;
    this->UnderwaterMaxMovementSlowdownInPercent = 50.00f;
    this->CurveWaterDrag = NULL;
    this->UnderwaterSwampSlowdownMultiplier = 1.20f;
    this->UnderwaterJumpAffectingDepth = 50.00f;
    this->UnderwaterJumpAffectingStrength = 0.50f;
    this->HandsMaxLength = 85.00f;
    this->DefaultCharacterBodyHeight = 190.00f;
    this->MaxCapsuleHeight = 190.00f;
    this->MinCapsuleHeight = 120.00f;
    this->MinCharacterBodyHeightPercentageToCrouch = 0.90f;
    this->MinCharacterBodyHeightPercentageToJump = 0.90f;
    this->MinStandingCharacterBodyHeightPercentage = 0.90f;
    this->MinCameraHeightToMove = 100.00f;
    this->MaxCameraHeight = 179.00f;
    this->MinCameraHeight = 100.00f;
    this->DistFromCameraBaseToCrown = 11.50f;
    this->MinCharacterBodyHeight = 140.00f;
    this->MaxCharacterBodyHeight = 210.00f;
    this->CameraShiftForward = 10.00f;
    this->CameraShiftUp = 5.00f;
    this->HeadCenterToCameraXYDist = 13.50f;
    this->HeadBottomToCameraZDist = 12.00f;
    this->LookDownAngle = -55.00f;
    this->LowerInnerRadiusOffset = 5.00f;
    this->bStopRotateBodyAfterMoveIfLookingDown = true;
    this->UpperHorizontalDeadZoneRadius = 10.00f;
    this->LowerHorizontalDeadZoneRadius = 50.00f;
    this->LowerHorizontalDeadZoneHalfAngle = 135.00f;
    this->LowerVerticalDeadZoneSize = 30.00f;
    this->LowerInnerDeadZoneRadius = 20.00f;
    this->CrouchAnimationDuration = 1.00f;
    this->GripSphereRadius = 11.00f;
    this->DistanceGripSpeedCoeff = 1.00f;
    this->DistanceGripRadius = 30.00f;
    this->DistanceGripDeadZone = 50.00f;
    this->DistanceGripLength = 300.00f;
    this->DistanceGripFinishLerpingDistance = 35.00f;
    this->DistanceDifferenceForAngularComparison = 1.00f;
    this->SubtitlesVecrticalOffset = 50.00f;
    this->SubtitlesForwardOffset = 50.00f;
    this->SubtitlesMinAngleToReact = 15.00f;
    this->SubtitlesTimeToReact = 1.00f;
    this->SubtitlesRotationSpeed = 100.00f;
    this->SaveSubtitleDuration = 3.00f;
}

float UPlayerConfig::GetStaminaConsumptionIncreasePercentFromTotalWeight(const float TotalWeight) const {
    return 0.0f;
}

float UPlayerConfig::GetSlowdownPercentFromTotalWeight(const float TotalWeight) const {
    return 0.0f;
}

float UPlayerConfig::GetHungerSpeedIncreasePercentFromTotalWeight(const float TotalWeight) const {
    return 0.0f;
}


