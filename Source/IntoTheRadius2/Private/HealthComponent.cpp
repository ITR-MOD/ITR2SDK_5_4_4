#include "HealthComponent.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NearDeathThreshold = 0.00f;
    this->DifficultySettingsSubsystem = NULL;
}

void UHealthComponent::SetHealth(const float Value) {
}

void UHealthComponent::RestoreHealth() {
}

void UHealthComponent::OnAnyDamageTaken(AActor* Actor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

float UHealthComponent::GetHealth() const {
    return 0.0f;
}


