#include "RadiusAudioVolume.h"
#include "Components/AudioComponent.h"

ARadiusAudioVolume::ARadiusAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    this->SoundCue = NULL;
    this->FadeInDuration = 0.00f;
    this->FadeInCurve = EAudioFaderCurve::Linear;
    this->FadeOutDuration = 0.00f;
    this->FadeOutCurve = EAudioFaderCurve::Linear;
    this->Audio->SetupAttachment(RootComponent);
}

void ARadiusAudioVolume::DisableVolume(const bool bShow) {
}


