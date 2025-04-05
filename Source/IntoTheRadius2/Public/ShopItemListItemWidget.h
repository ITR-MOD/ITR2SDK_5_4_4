#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ShopItemListItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UShopItemListItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
public:
    UShopItemListItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidget(const FText& InItemName, int32 InItemCount, int32 InMoneyCost, bool InCanBeRemoved);
    
    UFUNCTION(BlueprintCallable)
    void FireOnRemoveClicked();
    
};

