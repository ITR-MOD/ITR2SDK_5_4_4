#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ShopItemRemovedByTagDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShopItemRemovedByTagDelegate, const FGameplayTag&, ItemTag);

