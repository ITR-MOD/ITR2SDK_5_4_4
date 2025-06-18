#include "MicrophoneSpeakComponent.h"
#include "Sound/SoundWaveProcedural.h"

UMicrophoneSpeakComponent::UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->latestVolume = 0.00f;
    this->VoiceAudioComponent = NULL;
    this->VoiceSoundWaveProcedural = CreateDefaultSubobject<USoundWaveProcedural>(TEXT("VoiceAudioRecorder"));
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

void UMicrophoneSpeakComponent::setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation) {
}

void UMicrophoneSpeakComponent::setLocallyMultiplierVolume(float multiplierVolume) {
}

void UMicrophoneSpeakComponent::SetAttenuation(bool bEnableAttenuation, TSoftObjectPtr<USoundAttenuation> NewAttenuation) {
}

void UMicrophoneSpeakComponent::Server_TransmitVoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, const TArray<int32>& _radioChannel, bool _useRange, float _maxRange) {
}

void UMicrophoneSpeakComponent::payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}

void UMicrophoneSpeakComponent::MuteAudio(bool _isMuted) {
}

void UMicrophoneSpeakComponent::Multicast_VoiceData_Implementation(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}

bool UMicrophoneSpeakComponent::IsPlayingAudioVoice() {
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

void UMicrophoneSpeakComponent::Client_ReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec) {
}


