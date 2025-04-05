#pragma once
#include "CoreMinimal.h"
#include "OneParamPawnDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneParamPawnDelegate, APawn*, Value);

