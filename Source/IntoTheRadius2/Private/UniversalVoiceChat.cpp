#include "UniversalVoiceChat.h"

UUniversalVoiceChat::UUniversalVoiceChat() {
}

bool UUniversalVoiceChat::VoiceChatWasInitAudioVoiceChatQuality() {
    return false;
}

void UUniversalVoiceChat::VoiceChatUseAndroidCommunicationMode(bool use) {
}

bool UUniversalVoiceChat::VoiceChatStopSpeak() {
    return false;
}

bool UUniversalVoiceChat::VoiceChatStartSpeakTeamArray(bool _shouldHearMyOwnVoice, bool isGlobal, TArray<int32> radioChannel, bool useProximity, float maxProximityRange) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useProximity, float maxProximityRange) {
    return false;
}

void UUniversalVoiceChat::VoiceChatSetThresholdSendData(float thresholdSendData) {
}

bool UUniversalVoiceChat::VoiceChatSetSourceChainEffectPath(bool enableSourceChainEffect, const FString& _pathToSourceChainEffectAsset) {
    return false;
}

void UUniversalVoiceChat::VoiceChatSetSomeoneOverrideLocallySourceEffectPath(const UObject* WorldContextObject, bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset, APlayerState* playerToOverride) {
}

void UUniversalVoiceChat::VoiceChatSetSomeoneOverrideLocallyAttenuationPath(const UObject* WorldContextObject, bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation, APlayerState* playerToOverride) {
}

void UUniversalVoiceChat::VoiceChatSetSomeoneLocallyMultiplierVolume(const UObject* WorldContextObject, float multiplierVolume, APlayerState* playerToOverride) {
}

void UUniversalVoiceChat::VoiceChatSetRawMicrophoneGain(float Gain) {
}

bool UUniversalVoiceChat::VoiceChatSetPlayerName(const FString& Name) {
    return false;
}

void UUniversalVoiceChat::VoiceChatSetMuteAllPlayers(bool _muteAll) {
}

bool UUniversalVoiceChat::VoiceChatSetMicrophoneVolume(float Volume) {
    return false;
}

void UUniversalVoiceChat::VoiceChatSetHardwareAudioInput(const FString& audioInputDeviceName) {
}

void UUniversalVoiceChat::VoiceChatSetGlobalVolume(float globalVolume) {
}

void UUniversalVoiceChat::VoiceChatSetDefaultTickRateUpdateLocation(float tickRate) {
}

bool UUniversalVoiceChat::VoiceChatSetAttenuation(bool enableAttenuation, USoundAttenuation* NewAttenuation) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatRemoveChannel(int32 channelToRemove) {
    return false;
}

void UUniversalVoiceChat::VoiceChatLocalMuteSomeone(const UObject* WorldContextObject, APlayerState* playerToMute, bool shouldMute) {
}

bool UUniversalVoiceChat::VoiceChatLocalIsMutedSomeone(const UObject* WorldContextObject, APlayerState* playerToCheckMute) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatIsSpeaking() {
    return false;
}

bool UUniversalVoiceChat::VoiceChatInitAudioVoiceChatQuality(int32 _sampleRate, int32 _numChannels, EOpusFramePerSec _opusFramePerSec) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatHasMicrophonePermission() {
    return false;
}

float UUniversalVoiceChat::VoiceChatGetSomeoneLocallyMultiplierVolume(const UObject* WorldContextObject, APlayerState* playerToOverride) {
    return 0.0f;
}

APlayerVoiceChatActor* UUniversalVoiceChat::VoiceChatGetMyLocalPlayerVoiceChat() {
    return NULL;
}

bool UUniversalVoiceChat::VoiceChatGetMuteAllPlayers() {
    return false;
}

float UUniversalVoiceChat::VoiceChatGetMicrophoneRuntimeVolumeFromPlayerState(const UObject* WorldContextObject, APlayerState* fromPlayerState) {
    return 0.0f;
}

void UUniversalVoiceChat::VoiceChatGetAudioDevicesList(TArray<FString>& OutDevices) {
}

APlayerVoiceChatActor* UUniversalVoiceChat::VoiceChatGetActorFromPlayerState(const UObject* WorldContextObject, APlayerState* fromPlayerState) {
    return NULL;
}

bool UUniversalVoiceChat::VoiceChatEnableShouldHearMyOwnVoice(bool Enable) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatCheckRegisteredToChannel(int32 channelToCheck) {
    return false;
}

void UUniversalVoiceChat::VoiceChatAskMicrophonePermission() {
}

bool UUniversalVoiceChat::VoiceChatAddChannel(int32 channelToAdd) {
    return false;
}

void UUniversalVoiceChat::RegisterCallbackNewVoiceChatActor(const FDelegateNewVoiceChatActor& Delegate) {
}

void UUniversalVoiceChat::RegisterCallbackMyVoiceChatActorReady(const FDelegateMyVoiceChatActorReady& Delegate) {
}

void UUniversalVoiceChat::RegisterCallbackDeleteVoiceChatActor(const FDelegateDeleteVoiceChatActor& Delegate) {
}

bool UUniversalVoiceChat::IsMyPlayerVoiceChatActorReady() {
    return false;
}


