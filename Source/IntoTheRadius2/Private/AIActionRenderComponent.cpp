#include "AIActionRenderComponent.h"
#include "Net/UnrealNetwork.h"

UAIActionRenderComponent::UAIActionRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MetaSoundSource = NULL;
    this->AttachedSound = NULL;
    this->Owner = NULL;
    this->GameConfigSubsystem = NULL;
    this->NPCConfig = NULL;
}

void UAIActionRenderComponent::StartRender(const FGameplayTag& InActionTag, const bool bIgnoreCooldown) {
}

void UAIActionRenderComponent::StartCooldown() {
}

void UAIActionRenderComponent::OnRep_ActionRenderInfo() {
}

void UAIActionRenderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIActionRenderComponent, ActionRenderInfo);
}


