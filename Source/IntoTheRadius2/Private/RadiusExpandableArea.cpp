#include "RadiusExpandableArea.h"

URadiusExpandableArea::URadiusExpandableArea() {
}

void URadiusExpandableArea::SynchronizeProperties() {
}

void URadiusExpandableArea::SetExpandedImage(const FSlateBrush Image) {
}

void URadiusExpandableArea::SetContentForSlot(const FName SlotName, UWidget* Content) {
}

void URadiusExpandableArea::SetCollapsedImage(const FSlateBrush Image) {
}

bool URadiusExpandableArea::IsSlotExists(const FName SlotName) const {
    return false;
}

void URadiusExpandableArea::GetSlotNames(TArray<FName>& SlotNames) const {
}

FSlateBrush URadiusExpandableArea::GetExpandedImage() const {
    return FSlateBrush{};
}

UWidget* URadiusExpandableArea::GetContentForSlot(const FName SlotName) const {
    return NULL;
}

FSlateBrush URadiusExpandableArea::GetCollapsedImage() const {
    return FSlateBrush{};
}


