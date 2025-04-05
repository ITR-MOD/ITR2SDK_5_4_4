#include "AlsMovementBaseState.h"

FAlsMovementBaseState::FAlsMovementBaseState() {
    this->Primitive = NULL;
    this->bBaseChanged = false;
    this->bHasRelativeLocation = false;
    this->bHasRelativeRotation = false;
}

