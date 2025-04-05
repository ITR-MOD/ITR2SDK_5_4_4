#pragma once
#include "CoreMinimal.h"
#include "OnItemChangeParentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemChangeParent, const FString&, ContainerID);

