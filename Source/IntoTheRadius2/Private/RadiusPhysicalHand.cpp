#include "RadiusPhysicalHand.h"

URadiusPhysicalHand::URadiusPhysicalHand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningChar = NULL;
    this->MainController = NULL;
    this->SecondaryController = NULL;
    this->bIsRightHand = false;
    this->AttachLerpSpeed = 5.00f;
    this->HandAnimState = EHandAnimState::Animated;
    this->CustomAnimation = NULL;
    this->bIsTriggerFingerOn = false;
    this->GripAlpha = 0.00f;
    this->TriggerAlpha = 0.00f;
    this->bIsPointingUi = false;
    this->bUseTargetMeshTransform = false;
}

void URadiusPhysicalHand::OnLerpToHandFinish(const FBPActorGripInformation& GripInfo) {
}

void URadiusPhysicalHand::OnGrippedSecondary(const FBPActorGripInformation& GripInfo) {
}

void URadiusPhysicalHand::OnGripped(const FBPActorGripInformation& GripInfo) {
}

void URadiusPhysicalHand::OnDroppedSecondary(const FBPActorGripInformation& GripInfo) {
}

void URadiusPhysicalHand::OnDropped(const FBPActorGripInformation& GripInfo, bool bWasSocketed) {
}

void URadiusPhysicalHand::DetachFakeGrip() {
}

void URadiusPhysicalHand::AttachFakeGrip(const FBPActorGripInformation& GripInfo) {
}


