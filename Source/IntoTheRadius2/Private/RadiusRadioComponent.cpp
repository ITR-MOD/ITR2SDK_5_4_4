#include "RadiusRadioComponent.h"
#include "Net/UnrealNetwork.h"

URadiusRadioComponent::URadiusRadioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadioStartSound = NULL;
    this->RadioEndSound = NULL;
    this->RadioErrorSound = NULL;
    this->RadioWhiteNoiseSound = NULL;
    this->RadioAttenuation = NULL;
    this->RadioVoiceEffect = NULL;
    this->ComponentVoiceAttachTo = NULL;
    this->bIsTalkingInRadio = false;
}

void URadiusRadioComponent::TryTalkInRadio_Implementation() {
}

void URadiusRadioComponent::SwitchVoiceSettings() {
}

void URadiusRadioComponent::SwitchIsTalkingInRadioRPC_Implementation(bool Value) {
}

void URadiusRadioComponent::StopTalkInRadio_Implementation() {
}

void URadiusRadioComponent::Setup_Implementation(UStaticMeshComponent* Radio, URadiusVoiceChatComponent* VOIP) {
}

void URadiusRadioComponent::PlayRadioStartSound_Implementation() {
}

void URadiusRadioComponent::PlayRadioErrorSound_Implementation() {
}

void URadiusRadioComponent::PlayRadioEndSound_Implementation() {
}

void URadiusRadioComponent::OnRep_bIsTalkingInRadio() {
}

bool URadiusRadioComponent::IsTalkingInRadio() const {
    return false;
}

void URadiusRadioComponent::ApplyRadioVoiceEffect() {
}

void URadiusRadioComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusRadioComponent, bIsTalkingInRadio);
}


