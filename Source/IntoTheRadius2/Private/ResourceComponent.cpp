#include "ResourceComponent.h"
#include "Net/UnrealNetwork.h"

UResourceComponent::UResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResourceAmount = 0;
}

void UResourceComponent::SetResource(int32 NewAmount) {
}

void UResourceComponent::OnRep_ResourceAmount() {
}

int32 UResourceComponent::GetResourceAmount() {
    return 0;
}

void UResourceComponent::Client_ResourceChangeCallback_Implementation(bool bIsSuccess) {
}

bool UResourceComponent::ChangeResource(int32 DeltaAmount) {
    return false;
}

void UResourceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourceComponent, ResourceAmount);
}


