#pragma once
#include "CoreMinimal.h"
#include "OnInitializedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnInitialized, UObject*, InitializedObject);

