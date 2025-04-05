#include "AlsThirdPersonCameraSettings.h"

FAlsThirdPersonCameraSettings::FAlsThirdPersonCameraSettings() {
    this->FOV = 0.00f;
    this->TraceRadius = 0.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->bEnableTraceDistanceSmoothing = false;
}

