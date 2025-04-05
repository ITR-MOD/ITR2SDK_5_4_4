#include "RadiusVoiceSubsystem.h"

URadiusVoiceSubsystem::URadiusVoiceSubsystem() {
}

void URadiusVoiceSubsystem::UnmuteSelf() {
}

void URadiusVoiceSubsystem::UnmutePlayer(APlayerController* SelfPlayerController, const FUniqueNetIdRepl UnmutePlayerId) {
}

void URadiusVoiceSubsystem::UnmuteOtherPlayers() {
}

void URadiusVoiceSubsystem::UnmuteInGameMenuIfNeeded() {
}

void URadiusVoiceSubsystem::StopTalkInChat() const {
}

void URadiusVoiceSubsystem::StartTalkInChat() const {
}

void URadiusVoiceSubsystem::SetRadioFree() {
}

void URadiusVoiceSubsystem::SetRadioBusy() {
}

void URadiusVoiceSubsystem::MuteSelf() {
}

void URadiusVoiceSubsystem::MutePlayer(APlayerController* SelfPlayerController, const FUniqueNetIdRepl MutePlayerId) {
}

void URadiusVoiceSubsystem::MuteOtherPlayers() {
}

void URadiusVoiceSubsystem::MuteInGameMenu() {
}

bool URadiusVoiceSubsystem::IsRadioBusy() const {
    return false;
}

bool URadiusVoiceSubsystem::IsMutedSelf() const {
    return false;
}

bool URadiusVoiceSubsystem::IsMutedOtherPlayers() const {
    return false;
}

bool URadiusVoiceSubsystem::IsMuted(const APlayerState* PlayerState) const {
    return false;
}

bool URadiusVoiceSubsystem::IsInitAfterTransition() {
    return false;
}

void URadiusVoiceSubsystem::EnableVoiceInput() {
}

void URadiusVoiceSubsystem::DisableVoiceInput() {
}

void URadiusVoiceSubsystem::ApplyVoiceChanges() {
}


