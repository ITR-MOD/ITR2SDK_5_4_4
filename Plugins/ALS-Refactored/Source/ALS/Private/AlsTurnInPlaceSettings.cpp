#include "AlsTurnInPlaceSettings.h"

UAlsTurnInPlaceSettings::UAlsTurnInPlaceSettings() {
    this->Animation = NULL;
    this->PlayRate = 1.20f;
    this->bScalePlayRateByAnimatedTurnAngle = true;
    this->AnimatedTurnAngle = 0.00f;
}


