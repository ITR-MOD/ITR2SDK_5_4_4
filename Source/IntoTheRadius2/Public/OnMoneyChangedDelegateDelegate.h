#pragma once
#include "CoreMinimal.h"
#include "EMoneyChangeReason.h"
#include "OnMoneyChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMoneyChangedDelegate, int32, NewMoney, int32, Delta, const FString&, AnalyticsParams, TEnumAsByte<EMoneyChangeReason>, MoneyChangeReason);

