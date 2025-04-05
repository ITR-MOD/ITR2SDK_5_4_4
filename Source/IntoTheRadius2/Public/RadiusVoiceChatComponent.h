#pragma once
#include "CoreMinimal.h"
#include "Net/VoiceConfig.h"
#include "RadiusVoiceChatComponent.generated.h"

class USceneComponent;
class USoundAttenuation;
class USoundEffectSourcePresetChain;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusVoiceChatComponent : public UVOIPTalker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* DefaultVoiceEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultComponentVoiceAttachTo;
    
    URadiusVoiceChatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefaultVoiceEffect();
    
};

