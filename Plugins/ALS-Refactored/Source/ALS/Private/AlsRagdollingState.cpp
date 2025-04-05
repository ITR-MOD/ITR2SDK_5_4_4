#include "AlsRagdollingState.h"

FAlsRagdollingState::FAlsRagdollingState() {
    this->SpeedLimitFrameTimeRemaining = 0;
    this->SpeedLimit = 0.00f;
    this->PullForce = 0.00f;
    this->bGrounded = false;
    this->bFacedUpward = false;
    this->bPendingFinalization = false;
}

