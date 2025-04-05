#include "AlsTransitionsSettings.h"

FAlsTransitionsSettings::FAlsTransitionsSettings() {
    this->QuickStopBlendInDuration = 0.00f;
    this->QuickStopBlendOutDuration = 0.00f;
    this->QuickStopStartTime = 0.00f;
    this->StandingTransitionLeftAnimation = NULL;
    this->StandingTransitionRightAnimation = NULL;
    this->CrouchingTransitionLeftAnimation = NULL;
    this->CrouchingTransitionRightAnimation = NULL;
    this->DynamicTransitionFootLockDistanceThreshold = 0.00f;
    this->DynamicTransitionBlendDuration = 0.00f;
    this->DynamicTransitionPlayRate = 0.00f;
    this->StandingDynamicTransitionLeftAnimation = NULL;
    this->StandingDynamicTransitionRightAnimation = NULL;
    this->CrouchingDynamicTransitionLeftAnimation = NULL;
    this->CrouchingDynamicTransitionRightAnimation = NULL;
}

