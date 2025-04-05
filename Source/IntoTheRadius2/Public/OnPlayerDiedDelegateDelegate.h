#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDiedDelegateDelegate.generated.h"

class AActor;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerDiedDelegate, APawn*, Value, AActor*, DamageCauser);

