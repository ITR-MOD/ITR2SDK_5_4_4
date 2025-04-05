#include "RadiusHandSocketComponent.h"

URadiusHandSocketComponent::URadiusHandSocketComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketPriority = 1.00f;
    this->bUseActorLocationForSelector = false;
    this->bIsSecondary = false;
    this->bTriggerOnly = false;
    this->bDenyDistanceGrip = false;
    this->AllowedHands = EVRHand::Both;
    this->SystConfig = NULL;
}

void URadiusHandSocketComponent::SetShowVisualizationMesh(bool bShowMesh) {
}

void URadiusHandSocketComponent::SetIsSecondary(bool bNewIsSecondary) {
}

void URadiusHandSocketComponent::SetDenyDistanceGrip(bool bNewDenyDistanceGrip) {
}

bool URadiusHandSocketComponent::IsSlotForHand(EVRHand Hand) const {
    return false;
}

FGameplayTagContainer URadiusHandSocketComponent::GetSocketGrabTag() const {
    return FGameplayTagContainer{};
}

FVector URadiusHandSocketComponent::GetHandSocketWorldLocation() const {
    return FVector{};
}

FTransform URadiusHandSocketComponent::GetHandSocketTransformBP(UGripMotionControllerComponent* QueryController, const bool bIgnoreOnlySnapMesh) {
    return FTransform{};
}


