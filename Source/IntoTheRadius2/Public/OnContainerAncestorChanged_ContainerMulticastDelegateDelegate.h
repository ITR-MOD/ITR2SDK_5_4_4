#pragma once
#include "CoreMinimal.h"
#include "OnContainerAncestorChanged_ContainerMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerAncestorChanged_ContainerMulticastDelegate, const FString&, OldParentId, const FString&, NewParentId);

