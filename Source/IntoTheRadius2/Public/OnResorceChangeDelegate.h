#pragma once
#include "CoreMinimal.h"
#include "OnResorceChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResorceChange, bool, bIsSuccess);

