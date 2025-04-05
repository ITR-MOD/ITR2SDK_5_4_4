#pragma once
#include "CoreMinimal.h"
#include "EHTNPlanExecutionFinishedResult.h"
#include "OnHTNPlanExecutionFinishedBPDelegate.generated.h"

class UHTNComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHTNPlanExecutionFinishedBP, UHTNComponent*, Sender, EHTNPlanExecutionFinishedResult, Result);

