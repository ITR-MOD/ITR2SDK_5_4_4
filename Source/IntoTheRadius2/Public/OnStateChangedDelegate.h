#pragma once
#include "CoreMinimal.h"
#include "ENPCState.h"
#include "OnStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChanged, const ENPCState, NewState, const ENPCState, PrevState);

