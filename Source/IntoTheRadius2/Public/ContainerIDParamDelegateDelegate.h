#pragma once
#include "CoreMinimal.h"
#include "ContainerIDParamDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FContainerIDParamDelegate, const FString&, ContainerID);

