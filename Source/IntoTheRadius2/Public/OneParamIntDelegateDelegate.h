#pragma once
#include "CoreMinimal.h"
#include "OneParamIntDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneParamIntDelegate, int32, Value);

