#include "RadiusDamageType.h"

URadiusDamageType::URadiusDamageType() {
    this->DamageCategory = EDamageCategory::None;
    this->CategoryLevel = 1;
    this->DamageHandler = NULL;
}


