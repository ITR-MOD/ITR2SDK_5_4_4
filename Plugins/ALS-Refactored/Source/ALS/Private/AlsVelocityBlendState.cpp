#include "AlsVelocityBlendState.h"

FAlsVelocityBlendState::FAlsVelocityBlendState() {
    this->bReinitializationRequired = false;
    this->ForwardAmount = 0.00f;
    this->BackwardAmount = 0.00f;
    this->LeftAmount = 0.00f;
    this->RightAmount = 0.00f;
}

