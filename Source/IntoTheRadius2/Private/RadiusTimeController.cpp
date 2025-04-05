#include "RadiusTimeController.h"

ARadiusTimeController::ARadiusTimeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->LevelSequencer = NULL;
    this->Replicator = NULL;
    this->DebugTimeScale = 1.00f;
}

void ARadiusTimeController::SetDebugTimeScale(float Scale) {
}

void ARadiusTimeController::SetClockEnable(bool bEnable) {
}

void ARadiusTimeController::OnGameTimeRefresh() {
}

void ARadiusTimeController::OnGameTimeChanged(float AddedSeconds) {
}


