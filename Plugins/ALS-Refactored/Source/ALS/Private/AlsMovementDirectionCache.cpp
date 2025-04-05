#include "AlsMovementDirectionCache.h"

FAlsMovementDirectionCache::FAlsMovementDirectionCache() {
    this->MovementDirection = EAlsMovementDirection::Forward;
    this->bForward = false;
    this->bBackward = false;
    this->bLeft = false;
    this->bRight = false;
}

