#pragma once
#include "CoreMinimal.h"
#include "ELevelLoadedEventStep.h"
#include "OnLevelLoadStepDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelLoadStepDelegate, const ELevelLoadedEventStep, LoadStep);

