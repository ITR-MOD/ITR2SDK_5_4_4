#include "RadiusVoiceChatComponent.h"

URadiusVoiceChatComponent::URadiusVoiceChatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultAttenuation = NULL;
    this->DefaultVoiceEffect = NULL;
    this->DefaultComponentVoiceAttachTo = NULL;
}

void URadiusVoiceChatComponent::SetDefaultVoiceEffect() {
}


