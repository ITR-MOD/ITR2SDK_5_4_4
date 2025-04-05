#include "RadiusPlayerMovementComponent.h"

URadiusPlayerMovementComponent::URadiusPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArcControllerClass = NULL;
    this->ArcController = NULL;
    this->NeedTeleportVertThreshold = 100.00f;
    this->NoStuckSkin = 0.00f;
    this->bWantsToSprint = false;
    this->SettingsSubsystem = NULL;
    this->PlayerStatsComponent = NULL;
}

bool URadiusPlayerMovementComponent::ToggleSprint() {
    return false;
}

void URadiusPlayerMovementComponent::StopAllMovement() {
}

void URadiusPlayerMovementComponent::Server_StartTeleporting_Implementation(const TArray<FVector_NetQuantize10>& PointsToTeleport) {
}

void URadiusPlayerMovementComponent::Server_SetMovementType_Implementation(EMovementType NewMovementType) {
}

void URadiusPlayerMovementComponent::Server_SetMaxWalkSpeed_Implementation(float NewSpeed) {
}

void URadiusPlayerMovementComponent::ProcessSnapTurn(const float SnapTurnDelta) {
}

TArray<FTeleportPointInfo> URadiusPlayerMovementComponent::PreparePointsToTeleport(const FVector& From, const FVector& To) {
    return TArray<FTeleportPointInfo>();
}

void URadiusPlayerMovementComponent::OnWeightRecalculateEvent(const FString& ChangedPlayerContainerID) {
}

bool URadiusPlayerMovementComponent::IsTeleporting() const {
    return false;
}

bool URadiusPlayerMovementComponent::IsSprinting() const {
    return false;
}

bool URadiusPlayerMovementComponent::IsMovingBack() const {
    return false;
}

bool URadiusPlayerMovementComponent::IsMoving() const {
    return false;
}

bool URadiusPlayerMovementComponent::IsCrouching() const {
    return false;
}

void URadiusPlayerMovementComponent::DoSetMovementType(EMovementType NewMovementType) {
}

void URadiusPlayerMovementComponent::CalculateTurnInput(const float InputValue) {
}

FVector URadiusPlayerMovementComponent::CalculateSidewaysInput(const float InputValue) {
    return FVector{};
}

FVector URadiusPlayerMovementComponent::CalculateForwardInput(const float InputValue) {
    return FVector{};
}


