#include "RadiusBulletImpulseComponent.h"

URadiusBulletImpulseComponent::URadiusBulletImpulseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Target = NULL;
    this->DistanceDivider = 100.00f;
}

void URadiusBulletImpulseComponent::Suspend(bool IsSuspend) {
}

void URadiusBulletImpulseComponent::Stop() {
}

void URadiusBulletImpulseComponent::Start() {
}

void URadiusBulletImpulseComponent::Ricochet(const FVector& Location, const FVector& Force, const bool IsPenetration) {
}


