#include "RadiusBed.h"

ARadiusBed::ARadiusBed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionRadius = 200;
}

bool ARadiusBed::ArePlayersNear() {
    return false;
}


