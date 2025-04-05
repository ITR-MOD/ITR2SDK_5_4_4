#include "AlsAnimationInstance.h"

UAlsAnimationInstance::UAlsAnimationInstance() {
    this->Settings = NULL;
    this->Character = NULL;
    this->bPendingUpdate = true;
    this->TeleportedTime = 0.00f;
}

void UAlsAnimationInstance::StopTransitionAndTurnInPlaceAnimations(float BlendOutDuration) {
}

void UAlsAnimationInstance::SetHipsDirection(EAlsHipsDirection NewHipsDirection) {
}

void UAlsAnimationInstance::ResetJumped() {
}

void UAlsAnimationInstance::ResetGroundedEntryMode() {
}

void UAlsAnimationInstance::ReinitializeLook() {
}

void UAlsAnimationInstance::RefreshLook() {
}

void UAlsAnimationInstance::PlayTransitionRightAnimation(float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly) {
}

void UAlsAnimationInstance::PlayTransitionLeftAnimation(float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly) {
}

void UAlsAnimationInstance::PlayTransitionAnimation(UAnimSequenceBase* Animation, float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly) {
}

void UAlsAnimationInstance::PlayQuickStopAnimation() {
}

UAlsAnimationInstanceSettings* UAlsAnimationInstance::GetSettingsUnsafe() const {
    return NULL;
}

FAlsControlRigInput UAlsAnimationInstance::GetControlRigInput() const {
    return FAlsControlRigInput{};
}

void UAlsAnimationInstance::ActivatePivot() {
}


