#include "ManualCoverPoint.h"
#include "Components/SceneComponent.h"

AManualCoverPoint::AManualCoverPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComp"));
    this->bLeftCoverStanding = false;
    this->bRightCoverStanding = false;
    this->bLeftCoverCrouched = false;
    this->bRightCoverCrouched = false;
    this->bFrontCoverCrouched = true;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}

FCoverData AManualCoverPoint::GetCoverData() const {
    return FCoverData{};
}


