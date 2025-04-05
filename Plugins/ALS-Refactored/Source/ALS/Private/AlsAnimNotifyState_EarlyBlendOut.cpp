#include "AlsAnimNotifyState_EarlyBlendOut.h"

UAlsAnimNotifyState_EarlyBlendOut::UAlsAnimNotifyState_EarlyBlendOut() {
    this->BlendOutDuration = 0.25f;
    this->bCheckInput = true;
    this->bCheckLocomotionMode = true;
    this->bCheckRotationMode = true;
    this->bCheckStance = true;
}


