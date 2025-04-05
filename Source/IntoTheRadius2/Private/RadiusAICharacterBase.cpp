#include "RadiusAICharacterBase.h"
#include "HealthComponent.h"

ARadiusAICharacterBase::ARadiusAICharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->GroupID = 0;
}

void ARadiusAICharacterBase::SetSightPointOffset(FVector& NewSightPointOffset) {
}

void ARadiusAICharacterBase::OnDeath(const AController* DeathInstigator, const AActor* DiedPawn) {
}

bool ARadiusAICharacterBase::IsAlive() const {
    return false;
}

FVector ARadiusAICharacterBase::GetPawnViewLocation_BP() const {
    return FVector{};
}

FText ARadiusAICharacterBase::GetNPCNameByTag(FGameplayTag GameplayTag) const {
    return FText::GetEmpty();
}

void ARadiusAICharacterBase::ChangeMoveSpeed(float NewSpeed) const {
}


