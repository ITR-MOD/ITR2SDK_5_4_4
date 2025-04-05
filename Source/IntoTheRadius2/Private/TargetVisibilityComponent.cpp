#include "TargetVisibilityComponent.h"

UTargetVisibilityComponent::UTargetVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionChannel = ECC_WorldStatic;
    this->VegetationMultiplierDecreasePerUnit = 0.20f;
    this->GameConfigSubsystem = NULL;
    this->DifficultySettingsSubsystem = NULL;
    this->NPCConfig = NULL;
    this->TimeSubsystem = NULL;
    this->OwnerMovementComp = NULL;
    this->Replicator = NULL;
    this->Owner = NULL;
}

void UTargetVisibilityComponent::SetInsideDistortionZone(const bool bIsInside) {
}

bool UTargetVisibilityComponent::IsInsideDistortionZone() const {
    return false;
}


