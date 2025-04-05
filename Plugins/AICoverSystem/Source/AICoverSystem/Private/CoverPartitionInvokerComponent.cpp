#include "CoverPartitionInvokerComponent.h"

UCoverPartitionInvokerComponent::UCoverPartitionInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterInvoker = true;
}

void UCoverPartitionInvokerComponent::UnregisterInvoker() {
}

void UCoverPartitionInvokerComponent::RegisterInvoker() {
}

bool UCoverPartitionInvokerComponent::HasRegistedInvoker() const {
    return false;
}


