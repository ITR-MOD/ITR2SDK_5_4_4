#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TwoParamsGameplayTagDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTwoParamsGameplayTagDelegate, FGameplayTag, Value1, FGameplayTag, Value2);

