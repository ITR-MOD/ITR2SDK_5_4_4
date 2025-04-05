#include "ShopItemListWidget.h"

UShopItemListWidget::UShopItemListWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemWidgetClass = NULL;
    this->ItemList = NULL;
}

void UShopItemListWidget::UpdateFromTags(const TArray<FGameplayTag>& ItemTags, bool bCanBeRemoved) {
}


