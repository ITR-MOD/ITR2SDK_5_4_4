#pragma once
#include "CoreMinimal.h"
#include "OnStoppedSeeingTargetDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStoppedSeeingTarget, const AActor*, Target);

