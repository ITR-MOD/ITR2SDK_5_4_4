#include "WeaponStaticData.h"

FWeaponStaticData::FWeaponStaticData() {
    this->bIsSemiAuto = false;
    this->BurstModeCount = 0;
    this->bUseVirtualStock = false;
    this->bDisableSmoothing = false;
    this->DurabilityDamageAutoFireCoefficient = 0.00f;
    this->bCockedOnSafety = false;
    this->bIsOpenAfterLastRound = false;
    this->DisplayReliability = 0.00f;
    this->bAimSmoothing = false;
    this->AimSmoothingAlpha = 0.00f;
    this->AimSmoothingDistance = 0.00f;
}

