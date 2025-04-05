#include "ItemInfo.h"

UItemInfo::UItemInfo() : UUserWidget(FObjectInitializer::Get()) {
}

void UItemInfo::UnbindItemParentContainerChangedTracking(AActor* Item) {
}

void UItemInfo::UnbindEventToAllContainersOnItem(AActor* Item) {
}

void UItemInfo::SetHandInfo_Implementation() {
}

void UItemInfo::OnHolsteredItemParentContainerChanged(const FString& NewParentID, const FString& OldParentID) {
}

void UItemInfo::OnHolsterAttachChanged(URadiusHolsterComponent* HolsterComponent, ARadiusGrippableActorBase* RadiusItem, bool bHasAttached) {
}

bool UItemInfo::IsHandInfo_Implementation() {
    return false;
}

void UItemInfo::BindItemParentContainerChangedTracking(AActor* Item) {
}

void UItemInfo::BindEventToAllContainersOnItem(AActor* Item) {
}


