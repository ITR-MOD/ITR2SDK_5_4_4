#pragma once
#include "CoreMinimal.h"
#include "OnDeathDelegate.generated.h"

class AActor;
class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeath, const AController*, Instigator, const AActor*, DiedNPC);

