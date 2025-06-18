#include "PlayerStatsComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerStatsComponent::UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHealth = 100.00f;
    this->CurrentStamina = 0.00f;
    this->CurrentHunger = 0.00f;
    this->GameData = NULL;
    this->CheatSubsystem = NULL;
    this->PlayerMovementComponent = NULL;
    this->VRMovementComponent = NULL;
    this->TimeController = NULL;
}

void UPlayerStatsComponent::Server_SetStaminaAndHungerUnreliable_Implementation(const float NewStamina, const float NewHunger) {
}

void UPlayerStatsComponent::Server_SetStaminaAndHungerReliable_Implementation(const float NewStamina, const float NewHunger) {
}

void UPlayerStatsComponent::Server_ClientChangeStaminaAndHungerAndNotifyAll_Implementation(const float StaminaDelta, const float HungerDelta) {
}

void UPlayerStatsComponent::Server_ChangeHealth_Implementation(const float Delta, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UPlayerStatsComponent::OnRep_CurrentStamina() {
}

void UPlayerStatsComponent::OnRep_CurrentHunger() {
}

void UPlayerStatsComponent::OnRep_CurrentHealth() {
}

void UPlayerStatsComponent::OnLevelLoadedStep(const ELevelLoadedEventStep Step) {
}

void UPlayerStatsComponent::OnDifficultyOptionChanged(FGameplayTag OptionTag, FGameplayTag ValueTag) {
}

void UPlayerStatsComponent::OnAnyDamageTaken(AActor* Actor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

bool UPlayerStatsComponent::IsAlive() const {
    return false;
}

float UPlayerStatsComponent::GetStaminaPercent() const {
    return 0.0f;
}

float UPlayerStatsComponent::GetStamina() const {
    return 0.0f;
}

float UPlayerStatsComponent::GetMaxStaminaAffectedByHunger() const {
    return 0.0f;
}

float UPlayerStatsComponent::GetJumpStaminaCost() const {
    return 0.0f;
}

float UPlayerStatsComponent::GetHungerPercent() const {
    return 0.0f;
}

EHungerLevel UPlayerStatsComponent::GetHungerLevel() const {
    return EHungerLevel::None;
}

float UPlayerStatsComponent::GetHunger() const {
    return 0.0f;
}

float UPlayerStatsComponent::GetHealth() const {
    return 0.0f;
}

void UPlayerStatsComponent::Client_UpdateHungerAfterTimeChange_Implementation(const FVector Location, const int32 Seconds) {
}

void UPlayerStatsComponent::Client_OnWeightRecalculated_Implementation(const FString& ChangedPlayerContainerID) {
}

void UPlayerStatsComponent::Client_InitStaminaAndHunger_Implementation(const float Stamina, const float Hunger) {
}

void UPlayerStatsComponent::Client_ChangeStaminaAndHungerAndNotifyAll_Implementation(const float StaminaDelta, const float HungerDelta) {
}

void UPlayerStatsComponent::ChangeStaminaAndNotifyAll(const float Delta) {
}

void UPlayerStatsComponent::ChangeHungerAndNotifyAll(const float Delta) {
}

void UPlayerStatsComponent::ChangeDamageMitigatingItems(const FString& PlayerUId, const FString& ContainerID, const FString& ItemId, const bool bHasAttached) {
}

void UPlayerStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerStatsComponent, CurrentHealth);
    DOREPLIFETIME(UPlayerStatsComponent, CurrentStamina);
    DOREPLIFETIME(UPlayerStatsComponent, CurrentHunger);
}


