#pragma once
#include "CoreMinimal.h"
#include "OnContainerParentChanged_ContainerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerParentChanged_ContainerDelegate, const FString&, OldParentID, const FString&, NewParentID);

