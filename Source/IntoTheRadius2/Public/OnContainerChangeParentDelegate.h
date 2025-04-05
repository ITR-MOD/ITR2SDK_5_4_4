#pragma once
#include "CoreMinimal.h"
#include "OnContainerChangeParentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnContainerChangeParent, const FString&, ContainerID, const FString&, OldParentID, const FString&, NewParentID);

