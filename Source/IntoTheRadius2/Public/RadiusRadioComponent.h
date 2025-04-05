#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RadiusRadioComponent.generated.h"

class URadiusVoiceChatComponent;
class USceneComponent;
class USoundAttenuation;
class USoundBase;
class USoundEffectSourcePresetChain;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusRadioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RadioStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RadioEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RadioErrorSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RadioWhiteNoiseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* RadioAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* RadioVoiceEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentVoiceAttachTo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsTalkingInRadio, meta=(AllowPrivateAccess=true))
    bool bIsTalkingInRadio;
    
public:
    URadiusRadioComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryTalkInRadio();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchVoiceSettings();
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SwitchIsTalkingInRadioRPC(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopTalkInRadio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(UStaticMeshComponent* Radio, URadiusVoiceChatComponent* VOIP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRadioStartSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRadioErrorSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRadioEndSound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsTalkingInRadio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkingInRadio() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadioVoiceEffect();
    
};

