#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnBulletFiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBulletFired, FGameplayTag, TypeTag, bool, bIsLastRound);

