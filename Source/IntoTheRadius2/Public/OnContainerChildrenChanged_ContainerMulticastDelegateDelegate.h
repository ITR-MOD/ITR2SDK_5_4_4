#pragma once
#include "CoreMinimal.h"
#include "OnContainerChildrenChanged_ContainerMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerChildrenChanged_ContainerMulticastDelegate, const FString&, ChangedChildName, bool, IsSelfChange);

