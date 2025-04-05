#include "RadiusSliderComponent.h"
#include "Net/UnrealNetwork.h"

URadiusSliderComponent::URadiusSliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateInTick = false;
    this->SliderBehaviorWhenReleased = EVRInteractibleSliderDropBehavior::Stay;
    this->FramesToAverage = 3;
    this->SliderMomentumFriction = 3.00f;
    this->SliderRestitution = 0.00f;
    this->MaxSliderMomentum = 1.00f;
    this->bIsLerping = false;
    this->CurrentSliderProgress = 0.00f;
    this->MaxSliderProgressOnSafety = 1.00f;
    this->bSlideDistanceIsInParentSpace = true;
    this->bIsLocked = false;
    this->bAutoDropWhenLocked = true;
    this->bUseLegacyLogic = false;
    this->EventThrowThreshold = 1.00f;
    this->PrimarySlotRange = 100.00f;
    this->SecondarySlotRange = 100.00f;
    this->GripPriority = 1;
    this->SplineComponentToFollow = NULL;
    this->bFollowSplineRotationAndScale = false;
    this->bEnforceSplineLinearity = false;
    this->SplineLerpType = EVRInteractibleSliderLerpType::Lerp_None;
    this->SplineLerpValue = 8.00f;
    this->bSliderUsesSnapPoints = false;
    this->SnapIncrement = 0.10f;
    this->SnapThreshold = 0.10f;
    this->bIncrementProgressBetweenSnapPoints = false;
    this->bRepGameplayTags = false;
    this->bReplicateMovement = true;
    this->MovementReplicationSetting = EGripMovementReplicationSettings::ForceClientSideMovement;
    this->BreakDistance = 100.00f;
    this->bDenyGripping = false;
    this->bIsHeld = false;
}

void URadiusSliderComponent::UpdateMaxSliderProgress(const bool bOnSafety) {
}

void URadiusSliderComponent::SetSplineComponentToFollow(USplineComponent* SplineToFollow) {
}

void URadiusSliderComponent::SetSliderProgress(float NewSliderProgress) {
}

void URadiusSliderComponent::SetIsLocked(const bool bNewLockedState) {
}

void URadiusSliderComponent::SetGripPriority(int32 NewGripPriority) {
}

void URadiusSliderComponent::ResetInitialSliderLocation() {
}



void URadiusSliderComponent::OnRep_InitialRelativeTransform() {
}

float URadiusSliderComponent::CalculateSliderProgress() {
    return 0.0f;
}

void URadiusSliderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusSliderComponent, SplineComponentToFollow);
    DOREPLIFETIME(URadiusSliderComponent, InitialRelativeTransform);
    DOREPLIFETIME(URadiusSliderComponent, GameplayTags);
    DOREPLIFETIME(URadiusSliderComponent, bRepGameplayTags);
    DOREPLIFETIME(URadiusSliderComponent, bReplicateMovement);
}


