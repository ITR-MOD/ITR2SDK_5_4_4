#include "RadiusTutorial.h"
#include "Components/SceneComponent.h"

ARadiusTutorial::ARadiusTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bIsEnabled = true;
    this->bIsRunning = false;
    this->CurrentStepIndex = -1;
}



void ARadiusTutorial::Disable() {
}


