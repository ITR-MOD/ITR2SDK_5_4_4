#include "RadiusFirearmBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "RadiusFirearmComponent.h"
#include "RadiusMuzzleComponent.h"

ARadiusFirearmBase::ARadiusFirearmBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));
    this->WeaponMesh = (USkeletalMeshComponent*)RootComponent;
    this->FirearmComponent = CreateDefaultSubobject<URadiusFirearmComponent>(TEXT("Firearm Component"));
    this->MuzzleComponent = CreateDefaultSubobject<URadiusMuzzleComponent>(TEXT("Muzzle Component"));
    this->FirearmComponentClass = URadiusFirearmComponent::StaticClass();
    this->MuzzleComponentClass = URadiusMuzzleComponent::StaticClass();
    this->FirearmComponent->SetupAttachment(RootComponent);
    this->MuzzleComponent->SetupAttachment(RootComponent);
}

void ARadiusFirearmBase::OnHolsteredItemChanged(URadiusHolsterComponent* HolsterComponent, ARadiusGrippableActorBase* RadiusItem, bool bHasAttached) {
}

FText ARadiusFirearmBase::GetWeaponNameByTag(FGameplayTag GameplayTag) const {
    return FText::GetEmpty();
}


