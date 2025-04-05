#include "AlsCharacter.h"
#include "AlsCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

AAlsCharacter::AAlsCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAlsCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->AlsCharacterMovement = (UAlsCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UAlsCharacterMovementComponent*>(this);
    this->Settings = NULL;
    this->MovementSettings = NULL;
    this->bDesiredAiming = false;
    this->DesiredVelocityYawAngle = 0.00f;
    this->MantlingRootMotionSourceId = 0;
}

bool AAlsCharacter::TryStopRagdolling() {
    return false;
}

void AAlsCharacter::TryStartRolling(float PlayRate) {
}

bool AAlsCharacter::TryStartMantlingGrounded() {
    return false;
}

void AAlsCharacter::StartRagdolling() {
}

void AAlsCharacter::SetViewMode(const FGameplayTag& NewViewMode) {
}

void AAlsCharacter::SetOverlayMode(const FGameplayTag& NewOverlayMode) {
}

void AAlsCharacter::SetDesiredStance(const FGameplayTag& NewDesiredStance) {
}

void AAlsCharacter::SetDesiredRotationMode(const FGameplayTag& NewDesiredRotationMode) {
}

void AAlsCharacter::SetDesiredGait(const FGameplayTag& NewDesiredGait) {
}

void AAlsCharacter::SetDesiredAiming(bool bNewDesiredAiming) {
}

void AAlsCharacter::ServerStopRagdolling_Implementation() {
}

void AAlsCharacter::ServerStartRolling_Implementation(UAnimMontage* Montage, float PlayRate, float StartYawAngle, float TargetYawAngle) {
}

void AAlsCharacter::ServerStartRagdolling_Implementation() {
}

void AAlsCharacter::ServerStartMantling_Implementation(const FAlsMantlingParameters& Parameters) {
}

void AAlsCharacter::ServerSetViewMode_Implementation(const FGameplayTag& NewViewMode) {
}

void AAlsCharacter::ServerSetReplicatedViewRotation_Implementation(const FRotator& NewViewRotation) {
}

void AAlsCharacter::ServerSetRagdollTargetLocation_Implementation(const FVector_NetQuantize100& NewTargetLocation) {
}

void AAlsCharacter::ServerSetOverlayMode_Implementation(const FGameplayTag& NewOverlayMode) {
}

void AAlsCharacter::ServerSetDesiredStance_Implementation(const FGameplayTag& NewDesiredStance) {
}

void AAlsCharacter::ServerSetDesiredRotationMode_Implementation(const FGameplayTag& NewDesiredRotationMode) {
}

void AAlsCharacter::ServerSetDesiredGait_Implementation(const FGameplayTag& NewDesiredGait) {
}

void AAlsCharacter::ServerSetDesiredAiming_Implementation(bool bNewDesiredAiming) {
}

UAnimMontage* AAlsCharacter::SelectRollMontage_Implementation() {
    return NULL;
}

UAlsMantlingSettings* AAlsCharacter::SelectMantlingSettings_Implementation(EAlsMantlingType MantlingType) {
    return NULL;
}

UAnimMontage* AAlsCharacter::SelectGetUpMontage_Implementation(bool bRagdollFacedUpward) {
    return NULL;
}

void AAlsCharacter::OnStanceChanged_Implementation(const FGameplayTag& PreviousStance) {
}

void AAlsCharacter::OnRotationModeChanged_Implementation(const FGameplayTag& PreviousRotationMode) {
}

void AAlsCharacter::OnReplicated_ReplicatedViewRotation() {
}

void AAlsCharacter::OnReplicated_OverlayMode(const FGameplayTag& PreviousOverlayMode) {
}

void AAlsCharacter::OnReplicated_DesiredAiming(bool bPreviousDesiredAiming) {
}

void AAlsCharacter::OnRagdollingStarted_Implementation() {
}

void AAlsCharacter::OnRagdollingEnded_Implementation() {
}

void AAlsCharacter::OnOverlayModeChanged_Implementation(const FGameplayTag& PreviousOverlayMode) {
}

void AAlsCharacter::OnMantlingStarted_Implementation(const FAlsMantlingParameters& Parameters) {
}

void AAlsCharacter::OnMantlingEnded_Implementation() {
}

void AAlsCharacter::OnLocomotionModeChanged_Implementation(const FGameplayTag& PreviousLocomotionMode) {
}

void AAlsCharacter::OnLocomotionActionChanged_Implementation(const FGameplayTag& PreviousLocomotionAction) {
}

void AAlsCharacter::OnGaitChanged_Implementation(const FGameplayTag& PreviousGait) {
}

void AAlsCharacter::OnDesiredAimingChanged_Implementation(bool bPreviousDesiredAiming) {
}

void AAlsCharacter::MulticastStopRagdolling_Implementation() {
}

void AAlsCharacter::MulticastStartRolling_Implementation(UAnimMontage* Montage, float PlayRate, float StartYawAngle, float TargetYawAngle) {
}

void AAlsCharacter::MulticastStartRagdolling_Implementation() {
}

void AAlsCharacter::MulticastStartMantling_Implementation(const FAlsMantlingParameters& Parameters) {
}

void AAlsCharacter::MulticastOnJumpedNetworked_Implementation() {
}

bool AAlsCharacter::IsMantlingAllowedToStart_Implementation() const {
    return false;
}

void AAlsCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAlsCharacter, bDesiredAiming);
    DOREPLIFETIME(AAlsCharacter, DesiredRotationMode);
    DOREPLIFETIME(AAlsCharacter, DesiredStance);
    DOREPLIFETIME(AAlsCharacter, DesiredGait);
    DOREPLIFETIME(AAlsCharacter, ViewMode);
    DOREPLIFETIME(AAlsCharacter, OverlayMode);
    DOREPLIFETIME(AAlsCharacter, ReplicatedViewRotation);
    DOREPLIFETIME(AAlsCharacter, InputDirection);
    DOREPLIFETIME(AAlsCharacter, DesiredVelocityYawAngle);
    DOREPLIFETIME(AAlsCharacter, RagdollTargetLocation);
}


