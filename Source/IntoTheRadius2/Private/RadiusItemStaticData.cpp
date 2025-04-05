#include "RadiusItemStaticData.h"

FRadiusItemStaticData::FRadiusItemStaticData() {
    this->ItemDescriptionDisplay = ERadiusItemInfoDisplayType::None;
    this->ItemInstructionDisplay = ERadiusItemInfoDisplayType::None;
    this->ItemDurability = 0.00f;
    this->DurabilityIndependentOfDifficulty = false;
    this->DamageToDurabilityMultiplier = 0.00f;
    this->DestroyOnZeroDurability = false;
    this->DisplayDurability = false;
    this->ItemWeight = 0.00f;
    this->ItemWeightCapacity = 0.00f;
    this->ItemPurchasePrice = 0.00f;
    this->ItemSellPrice = 0.00f;
    this->bCanEvenrUseItem = false;
    this->NutritionalValue = 0.00f;
}

