#include "PlayerVoiceChatActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "Components/AudioComponent.h"
#include "MicrophoneSpeakComponent.h"
#include "Net/UnrealNetwork.h"

APlayerVoiceChatActor::APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootSceneComponent = NULL;
    this->MicrophoneSpeakComponent = CreateDefaultSubobject<UMicrophoneSpeakComponent>(TEXT("MicrophoneComponent"));
    this->VoiceAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("VoiceAudioSpeaker"));
    this->ownerPlayerState = NULL;
    this->idVoiceChat = 0;
    this->playerName = TEXT("Player");
    this->IsMicrophoneOn = false;
    this->voiceVolume = 5.00f;
    this->ServerPerformAntiCheat = false;
    this->AntiCheatAllowUseProximity = true;
    this->AntiCheatAllowUseGlobal = true;
    this->AntiCheatMaxProximityRange = 1000.00f;
}

void APlayerVoiceChatActor::setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset) {
}

void APlayerVoiceChatActor::setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation) {
}

void APlayerVoiceChatActor::SetMaxProximityRangeOnServer(float _maxProximityRange) {
}

void APlayerVoiceChatActor::setLocallyMultiplierVolume(float multiplierVolume) {
}

void APlayerVoiceChatActor::SetAllowUseProximityOnServer(bool _allowUseRange) {
}

void APlayerVoiceChatActor::ServerSetSourceChainEffect(bool enableSourceChainEffect, const FString& _pathToSourceChainEffect) {
}

void APlayerVoiceChatActor::ServerSetAttenuation(bool bEnableAttenuation, TSoftObjectPtr<USoundAttenuation> NewAttenuation) {
}

void APlayerVoiceChatActor::ServerSetAllowUseGlobal(bool _allowUseGlobal) {
}

void APlayerVoiceChatActor::ServerRemoveChannel(int32 channelToRemove) {
}

void APlayerVoiceChatActor::ServerAddChannel(int32 channelToAdd) {
}

void APlayerVoiceChatActor::Server_SetSourceChainEffectPath_Implementation(const FString& _pathToSourceChainEffectAsset) {
}

void APlayerVoiceChatActor::Server_SetPlayerName_Implementation(const FString& Name) {
}

void APlayerVoiceChatActor::Server_SetIsMicrophoneOn_Implementation(bool _isMicrophoneOn) {
}

void APlayerVoiceChatActor::Server_SetAttenuation_Implementation(const USoundAttenuation* NewAttenuation) {
}

void APlayerVoiceChatActor::Server_RequestRemoveChannel_Implementation(int32 channelToRemove) {
}

void APlayerVoiceChatActor::Server_RequestAddChannel_Implementation(int32 channelToAdd) {
}

void APlayerVoiceChatActor::Server_ChangeMicrophoneVolume_Implementation(float Volume) {
}

void APlayerVoiceChatActor::RepNotifyVoiceVolume() {
}

void APlayerVoiceChatActor::RepNotifySourceEffectAsset() {
}

void APlayerVoiceChatActor::RepNotifyPlayerName() {
}

void APlayerVoiceChatActor::RepNotifyIsMicrophoneOn() {
}

void APlayerVoiceChatActor::OnRep_MicrophoneSpeakComponent() {
}

void APlayerVoiceChatActor::OnRep_Attenuation() {
}

void APlayerVoiceChatActor::MuteAudio(bool isMute) {
}

void APlayerVoiceChatActor::Multicast_UpdatePosAudioComp_Implementation(FVector worldPos, FRotator worldRotation) {
}

bool APlayerVoiceChatActor::IsMicrophoneComponentValid() {
    return false;
}

float APlayerVoiceChatActor::getLocallyMultiplierVolume() {
    return 0.0f;
}

void APlayerVoiceChatActor::DelegateEndPlayOwner(AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APlayerVoiceChatActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerVoiceChatActor, MicrophoneSpeakComponent);
    DOREPLIFETIME(APlayerVoiceChatActor, ownerPlayerState);
    DOREPLIFETIME(APlayerVoiceChatActor, idVoiceChat);
    DOREPLIFETIME(APlayerVoiceChatActor, playerName);
    DOREPLIFETIME(APlayerVoiceChatActor, IsMicrophoneOn);
    DOREPLIFETIME(APlayerVoiceChatActor, voiceVolume);
    DOREPLIFETIME(APlayerVoiceChatActor, radioChannelSubscribed);
    DOREPLIFETIME(APlayerVoiceChatActor, Attenuation);
    DOREPLIFETIME(APlayerVoiceChatActor, pathToSourceChainEffectAsset);
}


