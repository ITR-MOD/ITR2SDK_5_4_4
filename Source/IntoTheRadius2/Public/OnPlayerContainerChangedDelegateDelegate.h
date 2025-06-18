#pragma once
#include "CoreMinimal.h"
#include "OnPlayerContainerChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerContainerChangedDelegate, const FString&, PlayerID, const FString&, ParentID, const FString&, ContainerID, const bool, bHasAttached);

