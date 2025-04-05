#pragma once
#include "CoreMinimal.h"
#include "InstanceIDParamDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstanceIDParamDelegate, const FString&, InstanceID);

