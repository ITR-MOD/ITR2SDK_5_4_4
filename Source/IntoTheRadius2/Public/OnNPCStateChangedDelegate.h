#pragma once
#include "CoreMinimal.h"
#include "ENPCState.h"
#include "OnNPCStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNPCStateChanged, const ENPCState&, NPCState);

