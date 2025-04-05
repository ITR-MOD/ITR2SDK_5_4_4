#include "WeaponDefaultsConfig.h"

UWeaponDefaultsConfig::UWeaponDefaultsConfig() {
    this->ShellLifeTime = 10.00f;
    this->BulletClassActor = NULL;
    this->ShotgunDamageType = NULL;
    this->ProjectileImpactsComponentClass = NULL;
    this->BulletsFlyBySoundDistance = 450.00f;
    this->DysfunctionMessageTime = 2.00f;
    this->ImpactDataTable = NULL;
    this->OilSprayWorkSeconds = 15.00f;
    this->OilDryOutSeconds = 30.00f;
    this->BrushDurabilityPerClean = 0.50f;
    this->BrushCleanRatio = 0.25f;
}

float UWeaponDefaultsConfig::GetTotalVerticesMultiplier(const FGameplayTag ItemTypeTag) const {
    return 0.0f;
}

float UWeaponDefaultsConfig::GetCleanedPercentToDurabilityMultiplier(const FGameplayTag ItemTypeTag) const {
    return 0.0f;
}


