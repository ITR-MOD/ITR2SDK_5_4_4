#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MicrophoneSpeakComponent.generated.h"

class UAudioComponent;
class UMicrophoneSpeakComponent;
class USoundWaveProcedural;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIVERSALVOICECHATPRO_API UMicrophoneSpeakComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMicrophoneVolumeReceived, float, Volume);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataMicrophoneReceived, const TArray<uint8>&, Data);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMicrophoneReceived OnDataMicrophoneReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMicrophoneVolumeReceived OnMicrophoneVolumeReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float latestVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWaveProcedural* VoiceSoundWaveProcedural;
    
    UMicrophoneSpeakComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, TArray<int32> radioChannel, bool useRange, float MaxRange);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void setSourceChainEffectAssetPath(bool enableSourceChainEffect, const FString& _pathToSourceChainEffect);
    
    UFUNCTION(BlueprintCallable)
    void setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset);
    
    UFUNCTION(BlueprintCallable)
    void setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, const FString& _pathToAttenuationAsset);
    
    UFUNCTION(BlueprintCallable)
    void setLocallyMultiplierVolume(float multiplierVolume);
    
    UFUNCTION(BlueprintCallable)
    void setAttenuationAssetPath(bool enableAttenuation, const FString& _pathToAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void RPCServerBroadcastVoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void RPCReceiveVoiceFromServer(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void RPCClientTransmitVoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, const TArray<int32>& _radioChannel, bool _useRange, float _maxRange);
    
    UFUNCTION(BlueprintCallable)
    void payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
    UFUNCTION(BlueprintCallable)
    void muteAudio(bool _isMuted);
    
    UFUNCTION(BlueprintCallable)
    bool isPlayingAudioVoice();
    
    UFUNCTION(BlueprintCallable)
    bool initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels, int32 opusFramesPerSec);
    
    UFUNCTION(BlueprintCallable)
    float getLocallyMultiplierVolume();
    
    UFUNCTION(BlueprintCallable)
    void endSpeaking();
    
};

