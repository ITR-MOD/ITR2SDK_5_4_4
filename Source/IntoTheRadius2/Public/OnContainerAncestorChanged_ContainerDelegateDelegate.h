#pragma once
#include "CoreMinimal.h"
#include "OnContainerAncestorChanged_ContainerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerAncestorChanged_ContainerDelegate, const FString&, OldParentId, const FString&, NewParentId);

