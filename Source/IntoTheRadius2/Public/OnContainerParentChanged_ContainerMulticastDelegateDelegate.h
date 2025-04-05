#pragma once
#include "CoreMinimal.h"
#include "OnContainerParentChanged_ContainerMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerParentChanged_ContainerMulticastDelegate, const FString&, OldParentID, const FString&, NewParentID);

