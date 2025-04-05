#include "SyncTransformComponent.h"
#include "Net/UnrealNetwork.h"

USyncTransformComponent::USyncTransformComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateInterval = 2.00f;
    this->DistanceSqrThreshold = 400.00f;
    this->AngularThreshold = 0.10f;
    this->SpeedThreshold = 10.00f;
    this->LerpCoeff = 6.00f;
    this->SyncSpeed = 0.00f;
}

void USyncTransformComponent::TimeToSleep() const {
}

void USyncTransformComponent::OnWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void USyncTransformComponent::OnSwitchLoadingScreen(bool bShow) {
}

void USyncTransformComponent::OnSleep(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void USyncTransformComponent::OnRep_SyncTransform() {
}

void USyncTransformComponent::OnOwnerHolstered(URadiusHolsterComponent* HolsterComponent) {
}

void USyncTransformComponent::OnOwnerGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) {
}

void USyncTransformComponent::OnDistanceGripChanged(bool bIsDistanceLerping) {
}

void USyncTransformComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USyncTransformComponent, SyncTransform);
    DOREPLIFETIME(USyncTransformComponent, SyncSpeed);
}


