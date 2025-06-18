#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MicrophoneSpeakComponent.generated.h"

class UAudioComponent;
class UMicrophoneSpeakComponent;
class USoundAttenuation;
class USoundWaveProcedural;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UMicrophoneSpeakComponent : public UActorComponent {
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
    void setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void setLocallyMultiplierVolume(float multiplierVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetAttenuation(bool bEnableAttenuation, TSoftObjectPtr<USoundAttenuation> NewAttenuation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_TransmitVoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, const TArray<int32>& _radioChannel, bool _useRange, float _maxRange);
    
    UFUNCTION(BlueprintCallable)
    void payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
    UFUNCTION(BlueprintCallable)
    void MuteAudio(bool _isMuted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_VoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingAudioVoice();
    
    UFUNCTION(BlueprintCallable)
    bool initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels, int32 opusFramesPerSec);
    
    UFUNCTION(BlueprintCallable)
    float getLocallyMultiplierVolume();
    
    UFUNCTION(BlueprintCallable)
    void endSpeaking();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveVoiceFromServer(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    
};

