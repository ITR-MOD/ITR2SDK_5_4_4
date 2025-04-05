#pragma once
#include "CoreMinimal.h"
#include "OneParamBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneParamBoolDelegate, bool, Value);

