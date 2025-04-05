#include "RadiusLineTraceProjectile.h"
#include "Components/SceneComponent.h"

ARadiusLineTraceProjectile::ARadiusLineTraceProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->ProjectileImpactsComponent = NULL;
    this->DamageType = NULL;
    this->ProjectileImpactsComponentClass = NULL;
}

void ARadiusLineTraceProjectile::Trace(const float TraceDistance, bool& HasMisses) {
}

void ARadiusLineTraceProjectile::CalculateSpread(const float VelocityPercent) {
}


