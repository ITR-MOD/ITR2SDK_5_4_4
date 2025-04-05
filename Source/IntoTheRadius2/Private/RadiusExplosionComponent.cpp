#include "RadiusExplosionComponent.h"

URadiusExplosionComponent::URadiusExplosionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionRadius = 500.00f;
    this->ExplosionDamage = 100.00f;
    this->CurveDamageFalloff = NULL;
    this->DamageTypeClass = NULL;
    this->bDebug = false;
    this->InstigatorController = NULL;
}

void URadiusExplosionComponent::SetInstigatorController(AController* Controller) {
}

void URadiusExplosionComponent::MulticastOnExploded_Implementation() {
}

void URadiusExplosionComponent::Explode() {
}


