#include "AlsTurnInPlaceState.h"

FAlsTurnInPlaceState::FAlsTurnInPlaceState() {
    this->ActivationDelay = 0.00f;
    this->QueuedSettings = NULL;
    this->QueuedTurnYawAngle = 0.00f;
    this->PlayRate = 0.00f;
    this->bFootLockDisabled = false;
}

