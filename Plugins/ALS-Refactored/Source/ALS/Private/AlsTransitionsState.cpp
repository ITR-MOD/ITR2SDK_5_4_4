#include "AlsTransitionsState.h"

FAlsTransitionsState::FAlsTransitionsState() {
    this->bTransitionsAllowed = false;
    this->DynamicTransitionsFrameDelay = 0;
    this->QueuedDynamicTransitionAnimation = NULL;
}

