#include "AlsInAirState.h"

FAlsInAirState::FAlsInAirState() {
    this->VerticalVelocity = 0.00f;
    this->bJumpRequested = false;
    this->bJumped = false;
    this->JumpPlayRate = 0.00f;
    this->GroundPredictionAmount = 0.00f;
}

