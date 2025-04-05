#pragma once
#include "CoreMinimal.h"
#include "OnMuzzleChangedDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuzzleChanged, UActorComponent*, RelevantMuzzle, bool, bIsSilencerMuzzle);

