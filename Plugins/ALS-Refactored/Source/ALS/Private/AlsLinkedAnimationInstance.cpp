#include "AlsLinkedAnimationInstance.h"

UAlsLinkedAnimationInstance::UAlsLinkedAnimationInstance() {
    this->RootMotionMode = ERootMotionMode::IgnoreRootMotion;
    this->bUseMainInstanceMontageEvaluationData = true;
    this->Character = NULL;
}

void UAlsLinkedAnimationInstance::SetHipsDirection(EAlsHipsDirection NewHipsDirection) {
}

void UAlsLinkedAnimationInstance::ResetJumped() {
}

void UAlsLinkedAnimationInstance::ResetGroundedEntryMode() {
}

void UAlsLinkedAnimationInstance::ReinitializeLook() {
}

void UAlsLinkedAnimationInstance::RefreshLook() {
}

UAlsAnimationInstance* UAlsLinkedAnimationInstance::GetParentUnsafe() const {
    return NULL;
}

void UAlsLinkedAnimationInstance::ActivatePivot() {
}


