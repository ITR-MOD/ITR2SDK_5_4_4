#pragma once
#include "CoreMinimal.h"
#include "OnStartedDetectTargetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedDetectTarget, const AActor*, Target);

