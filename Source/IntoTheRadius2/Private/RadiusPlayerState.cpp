#include "RadiusPlayerState.h"
#include "Net/UnrealNetwork.h"

ARadiusPlayerState::ARadiusPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHost = false;
    this->PlayerHeightOffset = 0.00f;
    this->CharacterBodyHeight = 190.00f;
    this->bIsSittingMode = false;
}

void ARadiusPlayerState::SetPlayerHeightOffset(float NewPlayerHeightOffset) {
}

void ARadiusPlayerState::SetIsSittingMode(bool bNewIsSittingMode) {
}

void ARadiusPlayerState::SetCharacterBodyHeight(float NewCharacterBodyHeight) {
}

void ARadiusPlayerState::Server_SetPlayerHeightOffset_Implementation(float NewPlayerHeightOffset) {
}

void ARadiusPlayerState::Server_SetIsSittingMode_Implementation(bool bNewIsSittingMode) {
}

void ARadiusPlayerState::Server_SetCharacterBodyHeight_Implementation(float NewCharacterBodyHeight) {
}

void ARadiusPlayerState::OnRep_PlayerHeightOffset() {
}

void ARadiusPlayerState::OnRep_IsSittingMode() {
}

void ARadiusPlayerState::OnRep_CharacterBodyHeight() {
}

bool ARadiusPlayerState::IsSittingMode() const {
    return false;
}

float ARadiusPlayerState::GetPlayerHeightOffset() const {
    return 0.0f;
}

float ARadiusPlayerState::GetCharacterBodyHeight() const {
    return 0.0f;
}

void ARadiusPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusPlayerState, bIsHost);
    DOREPLIFETIME(ARadiusPlayerState, PlayerHeightOffset);
    DOREPLIFETIME(ARadiusPlayerState, CharacterBodyHeight);
    DOREPLIFETIME(ARadiusPlayerState, bIsSittingMode);
}


