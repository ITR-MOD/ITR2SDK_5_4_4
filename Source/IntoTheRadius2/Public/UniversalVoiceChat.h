#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DelegateDeleteVoiceChatActorDelegate.h"
#include "DelegateMyVoiceChatActorReadyDelegate.h"
#include "DelegateNewVoiceChatActorDelegate.h"
#include "EOpusFramePerSec.h"
#include "UniversalVoiceChat.generated.h"

class APlayerState;
class APlayerVoiceChatActor;
class UObject;
class USoundAttenuation;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UUniversalVoiceChat : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUniversalVoiceChat();

    UFUNCTION(BlueprintCallable)
    static bool VoiceChatWasInitAudioVoiceChatQuality();
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatUseAndroidCommunicationMode(bool use);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatStopSpeak();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatStartSpeakTeamArray(bool _shouldHearMyOwnVoice, bool isGlobal, TArray<int32> radioChannel, bool useProximity, float maxProximityRange);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useProximity, float maxProximityRange);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetThresholdSendData(float thresholdSendData);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatSetSourceChainEffectPath(bool enableSourceChainEffect, const FString& _pathToSourceChainEffectAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void VoiceChatSetSomeoneOverrideLocallySourceEffectPath(const UObject* WorldContextObject, bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset, APlayerState* playerToOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void VoiceChatSetSomeoneOverrideLocallyAttenuationPath(const UObject* WorldContextObject, bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation, APlayerState* playerToOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void VoiceChatSetSomeoneLocallyMultiplierVolume(const UObject* WorldContextObject, float multiplierVolume, APlayerState* playerToOverride);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetRawMicrophoneGain(float Gain);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatSetPlayerName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetMuteAllPlayers(bool _muteAll);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatSetMicrophoneVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetHardwareAudioInput(const FString& audioInputDeviceName);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetGlobalVolume(float globalVolume);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatSetDefaultTickRateUpdateLocation(float tickRate);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatSetAttenuation(bool enableAttenuation, USoundAttenuation* NewAttenuation);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VoiceChatLocalMuteSomeone(const UObject* WorldContextObject, APlayerState* playerToMute, bool shouldMute);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool VoiceChatLocalIsMutedSomeone(const UObject* WorldContextObject, APlayerState* playerToCheckMute);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatIsSpeaking();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatInitAudioVoiceChatQuality(int32 _sampleRate, int32 _numChannels, EOpusFramePerSec _opusFramePerSec);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatHasMicrophonePermission();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float VoiceChatGetSomeoneLocallyMultiplierVolume(const UObject* WorldContextObject, APlayerState* playerToOverride);
    
    UFUNCTION(BlueprintCallable)
    static APlayerVoiceChatActor* VoiceChatGetMyLocalPlayerVoiceChat();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatGetMuteAllPlayers();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float VoiceChatGetMicrophoneRuntimeVolumeFromPlayerState(const UObject* WorldContextObject, APlayerState* fromPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatGetAudioDevicesList(TArray<FString>& OutDevices);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerVoiceChatActor* VoiceChatGetActorFromPlayerState(const UObject* WorldContextObject, APlayerState* fromPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatEnableShouldHearMyOwnVoice(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatCheckRegisteredToChannel(int32 channelToCheck);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatAskMicrophonePermission();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatAddChannel(int32 channelToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCallbackNewVoiceChatActor(const FDelegateNewVoiceChatActor& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCallbackMyVoiceChatActorReady(const FDelegateMyVoiceChatActorReady& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCallbackDeleteVoiceChatActor(const FDelegateDeleteVoiceChatActor& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMyPlayerVoiceChatActorReady();
    
};

