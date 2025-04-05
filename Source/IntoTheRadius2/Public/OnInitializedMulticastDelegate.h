#pragma once
#include "CoreMinimal.h"
#include "OnInitializedMulticastDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitializedMulticast, UObject*, InitializedObject);

