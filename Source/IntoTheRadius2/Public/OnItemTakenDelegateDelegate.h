#pragma once
#include "CoreMinimal.h"
#include "OnItemTakenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemTakenDelegate, bool, bLastItem);

