#include "RadiusBoxComponent.h"

URadiusBoxComponent::URadiusBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
}

FTransform URadiusBoxComponent::GetItemInfoSpawnLocation() {
    return FTransform{};
}


