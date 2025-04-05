#include "Firearm.h"

FFirearm::FFirearm() {
    this->FireRateSingleMin = 0.00f;
    this->FireRateSingleMax = 0.00f;
    this->FireRateBurst = 0.00f;
    this->FireDuration = 0.00f;
    this->ShotsPerBurstDeviationMax = 0;
    this->ShotsPerBurstMax = 0;
    this->ShotsPerBurstCurve = NULL;
    this->BurstFireDistThreshold = 0.00f;
    this->bIsAutomatic = false;
    this->BrakeBetweenBursts = 0.00f;
    this->bCanFireInMove = false;
    this->BulletSpreadHalfAngleMin = 0.00f;
    this->BulletSpreadHalfAngleMax = 0.00f;
    this->BestAttackDistance = 0.00f;
    this->OptimalAttackRangeThreshold = 0.00f;
    this->MaxAmmoInClip = 0;
    this->AmmoInClipToReloadRatio = 0.00f;
    this->FireSound = NULL;
}

