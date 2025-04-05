#include "AnomalyBase.h"

AAnomalyBase::AAnomalyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckVolumesDebug = true;
}

UAnomalySaveData* AAnomalyBase::FindAnomalySaveData() {
    return NULL;
}


