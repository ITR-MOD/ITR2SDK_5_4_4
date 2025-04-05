#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ShopItemRemovedByTagDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ShopItemListWidget.generated.h"

class UShopItemListItemWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UShopItemListWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShopItemListItemWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShopItemRemovedByTagDelegate OnItemRemovedByTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UShopItemListItemWidget*> ItemWidgetMap;
    
public:
    UShopItemListWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateFromTags(const TArray<FGameplayTag>& ItemTags, bool bCanBeRemoved);
    
};

