#pragma once
#include "CoreMinimal.h"
#include "OneParamActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneParamActorDelegate, AActor*, Value);

