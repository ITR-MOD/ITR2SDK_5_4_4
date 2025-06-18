#include "RadiusBulletTracerComponent.h"

URadiusBulletTracerComponent::URadiusBulletTracerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugLineDuration = 1.00f;
    this->DebugLineThickness = 2.00f;
    this->DefaultScale = 1.00f;
    this->StartDelay = 0.10f;
}

void URadiusBulletTracerComponent::Suspend(const bool bSuspend) {
}

void URadiusBulletTracerComponent::Stop() {
}

void URadiusBulletTracerComponent::Start(const bool bIsPlayer) {
}

void URadiusBulletTracerComponent::Initialize(const FGameplayTag AmmoTypeID) {
}


