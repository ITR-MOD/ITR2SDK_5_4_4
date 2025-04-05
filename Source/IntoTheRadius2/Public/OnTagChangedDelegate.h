#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnTagChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTagChanged, const FGameplayTag, Tag, const bool, bAdded);

