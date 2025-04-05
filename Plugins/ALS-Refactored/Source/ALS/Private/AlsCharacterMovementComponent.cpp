#include "AlsCharacterMovementComponent.h"

UAlsCharacterMovementComponent::UAlsCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAccelerationForPaths = true;
    this->bRunPhysicsWithNoController = true;
    this->bCanWalkOffLedgesWhenCrouching = true;
    this->bNetworkAlwaysReplicateTransformUpdateTimestamp = true;
    this->bIgnoreBaseRotation = true;
    this->bAllowPhysicsRotationDuringAnimRootMotion = true;
    this->MovementSettings = NULL;
    this->bMovementModeLocked = false;
    this->bPrePenetrationAdjustmentVelocityValid = false;
}

void UAlsCharacterMovementComponent::SetMovementSettings(UAlsMovementSettings* NewMovementSettings) {
}


