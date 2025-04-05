#include "RadiusNonHumanAICharacter.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

ARadiusNonHumanAICharacter::ARadiusNonHumanAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->GroupID = 0;
}

void ARadiusNonHumanAICharacter::SetIsAlive(const bool Value) {
}

void ARadiusNonHumanAICharacter::SetAnimState(FGameplayTag NewAnimationTag) {
}

void ARadiusNonHumanAICharacter::OnRep_AnimationState(FGameplayTag NewAnimationTag) {
}

void ARadiusNonHumanAICharacter::OnDeath(const AController* DeathInstigator, const AActor* DiedNPC) {
}

bool ARadiusNonHumanAICharacter::IsAlive() const {
    return false;
}

FText ARadiusNonHumanAICharacter::GetNPCNameByTag(FGameplayTag GameplayTag) const {
    return FText::GetEmpty();
}

FGameplayTag ARadiusNonHumanAICharacter::GetAnimState() const {
    return FGameplayTag{};
}

void ARadiusNonHumanAICharacter::ChangeMoveSpeed(float NewSpeed) const {
}

void ARadiusNonHumanAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusNonHumanAICharacter, AnimationTag);
}


