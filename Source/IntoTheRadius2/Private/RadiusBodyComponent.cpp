#include "RadiusBodyComponent.h"

URadiusBodyComponent::URadiusBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerBodyRef = NULL;
}

void URadiusBodyComponent::SetInitialized() {
}

FVector URadiusBodyComponent::GetHeadLocationAfterTurn(const FVector& BodyLocation, const FVector& OldHeadLocation, float Angle) {
    return FVector{};
}


