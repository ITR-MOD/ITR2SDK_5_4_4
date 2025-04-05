#include "NPCSightStaticData.h"

FNPCSightStaticData::FNPCSightStaticData() {
    this->FriendDeathSpotDistModifier = 0.00f;
    this->CrouchTargetSpotDistMultiplier = 0.00f;
    this->LightSourceOnDistanceMultiplier = 0.00f;
    this->DaytimeVisibilityDistCurve = NULL;
    this->FullBodyTargetSpotTimeMultiplier = 0.00f;
    this->MinTracesNumNonBlockedForFullBody = 0;
    this->NoVisibilitySpotTimeMultiplier = 0.00f;
    this->LightSourceOnSpotTimeMultiplier = 0.00f;
    this->DaytimeVisibilitySpotTimeCurve = NULL;
    this->BothInDistortionZoneVisibilityDistanceModifier = 0.00f;
    this->OneInDistortionZoneVisibilityDistanceModifier = 0.00f;
    this->BothInDistortionZoneSpotTimeModifier = 0.00f;
    this->OneInDistortionZoneSpotTimeModifier = 0.00f;
}

