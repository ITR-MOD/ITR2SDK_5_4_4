#include "RadiusBulletProjectile.h"
#include "Components/SphereComponent.h"
#include "RadiusBulletComponent.h"
#include "RadiusBulletImpulseComponent.h"
#include "RadiusBulletTracerComponent.h"

ARadiusBulletProjectile::ARadiusBulletProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
    this->SphereCollider = (USphereComponent*)RootComponent;
    this->BulletTracerComponent = CreateDefaultSubobject<URadiusBulletTracerComponent>(TEXT("TraceMesh"));
    this->BulletComponent = CreateDefaultSubobject<URadiusBulletComponent>(TEXT("BulletComponent"));
    this->BulletImpulseComponent = CreateDefaultSubobject<URadiusBulletImpulseComponent>(TEXT("ImpulseComponent"));
    this->BulletTracerComponent->SetupAttachment(RootComponent);
}


void ARadiusBulletProjectile::OnHit(const FHitResult& Hit) {
}

void ARadiusBulletProjectile::BulletComponentRicochet(const FVector& Location, const FVector& Force, const bool IsPenetration) {
}

void ARadiusBulletProjectile::BulletComponentImpact(const FHitResult& Hit, const float ShotDistance, const bool IsCritical, const bool IsArmor) {
}


