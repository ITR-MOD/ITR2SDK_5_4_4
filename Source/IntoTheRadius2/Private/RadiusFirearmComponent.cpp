#include "RadiusFirearmComponent.h"
#include "Net/UnrealNetwork.h"

URadiusFirearmComponent::URadiusFirearmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChamberAmmoSound = NULL;
    this->bCanLoadToChamber = false;
    this->bDrawEjectionDebug = false;
    this->bLeaveUnshotAmmoInside = false;
    this->bCanShootCacheForABP = false;
    this->RelevantMuzzle = NULL;
    this->RelevantMagazine = NULL;
    this->DurabilityToDysfunctionChance = NULL;
}

bool URadiusFirearmComponent::TryReload(const bool bIsManual) {
    return false;
}

bool URadiusFirearmComponent::TryNextAutomaticFire() {
    return false;
}

void URadiusFirearmComponent::ToggleChamberLoading(bool bOn) {
}

FGameplayTag URadiusFirearmComponent::SwitchNextFireMode() {
    return FGameplayTag{};
}

void URadiusFirearmComponent::StartFire() {
}

void URadiusFirearmComponent::SetWeaponCocked(const bool bCocked) {
}

bool URadiusFirearmComponent::SetSliderLock(const bool bSet, const bool bForce) {
    return false;
}

void URadiusFirearmComponent::SetCurrentFireMode(const FGameplayTag NewFireModeTag) {
}

void URadiusFirearmComponent::ServerUpdateWithAmmo_Implementation(const FFirearmStateRep& Rep, const FFirearmAmmoStateRep& AmmoRep) {
}

void URadiusFirearmComponent::ServerUpdate_Implementation(const FFirearmStateRep& Rep) {
}

void URadiusFirearmComponent::ServerShotFailed_Implementation(const FFirearmStateRep& Rep) {
}

void URadiusFirearmComponent::ServerShootProjectile_Implementation(const FFirearmComponentShotExtendedRep& Rep) {
}

void URadiusFirearmComponent::ServerEjectChamber_Implementation(const TArray<FFirearmEjectedAmmo>& InEjectedAmmo, const FFirearmStateRep& Rep, const FFirearmAmmoStateRep& AmmoRep) {
}

void URadiusFirearmComponent::ServerAmmoInserted_Implementation(AActor* OtherActor, const FFirearmAmmoStateRep& Rep) {
}

void URadiusFirearmComponent::PreInitializeSound(USoundBase* InSoundBase) {
}

void URadiusFirearmComponent::OnRep_State() {
}

void URadiusFirearmComponent::OnRep_AmmoState() {
}

void URadiusFirearmComponent::OnItemStackChanged() {
}

void URadiusFirearmComponent::OnDynamicDataUnlinked(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusFirearmComponent::OnDynamicDataLinked() {
}

void URadiusFirearmComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) {
}

void URadiusFirearmComponent::MulticastShotFailed_Implementation(const FFirearmStateRep& Rep) {
}

void URadiusFirearmComponent::MulticastShootProjectile_Implementation(const FFirearmComponentShotRep& Rep) {
}

void URadiusFirearmComponent::MulticastEjectChamber_Implementation(const TArray<FGameplayTag>& EjectedShells) {
}

void URadiusFirearmComponent::MulticastAmmoInserted_Implementation() {
}

bool URadiusFirearmComponent::IsWeaponCocked() const {
    return false;
}

bool URadiusFirearmComponent::IsSliderLock() const {
    return false;
}

bool URadiusFirearmComponent::IsOutOfAmmo() const {
    return false;
}

bool URadiusFirearmComponent::IsOnSafety() const {
    return false;
}

bool URadiusFirearmComponent::IsAcceptsAmmoType(const FGameplayTag AmmoType) {
    return false;
}

void URadiusFirearmComponent::InitializeMagazine() {
}

bool URadiusFirearmComponent::HasDysfunction() {
    return false;
}

bool URadiusFirearmComponent::HasAmmoInBarrel_Implementation(bool& bIsShell) {
    return false;
}

UActorComponent* URadiusFirearmComponent::GetUnejectedBulletComponent(bool bOnlyNotShell) {
    return NULL;
}

FGameplayTag URadiusFirearmComponent::GetCurrentFireModeTag() const {
    return FGameplayTag{};
}

EWeaponDysfunction URadiusFirearmComponent::GetCurrentDysfunctionEnum() const {
    return EWeaponDysfunction::None;
}

FGameplayTag URadiusFirearmComponent::GetCurrentDysfunction() const {
    return FGameplayTag{};
}

void URadiusFirearmComponent::EndFire() {
}

FGameplayTag URadiusFirearmComponent::EjectChamber(bool bIsManual) {
    return FGameplayTag{};
}

bool URadiusFirearmComponent::DeliverAmmoFromMagToChamber_Implementation() {
    return false;
}

void URadiusFirearmComponent::ClearDysfunction(FGameplayTag DysfunctionToClear) {
}

bool URadiusFirearmComponent::CanShoot_Implementation() {
    return false;
}

void URadiusFirearmComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusFirearmComponent, ReplicatedFirearmState);
    DOREPLIFETIME(URadiusFirearmComponent, ReplicatedFirearmAmmoState);
}


