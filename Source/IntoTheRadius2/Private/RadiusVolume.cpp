#include "RadiusVolume.h"

ARadiusVolume::ARadiusVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

bool ARadiusVolume::EncompassesPoint_BP(FVector Point, float SphereRadius) const {
    return false;
}


