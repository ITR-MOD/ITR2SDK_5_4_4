#include "AnomalySaveData.h"

UAnomalySaveData::UAnomalySaveData() {
    this->DistanceAlongSpline = 0.00f;
    this->SplineMoveSpeed = 0.00f;
    this->TeleportPosition = 0;
}

UAnomalySaveData* UAnomalySaveData::CreateAnomalySaveData() {
    return NULL;
}


