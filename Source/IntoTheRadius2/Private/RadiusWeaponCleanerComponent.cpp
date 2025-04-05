#include "RadiusWeaponCleanerComponent.h"

URadiusWeaponCleanerComponent::URadiusWeaponCleanerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadiusItemOwner = NULL;
    this->bSingleLOD = false;
    this->LODIndex = 0;
    this->PaintShape = EPaintShape::Sphere;
    this->OilPaintFallOff = NULL;
}

void URadiusWeaponCleanerComponent::ResetOilStateNative() {
}

void URadiusWeaponCleanerComponent::ResetCleanStateNative() {
}

void URadiusWeaponCleanerComponent::OilTickNative(const int32 TimerValue, const int32 OilValue) {
}

bool URadiusWeaponCleanerComponent::OilPaintNative(const FVector& Location, const FVector& Extent) {
    return false;
}

ARadiusItemBase* URadiusWeaponCleanerComponent::GetRadiusItemOwner() const {
    return NULL;
}

float URadiusWeaponCleanerComponent::CleanNative(const FVector& Location, const FVector& Extent) {
    return 0.0f;
}


