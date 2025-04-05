#include "AlsControlRigInput.h"

FAlsControlRigInput::FAlsControlRigInput() {
    this->bUseHandIkBones = false;
    this->bUseFootIkBones = false;
    this->VelocityBlendForwardAmount = 0.00f;
    this->VelocityBlendBackwardAmount = 0.00f;
    this->SpineYawAngle = 0.00f;
    this->FootLeftIkAmount = 0.00f;
    this->FootRightIkAmount = 0.00f;
}

