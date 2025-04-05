#include "RadiusPlayerCharacter.h"
#include "VRNotificationsComponent.h"

ARadiusPlayerCharacter::ARadiusPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VRNotificationsComponent = CreateDefaultSubobject<UVRNotificationsComponent>(TEXT("VRNotificationsComponent"));
}

void ARadiusPlayerCharacter::Server_TeleportPlayer_Implementation(const FTransform& Transform, const FVector& Velocity, const bool bWristMenuHidden, const bool bProjectOnGround, const EPlayerTeleportAdjustType Adjust) {
}

void ARadiusPlayerCharacter::ResetOrientationAndPosition() {
}



void ARadiusPlayerCharacter::OnPlayerStateSet_Implementation() {
}

FVector ARadiusPlayerCharacter::GetShiftedUpCameraLocation() const {
    return FVector{};
}

APlayerController* ARadiusPlayerCharacter::GetSelfPlayerController() {
    return NULL;
}

ARadiusPlayerState* ARadiusPlayerCharacter::GetRadiusPlayerState() const {
    return NULL;
}

void ARadiusPlayerCharacter::Client_TeleportPlayer_Implementation(const FTransform& Transform, const FVector& Velocity, const bool bWristMenuHidden, const bool bProjectOnGround, const EPlayerTeleportAdjustType Adjust) {
}


