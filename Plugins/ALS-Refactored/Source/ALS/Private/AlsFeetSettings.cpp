#include "AlsFeetSettings.h"

FAlsFeetSettings::FAlsFeetSettings() {
    this->bDisableFootLock = false;
    this->FootHeight = 0.00f;
    this->IkTraceChannel = TraceTypeQuery1;
    this->IkTraceDistanceUpward = 0.00f;
    this->IkTraceDistanceDownward = 0.00f;
}

