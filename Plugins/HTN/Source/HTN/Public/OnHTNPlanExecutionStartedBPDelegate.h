#pragma once
#include "CoreMinimal.h"
#include "OnHTNPlanExecutionStartedBPDelegate.generated.h"

class UHTNComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHTNPlanExecutionStartedBP, UHTNComponent*, Sender);

