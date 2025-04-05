#include "RadiusAISenseConfig_Hearing.h"

URadiusAISenseConfig_Hearing::URadiusAISenseConfig_Hearing() {
    this->Implementation = NULL;
    this->HearingRange = 100000.00f;
    this->LoSHearingRange = 0.00f;
    this->bUseLoSHearing = false;
}


