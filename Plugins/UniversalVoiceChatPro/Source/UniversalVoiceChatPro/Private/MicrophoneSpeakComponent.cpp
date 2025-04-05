#include "MicrophoneSpeakComponent.h"

UMicrophoneSpeakComponent::UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->latestVolume = 0.00f;
    this->VoiceAudioComponent = NULL;
    this->VoiceSoundWaveProcedural = NULL;
}

bool UMicrophoneSpeakComponent::startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, TArray<int32> radioChannel, bool useRange, float MaxRange) {
    return false;
}

void UMicrophoneSpeakComponent::SetVoiceVolume(float Volume) {
}

void UMicrophoneSpeakComponent::setSourceChainEffectAssetPath(bool enableSourceChainEffect, const FString& _pathToSourceChainEffect) {
}

void UMicrophoneSpeakComponent::setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset) {
}

void UMicrophoneSpeakComponent::setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, const FString& _pathToAttenuationAsset) {
}

void UMicrophoneSpeakComponent::setLocallyMultiplierVolume(float multiplierVolume) {
}

void UMicrophoneSpeakComponent::setAttenuationAssetPath(bool enableAttenuation, const FString& _pathToAttenuationAsset) {
}

void UMicrophoneSpeakComponent::RPCServerBroadcastVoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}

void UMicrophoneSpeakComponent::RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}

void UMicrophoneSpeakComponent::RPCClientTransmitVoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, const TArray<int32>& _radioChannel, bool _useRange, float _maxRange) {
}

void UMicrophoneSpeakComponent::payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}

void UMicrophoneSpeakComponent::muteAudio(bool _isMuted) {
}

bool UMicrophoneSpeakComponent::isPlayingAudioVoice() {
    return false;
}

bool UMicrophoneSpeakComponent::initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels, int32 opusFramesPerSec) {
    return false;
}

float UMicrophoneSpeakComponent::getLocallyMultiplierVolume() {
    return 0.0f;
}

void UMicrophoneSpeakComponent::endSpeaking() {
}


