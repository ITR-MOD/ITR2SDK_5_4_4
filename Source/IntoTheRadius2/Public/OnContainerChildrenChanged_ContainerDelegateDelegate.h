#pragma once
#include "CoreMinimal.h"
#include "OnContainerChildrenChanged_ContainerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerChildrenChanged_ContainerDelegate, const FString&, ChangedChildName, bool, IsSelfChange);

